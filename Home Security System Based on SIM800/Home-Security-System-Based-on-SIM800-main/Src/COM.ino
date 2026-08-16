



#include "uman_librarys.h"
#include "uman_pinout.h"
#include "uman_var.h"

#include "uman_eeprom.h"
#include "uman_rf.h"
#include "uman_sim.h"



//void SecondsCount_s12() {
//
// if (millis() > StartMilis_s12 + 500) {
//  StartMilis_s12 = millis();
// 
//  if (button.getState() == 1) {
//    if (sim_task.isEnabled() == 1) {
//      sim_task.disable();
//    }
//  }
//  else {
//    if (sim_task.isEnabled() == 0) {
//      sim_task.enable();
//    }
//  }
//}

  //  if (millis() > StartMilis_s12 + 1000) {
  //    StartMilis_s12 = millis();
  //    TIMER_S12++;
  //    if (TIMER_S12 >= 60  && TIMER_S12 < 70 ) {
  //      if (sim_task.isEnabled() == 0) {
  //        TIMER_S1 = 3600;
  //        sim_task.enable();
  //      }
  //    }
  //    if (TIMER_S12 < 60) {
  //      if (sim_task.isEnabled() == 1) {
  //        POWER_SIM800L_ACTION.beep(50000);
  //        sim_task.disable();
  //      }
  //    }
  //  }


//}


void setup() {

  EEPROM.begin(512);

  Serial.begin(9600);
  //mySerial.begin(115200);



  Scheduler.start(&rf_task);
  Scheduler.start(&sim_task);

  Scheduler.begin();
}

void loop() {
  //SecondsCount_s12();
}



//
//
//void setup() {
//
//  WiFi.mode(WIFI_OFF);
//
//  Serial.begin(115200);
//  mySerial.begin(115200);
//
//  mySwitch.enableReceive(RF_Receiver_Pin);
//
//  button.setDebounceTime(100);
//  //ZONE1_isPressed.setDebounceTime(100);
//  //ZONE2_isPressed.setDebounceTime(100);
//  //ZONE3_isPressed.setDebounceTime(100);
//  //ZONE4_isPressed.setDebounceTime(100);
//
//  EEPROM.begin(512);
//
//  EEPROM_GET_ALL_DATA();
//
//
//
//  delay(1000);
//
////  Serial.println("AT\r");
////  delay(200);
////  Serial.println("AT\r");
////  delay(200);
////  Serial.println("AT\r");
////  delay(200);
////  delay(5000);
//
//   mySerial.write("RESET !!!!!");
//  SIM800L_DEFALT() ;
//
//}
//
//
//
//
//void loop() {
//  ////rf
//
//  LOOPER();
//  STATUS_POWER();
//  STATUS_STATIC_ZONE();
//  STATUS_BUTTON();
//  RF_MODULE();
//  SIREN_PROCESS();
//
//
//
//  ////sim
//  SecondsCount();
//  SIM800L_ERORR_CHECK();
//  SIM800L_TIME_CHECK();
//  SMS_DETECTION();
//  SMS_DECODE();
//  SMS_SEND();
//
//
//  //ESP.wdtFeed();
//  //      if (mySerial.available()){
//  //      Serial.write(mySerial.read());}
//  //    if (Serial.available()){
//  //      mySerial.write(Serial.read());}
//
//}
