
#include<stdio.h>
#include"readscale.h"


int main(int argc, char ** argv){
  openScaleDevice("/dev/usb/hiddev2");
  int i = 0;
  //for(i = 0 ; i< 10; i = i+1){
  for(;;){
    printf("value: %d\n", value());
  }
  closeScaleDevice();

}
