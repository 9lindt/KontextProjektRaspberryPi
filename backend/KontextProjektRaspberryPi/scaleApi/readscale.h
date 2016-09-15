// #include<libusb.h>
#include <stdio.h>
#include <linux/hiddev.h>

// #define DEBUG


// uint16_t VENDOR_ID = 0x0922,
// PRODUCT_ID = 0x8003;
//
// static libusb_device_handle * scale = 0;
// static struct	libusb_context * ctx = 0;h

static FILE * scaleDeviceFile = 0;

//tracks if scale is in positive or negative range
int factor = 1;


static void openScaleDevice(const char * path){
  // libusb_init(&ctx);
  // scale = libusb_open_device_with_vid_pid(
  //   ctx,
  //   VENDOR_ID,
  //   PRODUCT_ID
  // );

  scaleDeviceFile = fopen(path, "r");



}

static void closeScaleDevice(){
  // libusb_close(scale);
  // scale = 0;
  // libusb_exit(ctx);
  fclose(scaleDeviceFile);
  scaleDeviceFile = 0;
}


//blocks until the scale sends the next value event
static int value(){
  struct hiddev_event event = { 0, 0};

  if(scaleDeviceFile != 0  ){
    while(1){
      fread(&event, 8 , 1, scaleDeviceFile );
      switch(event.hid){
        case 9240640:
          return event.value * factor;

        case 9240692:
          if(event.value == 1){
            factor = 1;
          } else {
            factor = -1;
          }
          break;
        case 9240693:
            if(event.value == 0){
              factor = 1;
            } else {
              factor = -1;
            }
            break;

        default:
          #ifdef DEBUG
          printf("hid: %d, value:%d \n", event.hid, event.value );
          #endif
          break;
      }

    }
    return -1;
  }
  return -1;
}
