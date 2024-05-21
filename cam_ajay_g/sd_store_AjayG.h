#include "FS.h"                // SD Card ESP32
#include "SD_MMC.h"            // SD Card ESP32

#define BUTTON_PIN 16

void initMicroSDCard() {
SD_MMC.begin();
}
//it will work!
String getPictureFilename(){
  String filename = "/picture_" + String(random(1,3600)) +".jpg";
  return filename; 
}
void takeSavePhoto(){
    
  camera_fb_t * fb = esp_camera_fb_get();
 
  
  if(!fb) {
    ESP.restart();// restrat the esp if frame not capture 
  }

  String path = getPictureFilename();
  Serial.printf("Picture file name: %s\n", path.c_str());
  
  // Save picture to microSD card
  fs::FS &fs = SD_MMC; 
  File file = fs.open(path.c_str(),FILE_WRITE);
  if(!file){
    Serial.printf("Failed to open file in writing mode");
  } 
  else {
    file.write(fb->buf, fb->len); // payload (image), payload length
    Serial.printf("Saved: %s\n", path.c_str());
  }
  file.close();
  esp_camera_fb_return(fb); 
}

