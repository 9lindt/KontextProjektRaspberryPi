#include "nfcscanner.h"
#include <QtNfc/QNearFieldManager>
#include <QDebug>

NfcScanner::NfcScanner(QObject *parent)
    : QObject(parent)
{


}

void NfcScanner::targetConnected()
{
    qDebug() << "targetConnectd";
}

void NfcScanner::targetLost()
{
    qDebug() << "targetLost";
}


/*-
 * Free/Libre Near Field Communication (NFC) library
 *
 * Libnfc historical contributors:
 * Copyright (C) 2009      Roel Verdult
 * Copyright (C) 2009-2013 Romuald Conty
 * Copyright (C) 2010-2012 Romain Tartière
 * Copyright (C) 2010-2013 Philippe Teuwen
 * Copyright (C) 2012-2013 Ludovic Rousseau
 * See AUTHORS file for a more comprehensive list of contributors.
 * Additional contributors of this file:
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions are met:
 *  1) Redistributions of source code must retain the above copyright notice,
 *  this list of conditions and the following disclaimer.
 *  2 )Redistributions in binary form must reproduce the above copyright
 *  notice, this list of conditions and the following disclaimer in the
 *  documentation and/or other materials provided with the distribution.
 *
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
 * AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
 * IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE
 * ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT HOLDER OR CONTRIBUTORS BE
 * LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR
 * CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF
 * SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS
 * INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN
 * CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE)
 * ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
 * POSSIBILITY OF SUCH DAMAGE.
 *
 * Note that this license only applies on the examples, NFC library itself is under LGPL
 *
 */

/**
 * @file nfc-poll.c
 * @brief Polling example
 */

#ifdef HAVE_CONFIG_H
#  include "config.h"
#endif // HAVE_CONFIG_H

#include <err.h>
#include <inttypes.h>
#include <signal.h>
#include <stdio.h>
#include <stddef.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

#include <nfc/nfc.h>
#include <nfc/nfc-types.h>

#include "nfcApi/utils/nfc-utils.h"

#define MAX_DEVICE_COUNT 16

static nfc_device *pnd = NULL;
static nfc_context *context;

static void stop_polling(int sig)
{
  (void) sig;
  if (pnd != NULL)
    nfc_abort_command(pnd);
  else {
    nfc_exit(context);
    exit(EXIT_FAILURE);
  }
}

static void
print_usage(const char *progname)
{
  printf("usage: %s [-v]\n", progname);
  printf("  -v\t verbose display\n");
}
char * NfcScanner::poll_nfc_ids()
{


  //signal(SIGINT, stop_polling);

  // Display libnfc version
  const char *acLibnfcVersion = nfc_version();

//  printf("%s uses libnfc %s\n", argv[0], acLibnfcVersion);
//  if (argc != 1) {
//    if ((argc == 2) && (0 == strcmp("-v", argv[1]))) {
//      verbose = true;
//    } else {
//      print_usage(argv[0]);
//      exit(EXIT_FAILURE);
//    }
//  }
  char * idAsString;

  const uint8_t uiPollNr = 20;
  const uint8_t uiPeriod = 2;
  const nfc_modulation nmModulations[5] = {
    { .nmt = NMT_ISO14443A, .nbr = NBR_106 },
    { .nmt = NMT_ISO14443B, .nbr = NBR_106 },
    { .nmt = NMT_FELICA, .nbr = NBR_212 },
    { .nmt = NMT_FELICA, .nbr = NBR_424 },
    { .nmt = NMT_JEWEL, .nbr = NBR_106 },
  };
  const size_t szModulations = 5;

  nfc_target nt;
  int res = 0;

  nfc_init(&context);
  if (context == NULL) {
    ERR("Unable to init libnfc (malloc)");
    exit(EXIT_FAILURE);
  }

  pnd = nfc_open(context, NULL);

  if (pnd == NULL) {
    ERR("%s", "Unable to open NFC device.");
    nfc_exit(context);
    exit(EXIT_FAILURE);
  }

  if (nfc_initiator_init(pnd) < 0) {
    nfc_perror(pnd, "nfc_initiator_init");
    nfc_close(pnd);
    nfc_exit(context);
    exit(EXIT_FAILURE);
  }

  printf("NFC reader: %s opened\n", nfc_device_get_name(pnd));
  //while(true)
  {
  printf("NFC device will poll during %ld ms (%u pollings of %lu ms for %" PRIdPTR " modulations)\n", (unsigned long) uiPollNr * szModulations * uiPeriod * 150, uiPollNr, (unsigned long) uiPeriod * 150, szModulations);
  if ((res = nfc_initiator_poll_target(pnd, nmModulations, szModulations, uiPollNr, uiPeriod, &nt))  < 0) {
    nfc_perror(pnd, "nfc_initiator_poll_target");
    nfc_close(pnd);
    nfc_exit(context);
    exit(EXIT_FAILURE);
  }


  if (res > 0) {
    //print_nfc_target(&nt, verbose);
      printf("device found. send message modulation type:%d nfc_baud_rate: %d info uid lenth %lu \n", (nt.nm.nmt), nt.nm.nbr, nt.nti.nai.szUidLen );
      int i = 0;

      //*2 because max hex rep for uint8_t is FF
      idAsString = (char *)malloc(nt.nti.nai.szUidLen * 2 * sizeof(char));

      for(i = 0; i < nt.nti.nai.szUidLen; i++){
          sprintf(idAsString + 2*i, "%02x", nt.nti.nai.abtUid[i]);
      }


      printf("%sID:", "\n");

      for(i = 0; i < nt.nti.nai.szUidLen; i++){
          printf("%x", nt.nti.nai.abtUid[i]);
      }
      printf("%sATs:", "\n");

      for(i = 0; i < nt.nti.nai.szAtsLen; i++){
          printf("%x", nt.nti.nai.abtAts[i]);
      }
      printf("%s", "\n");


  } else {
    printf("No target found.\n");
    sleep(1000);
  }
  }
  nfc_close(pnd);
  nfc_exit(context);
  return idAsString;

  exit(EXIT_SUCCESS);
}
