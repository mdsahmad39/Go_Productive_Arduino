#include <SevSeg.h>


SevSeg sevseg;

const int sledPin = 0;
const int bledPin = 1;
float displayTimeSecs = 1; //how long do you want each number on display to show (in secs)
float displayTime = (displayTimeSecs * 5000);
//long buzzerFrequency = 500;
//float buzzerDuration = (displayTimeSecs * 100);
long seconds = 59;
float startNumber24 =  seconds; //countdown starts with this number
float startNumber23 = seconds;
float startNumber22 = seconds;
float startNumber21 = seconds;
float startNumber20 = seconds;
float startNumber19 = seconds;
float startNumber18 = seconds;
float startNumber17 = seconds;
float startNumber16 = seconds;
float startNumber15 = seconds;
float startNumber14 = seconds;
float startNumber13 = seconds;
float startNumber12 = seconds;
float startNumber11 = seconds;
float startNumber10 = seconds;
float startNumber09 = seconds;
float startNumber08 = seconds;
float startNumber07 = seconds;
float startNumber06 = seconds;
float startNumber05 = seconds;
float startNumber04 = seconds;
float startNumber03 = seconds;
float startNumber02 = seconds;
float startNumber01 = seconds;
float startNumber00 = seconds;
float breakNumber04 = seconds;
float breakNumber03 = seconds;
float breakNumber02 = seconds;
float breakNumber01 = seconds;
float breakNumber00 = seconds;

float startNumber241 =  seconds; //countdown starts with this number
float startNumber231 = seconds;
float startNumber221 = seconds;
float startNumber211 = seconds;
float startNumber201 = seconds;
float startNumber191 = seconds;
float startNumber181 = seconds;
float startNumber171 = seconds;
float startNumber161 = seconds;
float startNumber151 = seconds;
float startNumber141 = seconds;
float startNumber131 = seconds;
float startNumber121 = seconds;
float startNumber111 = seconds;
float startNumber101 = seconds;
float startNumber091 = seconds;
float startNumber081 = seconds;
float startNumber071 = seconds;
float startNumber061 = seconds;
float startNumber051 = seconds;
float startNumber041 = seconds;
float startNumber031 = seconds;
float startNumber021 = seconds;
float startNumber011 = seconds;
float startNumber001 = seconds;
float breakNumber041 = seconds;
float breakNumber031 = seconds;
float breakNumber021 = seconds;
float breakNumber011 = seconds;
float breakNumber001 = seconds;

float startNumber242 =  seconds; //countdown starts with this number
float startNumber232 = seconds;
float startNumber222 = seconds;
float startNumber212 = seconds;
float startNumber202 = seconds;
float startNumber192 = seconds;
float startNumber182 = seconds;
float startNumber172 = seconds;
float startNumber162 = seconds;
float startNumber152 = seconds;
float startNumber142 = seconds;
float startNumber132 = seconds;
float startNumber122 = seconds;
float startNumber112 = seconds;
float startNumber102 = seconds;
float startNumber092 = seconds;
float startNumber082 = seconds;
float startNumber072 = seconds;
float startNumber062 = seconds;
float startNumber052 = seconds;
float startNumber042 = seconds;
float startNumber032 = seconds;
float startNumber022 = seconds;
float startNumber012 = seconds;
float startNumber002 = seconds;
float breakNumber042 = seconds;
float breakNumber032 = seconds;
float breakNumber022 = seconds;
float breakNumber012 = seconds;
float breakNumber002 = seconds;

float startNumber243 =  seconds; //countdown starts with this number
float startNumber233 = seconds;
float startNumber223 = seconds;
float startNumber213 = seconds;
float startNumber203 = seconds;
float startNumber193 = seconds;
float startNumber183 = seconds;
float startNumber173 = seconds;
float startNumber163 = seconds;
float startNumber153 = seconds;
float startNumber143 = seconds;
float startNumber133 = seconds;
float startNumber123 = seconds;
float startNumber113 = seconds;
float startNumber103 = seconds;
float startNumber093 = seconds;
float startNumber083 = seconds;
float startNumber073 = seconds;
float startNumber063 = seconds;
float startNumber053 = seconds;
float startNumber043 = seconds;
float startNumber033 = seconds;
float startNumber023 = seconds;
float startNumber013 = seconds;
float startNumber003 = seconds;

long endNumber = 0; //countdown ends with this number
float minutes, secondsDisp, secondsDisp1;

const int start_btn = A0;
const int reset_btn = A1;
//const int buzzerPin = 0;

int state, resett;
int btnState_start;
int btnState_reset;

void setup() {
  pinMode(start_btn, INPUT_PULLUP);
  pinMode(reset_btn, INPUT_PULLUP);
  pinMode(sledPin,OUTPUT);
  pinMode(bledPin, OUTPUT);
  digitalWrite(sledPin, LOW);
  digitalWrite(bledPin, LOW);
  byte numDigits = 4;
  byte digitPins[] = {2, 3, 4, 5};
  byte segmentPins[] = {6, 7, 8, 9, 10, 11, 12, 13};
  
  bool resistorsOnSegments = true;
  byte hardwareConfig = COMMON_CATHODE;
  bool updateWithDelays = false;
  bool leadingZeros = true;
  bool disableDecPoint = true;
  
  sevseg.begin(hardwareConfig, numDigits, digitPins, segmentPins, resistorsOnSegments,
  updateWithDelays, leadingZeros, disableDecPoint);
  sevseg.setBrightness(90);
}

void loop() {

  btnState_start = digitalRead(start_btn);
  btnState_reset = digitalRead(reset_btn);
    if(btnState_reset == HIGH && btnState_start == LOW){
    if (startNumber00 >= endNumber) {
      digitalWrite(sledPin, HIGH);
      digitalWrite(bledPin, LOW);
      for (long i = 0; i <= displayTime; i++){
    if (startNumber01 >= endNumber) {
      digitalWrite(sledPin, HIGH);
      digitalWrite(bledPin, LOW);
      for (long i = 0; i <= displayTime; i++){
    if (startNumber02 >= endNumber) {
      digitalWrite(sledPin, HIGH);
      digitalWrite(bledPin, LOW);
      for (long i = 0; i <= displayTime; i++){
    if (startNumber03 >= endNumber) {
      digitalWrite(sledPin, HIGH);
      digitalWrite(bledPin, LOW);
      for (long i = 0; i <= displayTime; i++){
    if (startNumber04 >= endNumber) {
      digitalWrite(sledPin, HIGH);
      digitalWrite(bledPin, LOW);
      for (long i = 0; i <= displayTime; i++){
    if (startNumber05 >= endNumber) {
      digitalWrite(sledPin, HIGH);
      digitalWrite(bledPin, LOW);
      for (long i = 0; i <= displayTime; i++){
    if (startNumber06 >= endNumber) {
      digitalWrite(sledPin, HIGH);
      digitalWrite(bledPin, LOW);
      for (long i = 0; i <= displayTime; i++){
    if (startNumber07 >= endNumber) {
      digitalWrite(sledPin, HIGH);
      digitalWrite(bledPin, LOW);
      for (long i = 0; i <= displayTime; i++){
    if (startNumber08 >= endNumber) {
      digitalWrite(sledPin, HIGH);
      digitalWrite(bledPin, LOW);
      for (long i = 0; i <= displayTime; i++){
    if (startNumber09 >= endNumber) {
      digitalWrite(sledPin, HIGH);
      digitalWrite(bledPin, LOW);
      for (long i = 0; i <= displayTime; i++){
    if (startNumber10 >= endNumber) {
      digitalWrite(sledPin, HIGH);
      digitalWrite(bledPin, LOW);
      for (long i = 0; i <= displayTime; i++){
    if (startNumber11 >= endNumber) {
      digitalWrite(sledPin, HIGH);
      digitalWrite(bledPin, LOW);
      for (long i = 0; i <= displayTime; i++){
    if (startNumber12 >= endNumber) {
      digitalWrite(sledPin, HIGH);
      digitalWrite(bledPin, LOW);
      for (long i = 0; i <= displayTime; i++){
    if (startNumber13 >= endNumber) {
      digitalWrite(sledPin, HIGH);
      digitalWrite(bledPin, LOW);
      for (long i = 0; i <= displayTime; i++){
    if (startNumber14 >= endNumber) {
      digitalWrite(sledPin, HIGH);
      digitalWrite(bledPin, LOW);
      for (long i = 0; i <= displayTime; i++){
    if (startNumber15 >= endNumber) {
      digitalWrite(sledPin, HIGH);
      digitalWrite(bledPin, LOW);
      for (long i = 0; i <= displayTime; i++){
    if (startNumber16 >= endNumber) {
      digitalWrite(sledPin, HIGH);
      digitalWrite(bledPin, LOW);
      for (long i = 0; i <= displayTime; i++){
    if (startNumber17 >= endNumber) {
      digitalWrite(sledPin, HIGH);
      digitalWrite(bledPin, LOW);
      for (long i = 0; i <= displayTime; i++){
    if (startNumber18 >= endNumber) {
      digitalWrite(sledPin, HIGH);
      digitalWrite(bledPin, LOW);
      for (long i = 0; i <= displayTime; i++){
    if (startNumber19 >= endNumber) {
      digitalWrite(sledPin, HIGH);
      digitalWrite(bledPin, LOW);
      for (long i = 0; i <= displayTime; i++){
    if (startNumber20 >= endNumber) {
      digitalWrite(sledPin, HIGH);
      digitalWrite(bledPin, LOW);
      for (long i = 0; i <= displayTime; i++){
    if (startNumber21 >= endNumber) {
      digitalWrite(sledPin, HIGH);
      digitalWrite(bledPin, LOW);
      for (long i = 0; i <= displayTime; i++){
    if (startNumber22 >= endNumber) {
      digitalWrite(sledPin, HIGH);
      digitalWrite(bledPin, LOW);
      for (long i = 0; i <= displayTime; i++){
    if (startNumber23 >= endNumber) {
      digitalWrite(sledPin, HIGH);
      digitalWrite(bledPin, LOW);
      for (long i = 0; i <= displayTime; i++){
    if(startNumber24 >= endNumber){
      digitalWrite(sledPin, HIGH);
      digitalWrite(bledPin, LOW);
      for (long i = 0; i <= displayTime; i++){
        sevseg.setNumber(2400 + startNumber24,0);
        sevseg.refreshDisplay();
      } 
      startNumber24--;    
      }
        sevseg.setNumber(2300+startNumber23,0);
        sevseg.refreshDisplay();
      }
      startNumber23--;
      }
        sevseg.setNumber(2200+startNumber22,0);
        sevseg.refreshDisplay();
      }
      startNumber22--;
      }
        sevseg.setNumber(2100+startNumber21,0);
        sevseg.refreshDisplay();
      }
      startNumber21--;
      }
        sevseg.setNumber(2000+startNumber20,0);
        sevseg.refreshDisplay();
      }
      startNumber20--;
      }
        sevseg.setNumber(1900+startNumber19,0);
        sevseg.refreshDisplay();
      }
      startNumber19--;
      }
      sevseg.setNumber(1800+startNumber18,0);
      sevseg.refreshDisplay();
      }
      startNumber18--;
      }
      sevseg.setNumber(1700+startNumber17,0);
      sevseg.refreshDisplay();
      }
      startNumber17--;
      }
      sevseg.setNumber(1600+startNumber16,0);
      sevseg.refreshDisplay();
      }
      startNumber16--;
      }
      sevseg.setNumber(1500+startNumber15,0);
      sevseg.refreshDisplay();
      }
      startNumber15--;
      }
      sevseg.setNumber(1400+startNumber14,0);
      sevseg.refreshDisplay();
      }
      startNumber14--;
      }
      sevseg.setNumber(1300+startNumber13,0);
      sevseg.refreshDisplay();
      }
      startNumber13--;
      }
      sevseg.setNumber(1200+startNumber12,0);
      sevseg.refreshDisplay();
      }
      startNumber12--;
      }
      sevseg.setNumber(1100+startNumber11,0);
      sevseg.refreshDisplay();
      }
      startNumber11--;
      }
      sevseg.setNumber(1000+startNumber10,0);
      sevseg.refreshDisplay();
      }
      startNumber10--;
      }
      sevseg.setNumber(900+startNumber09,0);
      sevseg.refreshDisplay();
      }
      startNumber09--;
      }
      sevseg.setNumber(800+startNumber08,0);
      sevseg.refreshDisplay();
      }
      startNumber08--;
      }
      sevseg.setNumber(700+startNumber07,0);
      sevseg.refreshDisplay();
      }
      startNumber07--;
      }
      sevseg.setNumber(600+startNumber06,0);
      sevseg.refreshDisplay();
      }
      startNumber06--;
      }
      sevseg.setNumber(500+startNumber05,0);
      sevseg.refreshDisplay();
      }
      startNumber05--;
      }
      sevseg.setNumber(400+startNumber04,0);
      sevseg.refreshDisplay();
      }
      startNumber04--;
      }
      sevseg.setNumber(300+startNumber03,0);
      sevseg.refreshDisplay();
      }
      startNumber03--;
      }
      sevseg.setNumber(200+startNumber02,0);
      sevseg.refreshDisplay();
      }
      startNumber02--;
      }
      sevseg.setNumber(100+startNumber01,0);
      sevseg.refreshDisplay();
      }
      startNumber01--;
      }
      sevseg.setNumber(startNumber00,0);
      sevseg.refreshDisplay();
      }
      startNumber00--;
      }

    if (breakNumber00 >= endNumber) {
      digitalWrite(bledPin, HIGH);
      digitalWrite(sledPin, LOW);
      for (long i = 0; i <= displayTime; i++){
    if (breakNumber01 >= endNumber) {
      digitalWrite(bledPin, HIGH);
      digitalWrite(sledPin, LOW);
      for (long i = 0; i <= displayTime; i++){
    if (breakNumber02 >= endNumber) {
      digitalWrite(bledPin, HIGH);
      digitalWrite(sledPin, LOW);
      for (long i = 0; i <= displayTime; i++){
    if (breakNumber03 >= endNumber) {
      digitalWrite(bledPin, HIGH);
      digitalWrite(sledPin, LOW);
      for (long i = 0; i <= displayTime; i++){
    if(breakNumber04 >= endNumber){
      digitalWrite(bledPin, HIGH);
      digitalWrite(sledPin, LOW);
      for (long i = 0; i <= displayTime; i++){
        sevseg.setNumber(0400 + breakNumber04,0);
        sevseg.refreshDisplay();
      } 
      breakNumber04--;    
      }
        sevseg.setNumber(0300+breakNumber03,0);
        sevseg.refreshDisplay();
      }
      breakNumber03--;
      }
        sevseg.setNumber(0200+breakNumber02,0);
        sevseg.refreshDisplay();
      }
      breakNumber02--;
      }
        sevseg.setNumber(0100+breakNumber01,0);
        sevseg.refreshDisplay();
      }
      breakNumber01--;
      }
        sevseg.setNumber(0000+breakNumber00,0);
        sevseg.refreshDisplay();
      }
      breakNumber00--;
      }

    if (startNumber001 >= endNumber) {
      digitalWrite(sledPin, HIGH);
      digitalWrite(bledPin, LOW);
      for (long i = 0; i <= displayTime; i++){
    if (startNumber011 >= endNumber) {
      digitalWrite(sledPin, HIGH);
      digitalWrite(bledPin, LOW);
      for (long i = 0; i <= displayTime; i++){
    if (startNumber021 >= endNumber) {
      digitalWrite(sledPin, HIGH);
      digitalWrite(bledPin, LOW);
      for (long i = 0; i <= displayTime; i++){
    if (startNumber031 >= endNumber) {
      digitalWrite(sledPin, HIGH);
      digitalWrite(bledPin, LOW);
      for (long i = 0; i <= displayTime; i++){
    if (startNumber041 >= endNumber) {
      digitalWrite(sledPin, HIGH);
      digitalWrite(bledPin, LOW);
      for (long i = 0; i <= displayTime; i++){
    if (startNumber051 >= endNumber) {
      digitalWrite(sledPin, HIGH);
      digitalWrite(bledPin, LOW);
      for (long i = 0; i <= displayTime; i++){
    if (startNumber061 >= endNumber) {
      digitalWrite(sledPin, HIGH);
      digitalWrite(bledPin, LOW);
      for (long i = 0; i <= displayTime; i++){
    if (startNumber071 >= endNumber) {
      digitalWrite(sledPin, HIGH);
      digitalWrite(bledPin, LOW);
      for (long i = 0; i <= displayTime; i++){
    if (startNumber081 >= endNumber) {
      digitalWrite(sledPin, HIGH);
      digitalWrite(bledPin, LOW);
      for (long i = 0; i <= displayTime; i++){
    if (startNumber091 >= endNumber) {
      digitalWrite(sledPin, HIGH);
      digitalWrite(bledPin, LOW);
      for (long i = 0; i <= displayTime; i++){
    if (startNumber101 >= endNumber) {
      digitalWrite(sledPin, HIGH);
      digitalWrite(bledPin, LOW);
      for (long i = 0; i <= displayTime; i++){
    if (startNumber111 >= endNumber) {
      digitalWrite(sledPin, HIGH);
      digitalWrite(bledPin, LOW);
      for (long i = 0; i <= displayTime; i++){
    if (startNumber121 >= endNumber) {
      digitalWrite(sledPin, HIGH);
      digitalWrite(bledPin, LOW);
      for (long i = 0; i <= displayTime; i++){
    if (startNumber131 >= endNumber) {
      digitalWrite(sledPin, HIGH);
      digitalWrite(bledPin, LOW);
      for (long i = 0; i <= displayTime; i++){
    if (startNumber141 >= endNumber) {
      digitalWrite(sledPin, HIGH);
      digitalWrite(bledPin, LOW);
      for (long i = 0; i <= displayTime; i++){
    if (startNumber151 >= endNumber) {
      digitalWrite(sledPin, HIGH);
      digitalWrite(bledPin, LOW);
      for (long i = 0; i <= displayTime; i++){
    if (startNumber161 >= endNumber) {
      digitalWrite(sledPin, HIGH);
      digitalWrite(bledPin, LOW);
      for (long i = 0; i <= displayTime; i++){
    if (startNumber171 >= endNumber) {
      digitalWrite(sledPin, HIGH);
      digitalWrite(bledPin, LOW);
      for (long i = 0; i <= displayTime; i++){
    if (startNumber181 >= endNumber) {
      digitalWrite(sledPin, HIGH);
      digitalWrite(bledPin, LOW);
      for (long i = 0; i <= displayTime; i++){
    if (startNumber191 >= endNumber) {
      digitalWrite(sledPin, HIGH);
      digitalWrite(bledPin, LOW);
      for (long i = 0; i <= displayTime; i++){
    if (startNumber201 >= endNumber) {
      digitalWrite(sledPin, HIGH);
      digitalWrite(bledPin, LOW);
      for (long i = 0; i <= displayTime; i++){
    if (startNumber211 >= endNumber) {
      digitalWrite(sledPin, HIGH);
      digitalWrite(bledPin, LOW);
      for (long i = 0; i <= displayTime; i++){
    if (startNumber221 >= endNumber) {
      digitalWrite(sledPin, HIGH);
      digitalWrite(bledPin, LOW);
      for (long i = 0; i <= displayTime; i++){
    if (startNumber231 >= endNumber) {
      digitalWrite(sledPin, HIGH);
      digitalWrite(bledPin, LOW);
      for (long i = 0; i <= displayTime; i++){
    if(startNumber241 >= endNumber){
      digitalWrite(sledPin, HIGH);
      digitalWrite(bledPin, LOW);
      for (long i = 0; i <= displayTime; i++){
        sevseg.setNumber(2400 + startNumber241,0);
        sevseg.refreshDisplay();
      } 
      startNumber241--;    
      }
        sevseg.setNumber(2300+startNumber231,0);
        sevseg.refreshDisplay();
      }
      startNumber231--;
      }
        sevseg.setNumber(2200+startNumber221,0);
        sevseg.refreshDisplay();
      }
      startNumber221--;
      }
        sevseg.setNumber(2100+startNumber211,0);
        sevseg.refreshDisplay();
      }
      startNumber211--;
      }
        sevseg.setNumber(2000+startNumber201,0);
        sevseg.refreshDisplay();
      }
      startNumber201--;
      }
        sevseg.setNumber(1900+startNumber191,0);
        sevseg.refreshDisplay();
      }
      startNumber191--;
      }
      sevseg.setNumber(1800+startNumber181,0);
      sevseg.refreshDisplay();
      }
      startNumber181--;
      }
      sevseg.setNumber(1700+startNumber171,0);
      sevseg.refreshDisplay();
      }
      startNumber171--;
      }
      sevseg.setNumber(1600+startNumber161,0);
      sevseg.refreshDisplay();
      }
      startNumber161--;
      }
      sevseg.setNumber(1500+startNumber151,0);
      sevseg.refreshDisplay();
      }
      startNumber151--;
      }
      sevseg.setNumber(1400+startNumber141,0);
      sevseg.refreshDisplay();
      }
      startNumber141--;
      }
      sevseg.setNumber(1300+startNumber131,0);
      sevseg.refreshDisplay();
      }
      startNumber131--;
      }
      sevseg.setNumber(1200+startNumber121,0);
      sevseg.refreshDisplay();
      }
      startNumber121--;
      }
      sevseg.setNumber(1100+startNumber111,0);
      sevseg.refreshDisplay();
      }
      startNumber111--;
      }
      sevseg.setNumber(1000+startNumber101,0);
      sevseg.refreshDisplay();
      }
      startNumber101--;
      }
      sevseg.setNumber(900+startNumber091,0);
      sevseg.refreshDisplay();
      }
      startNumber091--;
      }
      sevseg.setNumber(800+startNumber081,0);
      sevseg.refreshDisplay();
      }
      startNumber081--;
      }
      sevseg.setNumber(700+startNumber071,0);
      sevseg.refreshDisplay();
      }
      startNumber071--;
      }
      sevseg.setNumber(600+startNumber061,0);
      sevseg.refreshDisplay();
      }
      startNumber061--;
      }
      sevseg.setNumber(500+startNumber051,0);
      sevseg.refreshDisplay();
      }
      startNumber051--;
      }
      sevseg.setNumber(400+startNumber041,0);
      sevseg.refreshDisplay();
      }
      startNumber041--;
      }
      sevseg.setNumber(300+startNumber031,0);
      sevseg.refreshDisplay();
      }
      startNumber031--;
      }
      sevseg.setNumber(200+startNumber021,0);
      sevseg.refreshDisplay();
      }
      startNumber021--;
      }
      sevseg.setNumber(100+startNumber011,0);
      sevseg.refreshDisplay();
      }
      startNumber011--;
      }
      sevseg.setNumber(startNumber001,0);
      sevseg.refreshDisplay();
      }
      startNumber001--;
      }
      
    if (breakNumber001 >= endNumber) {
      digitalWrite(bledPin, HIGH);
      digitalWrite(sledPin, LOW);
      for (long i = 0; i <= displayTime; i++){
    if (breakNumber011 >= endNumber) {
      digitalWrite(bledPin, HIGH);
      digitalWrite(sledPin, LOW);
      for (long i = 0; i <= displayTime; i++){
    if (breakNumber021 >= endNumber) {
      digitalWrite(bledPin, HIGH);
      digitalWrite(sledPin, LOW);
      for (long i = 0; i <= displayTime; i++){
    if (breakNumber031 >= endNumber) {
      digitalWrite(bledPin, HIGH);
      digitalWrite(sledPin, LOW);
      for (long i = 0; i <= displayTime; i++){
    if(breakNumber041 >= endNumber){
      digitalWrite(bledPin, HIGH);
      digitalWrite(sledPin, LOW);
      for (long i = 0; i <= displayTime; i++){
        sevseg.setNumber(0400 + breakNumber041,0);
        sevseg.refreshDisplay();
      } 
      breakNumber041--;    
      }
        sevseg.setNumber(0300+breakNumber031,0);
        sevseg.refreshDisplay();
      }
      breakNumber031--;
      }
        sevseg.setNumber(0200+breakNumber021,0);
        sevseg.refreshDisplay();
      }
      breakNumber021--;
      }
        sevseg.setNumber(0100+breakNumber011,0);
        sevseg.refreshDisplay();
      }
      breakNumber011--;
      }
        sevseg.setNumber(0000+breakNumber001,0);
        sevseg.refreshDisplay();
      }
      breakNumber001--;
      }

    if (startNumber002 >= endNumber) {
      digitalWrite(sledPin, HIGH);
      digitalWrite(bledPin, LOW);
      for (long i = 0; i <= displayTime; i++){
    if (startNumber012 >= endNumber) {
      digitalWrite(sledPin, HIGH);
      digitalWrite(bledPin, LOW);
      for (long i = 0; i <= displayTime; i++){
    if (startNumber022 >= endNumber) {
      digitalWrite(sledPin, HIGH);
      digitalWrite(bledPin, LOW);
      for (long i = 0; i <= displayTime; i++){
    if (startNumber032 >= endNumber) {
      digitalWrite(sledPin, HIGH);
      digitalWrite(bledPin, LOW);
      for (long i = 0; i <= displayTime; i++){
    if (startNumber042 >= endNumber) {
      digitalWrite(sledPin, HIGH);
      digitalWrite(bledPin, LOW);
      for (long i = 0; i <= displayTime; i++){
    if (startNumber052 >= endNumber) {
      digitalWrite(sledPin, HIGH);
      digitalWrite(bledPin, LOW);
      for (long i = 0; i <= displayTime; i++){
    if (startNumber062 >= endNumber) {
      digitalWrite(sledPin, HIGH);
      digitalWrite(bledPin, LOW);
      for (long i = 0; i <= displayTime; i++){
    if (startNumber072 >= endNumber) {
      digitalWrite(sledPin, HIGH);
      digitalWrite(bledPin, LOW);
      for (long i = 0; i <= displayTime; i++){
    if (startNumber082 >= endNumber) {
      digitalWrite(sledPin, HIGH);
      digitalWrite(bledPin, LOW);
      for (long i = 0; i <= displayTime; i++){
    if (startNumber092 >= endNumber) {
      digitalWrite(sledPin, HIGH);
      digitalWrite(bledPin, LOW);
      for (long i = 0; i <= displayTime; i++){
    if (startNumber102 >= endNumber) {
      digitalWrite(sledPin, HIGH);
      digitalWrite(bledPin, LOW);
      for (long i = 0; i <= displayTime; i++){
    if (startNumber112 >= endNumber) {
      digitalWrite(sledPin, HIGH);
      digitalWrite(bledPin, LOW);
      for (long i = 0; i <= displayTime; i++){
    if (startNumber122 >= endNumber) {
      digitalWrite(sledPin, HIGH);
      digitalWrite(bledPin, LOW);
      for (long i = 0; i <= displayTime; i++){
    if (startNumber132 >= endNumber) {
      digitalWrite(sledPin, HIGH);
      digitalWrite(bledPin, LOW);
      for (long i = 0; i <= displayTime; i++){
    if (startNumber142 >= endNumber) {
      digitalWrite(sledPin, HIGH);
      digitalWrite(bledPin, LOW);
      for (long i = 0; i <= displayTime; i++){
    if (startNumber152 >= endNumber) {
      digitalWrite(sledPin, HIGH);
      digitalWrite(bledPin, LOW);
      for (long i = 0; i <= displayTime; i++){
    if (startNumber162 >= endNumber) {
      digitalWrite(sledPin, HIGH);
      digitalWrite(bledPin, LOW);
      for (long i = 0; i <= displayTime; i++){
    if (startNumber172 >= endNumber) {
      digitalWrite(sledPin, HIGH);
      digitalWrite(bledPin, LOW);
      for (long i = 0; i <= displayTime; i++){
    if (startNumber182 >= endNumber) {
      digitalWrite(sledPin, HIGH);
      digitalWrite(bledPin, LOW);
      for (long i = 0; i <= displayTime; i++){
    if (startNumber192 >= endNumber) {
      digitalWrite(sledPin, HIGH);
      digitalWrite(bledPin, LOW);
      for (long i = 0; i <= displayTime; i++){
    if (startNumber202 >= endNumber) {
      digitalWrite(sledPin, HIGH);
      digitalWrite(bledPin, LOW);
      for (long i = 0; i <= displayTime; i++){
    if (startNumber212 >= endNumber) {
      digitalWrite(sledPin, HIGH);
      digitalWrite(bledPin, LOW);
      for (long i = 0; i <= displayTime; i++){
    if (startNumber222 >= endNumber) {
      digitalWrite(sledPin, HIGH);
      digitalWrite(bledPin, LOW);
      for (long i = 0; i <= displayTime; i++){
    if (startNumber232 >= endNumber) {
      digitalWrite(sledPin, HIGH);
      digitalWrite(bledPin, LOW);
      for (long i = 0; i <= displayTime; i++){
    if(startNumber242 >= endNumber){
      digitalWrite(sledPin, HIGH);
      digitalWrite(bledPin, LOW);
      for (long i = 0; i <= displayTime; i++){
        sevseg.setNumber(2400 + startNumber242,0);
        sevseg.refreshDisplay();
      } 
      startNumber242--;    
      }
        sevseg.setNumber(2300+startNumber232,0);
        sevseg.refreshDisplay();
      }
      startNumber232--;
      }
        sevseg.setNumber(2200+startNumber222,0);
        sevseg.refreshDisplay();
      }
      startNumber222--;
      }
        sevseg.setNumber(2100+startNumber212,0);
        sevseg.refreshDisplay();
      }
      startNumber212--;
      }
        sevseg.setNumber(2000+startNumber202,0);
        sevseg.refreshDisplay();
      }
      startNumber202--;
      }
        sevseg.setNumber(1900+startNumber192,0);
        sevseg.refreshDisplay();
      }
      startNumber192--;
      }
      sevseg.setNumber(1800+startNumber182,0);
      sevseg.refreshDisplay();
      }
      startNumber182--;
      }
      sevseg.setNumber(1700+startNumber172,0);
      sevseg.refreshDisplay();
      }
      startNumber172--;
      }
      sevseg.setNumber(1600+startNumber162,0);
      sevseg.refreshDisplay();
      }
      startNumber162--;
      }
      sevseg.setNumber(1500+startNumber152,0);
      sevseg.refreshDisplay();
      }
      startNumber152--;
      }
      sevseg.setNumber(1400+startNumber142,0);
      sevseg.refreshDisplay();
      }
      startNumber142--;
      }
      sevseg.setNumber(1300+startNumber132,0);
      sevseg.refreshDisplay();
      }
      startNumber132--;
      }
      sevseg.setNumber(1200+startNumber122,0);
      sevseg.refreshDisplay();
      }
      startNumber122--;
      }
      sevseg.setNumber(1100+startNumber112,0);
      sevseg.refreshDisplay();
      }
      startNumber112--;
      }
      sevseg.setNumber(1000+startNumber102,0);
      sevseg.refreshDisplay();
      }
      startNumber102--;
      }
      sevseg.setNumber(900+startNumber092,0);
      sevseg.refreshDisplay();
      }
      startNumber092--;
      }
      sevseg.setNumber(800+startNumber082,0);
      sevseg.refreshDisplay();
      }
      startNumber082--;
      }
      sevseg.setNumber(700+startNumber072,0);
      sevseg.refreshDisplay();
      }
      startNumber072--;
      }
      sevseg.setNumber(600+startNumber062,0);
      sevseg.refreshDisplay();
      }
      startNumber062--;
      }
      sevseg.setNumber(500+startNumber052,0);
      sevseg.refreshDisplay();
      }
      startNumber052--;
      }
      sevseg.setNumber(400+startNumber042,0);
      sevseg.refreshDisplay();
      }
      startNumber042--;
      }
      sevseg.setNumber(300+startNumber032,0);
      sevseg.refreshDisplay();
      }
      startNumber032--;
      }
      sevseg.setNumber(200+startNumber022,0);
      sevseg.refreshDisplay();
      }
      startNumber022--;
      }
      sevseg.setNumber(100+startNumber012,0);
      sevseg.refreshDisplay();
      }
      startNumber012--;
      }
      sevseg.setNumber(startNumber002,0);
      sevseg.refreshDisplay();
      }
      startNumber002--;
      }

    if (breakNumber002 >= endNumber) {
      digitalWrite(bledPin, HIGH);
      digitalWrite(sledPin, LOW);
      for (long i = 0; i <= displayTime; i++){
    if (breakNumber012 >= endNumber) {
      digitalWrite(bledPin, HIGH);
      digitalWrite(sledPin, LOW);
      for (long i = 0; i <= displayTime; i++){
    if (breakNumber022 >= endNumber) {
      digitalWrite(bledPin, HIGH);
      digitalWrite(sledPin, LOW);
      for (long i = 0; i <= displayTime; i++){
    if (breakNumber032 >= endNumber) {
      digitalWrite(bledPin, HIGH);
      digitalWrite(sledPin, LOW);
      for (long i = 0; i <= displayTime; i++){
    if(breakNumber042 >= endNumber){
      digitalWrite(bledPin, HIGH);
      digitalWrite(sledPin, LOW);
      for (long i = 0; i <= displayTime; i++){
        sevseg.setNumber(0400 + breakNumber042,0);
        sevseg.refreshDisplay();
      } 
      breakNumber042--;    
      }
        sevseg.setNumber(0300+breakNumber032,0);
        sevseg.refreshDisplay();
      }
      breakNumber032--;
      }
        sevseg.setNumber(0200+breakNumber022,0);
        sevseg.refreshDisplay();
      }
      breakNumber022--;
      }
        sevseg.setNumber(0100+breakNumber012,0);
        sevseg.refreshDisplay();
      }
      breakNumber012--;
      }
        sevseg.setNumber(0000+breakNumber002,0);
        sevseg.refreshDisplay();
      }
      breakNumber002--;
      }

    if (startNumber003 >= endNumber) {
      digitalWrite(sledPin, HIGH);
      digitalWrite(bledPin, LOW);
      for (long i = 0; i <= displayTime; i++){
    if (startNumber013 >= endNumber) {
      digitalWrite(sledPin, HIGH);
      digitalWrite(bledPin, LOW);
      for (long i = 0; i <= displayTime; i++){
    if (startNumber023 >= endNumber) {
      digitalWrite(sledPin, HIGH);
      digitalWrite(bledPin, LOW);
      for (long i = 0; i <= displayTime; i++){
    if (startNumber033 >= endNumber) {
      digitalWrite(sledPin, HIGH);
      digitalWrite(bledPin, LOW);
      for (long i = 0; i <= displayTime; i++){
    if (startNumber043 >= endNumber) {
      digitalWrite(sledPin, HIGH);
      digitalWrite(bledPin, LOW);
      for (long i = 0; i <= displayTime; i++){
    if (startNumber053 >= endNumber) {
      digitalWrite(sledPin, HIGH);
      digitalWrite(bledPin, LOW);
      for (long i = 0; i <= displayTime; i++){
    if (startNumber063 >= endNumber) {
      digitalWrite(sledPin, HIGH);
      digitalWrite(bledPin, LOW);
      for (long i = 0; i <= displayTime; i++){
    if (startNumber073 >= endNumber) {
      digitalWrite(sledPin, HIGH);
      digitalWrite(bledPin, LOW);
      for (long i = 0; i <= displayTime; i++){
    if (startNumber083 >= endNumber) {
      digitalWrite(sledPin, HIGH);
      digitalWrite(bledPin, LOW);
      for (long i = 0; i <= displayTime; i++){
    if (startNumber093 >= endNumber) {
      digitalWrite(sledPin, HIGH);
      digitalWrite(bledPin, LOW);
      for (long i = 0; i <= displayTime; i++){
    if (startNumber103 >= endNumber) {
      digitalWrite(sledPin, HIGH);
      digitalWrite(bledPin, LOW);
      for (long i = 0; i <= displayTime; i++){
    if (startNumber113 >= endNumber) {
      digitalWrite(sledPin, HIGH);
      digitalWrite(bledPin, LOW);
      for (long i = 0; i <= displayTime; i++){
    if (startNumber123 >= endNumber) {
      digitalWrite(sledPin, HIGH);
      digitalWrite(bledPin, LOW);
      for (long i = 0; i <= displayTime; i++){
    if (startNumber133 >= endNumber) {
      digitalWrite(sledPin, HIGH);
      digitalWrite(bledPin, LOW);
      for (long i = 0; i <= displayTime; i++){
    if (startNumber143 >= endNumber) {
      digitalWrite(sledPin, HIGH);
      digitalWrite(bledPin, LOW);
      for (long i = 0; i <= displayTime; i++){
    if (startNumber153 >= endNumber) {
      digitalWrite(sledPin, HIGH);
      digitalWrite(bledPin, LOW);
      for (long i = 0; i <= displayTime; i++){
    if (startNumber163 >= endNumber) {
      digitalWrite(sledPin, HIGH);
      digitalWrite(bledPin, LOW);
      for (long i = 0; i <= displayTime; i++){
    if (startNumber173 >= endNumber) {
      digitalWrite(sledPin, HIGH);
      digitalWrite(bledPin, LOW);
      for (long i = 0; i <= displayTime; i++){
    if (startNumber183 >= endNumber) {
      digitalWrite(sledPin, HIGH);
      digitalWrite(bledPin, LOW);
      for (long i = 0; i <= displayTime; i++){
    if (startNumber193 >= endNumber) {
      digitalWrite(sledPin, HIGH);
      digitalWrite(bledPin, LOW);
      for (long i = 0; i <= displayTime; i++){
    if (startNumber203 >= endNumber) {
      digitalWrite(sledPin, HIGH);
      digitalWrite(bledPin, LOW);
      for (long i = 0; i <= displayTime; i++){
    if (startNumber213 >= endNumber) {
      digitalWrite(sledPin, HIGH);
      digitalWrite(bledPin, LOW);
      for (long i = 0; i <= displayTime; i++){
    if (startNumber223 >= endNumber) {
      digitalWrite(sledPin, HIGH);
      digitalWrite(bledPin, LOW);
      for (long i = 0; i <= displayTime; i++){
    if (startNumber233 >= endNumber) {
      digitalWrite(sledPin, HIGH);
      digitalWrite(bledPin, LOW);
      for (long i = 0; i <= displayTime; i++){
    if(startNumber243 >= endNumber){
      digitalWrite(sledPin, HIGH);
      digitalWrite(bledPin, LOW);
      for (long i = 0; i <= displayTime; i++){
        sevseg.setNumber(2400 + startNumber243,0);
        sevseg.refreshDisplay();
      } 
      startNumber243--;    
      }
        sevseg.setNumber(2300+startNumber233,0);
        sevseg.refreshDisplay();
      }
      startNumber233--;
      }
        sevseg.setNumber(2200+startNumber223,0);
        sevseg.refreshDisplay();
      }
      startNumber223--;
      }
        sevseg.setNumber(2100+startNumber213,0);
        sevseg.refreshDisplay();
      }
      startNumber213--;
      }
        sevseg.setNumber(2000+startNumber203,0);
        sevseg.refreshDisplay();
      }
      startNumber203--;
      }
        sevseg.setNumber(1900+startNumber193,0);
        sevseg.refreshDisplay();
      }
      startNumber193--;
      }
      sevseg.setNumber(1800+startNumber183,0);
      sevseg.refreshDisplay();
      }
      startNumber183--;
      }
      sevseg.setNumber(1700+startNumber173,0);
      sevseg.refreshDisplay();
      }
      startNumber173--;
      }
      sevseg.setNumber(1600+startNumber163,0);
      sevseg.refreshDisplay();
      }
      startNumber163--;
      }
      sevseg.setNumber(1500+startNumber153,0);
      sevseg.refreshDisplay();
      }
      startNumber153--;
      }
      sevseg.setNumber(1400+startNumber143,0);
      sevseg.refreshDisplay();
      }
      startNumber143--;
      }
      sevseg.setNumber(1300+startNumber133,0);
      sevseg.refreshDisplay();
      }
      startNumber133--;
      }
      sevseg.setNumber(1200+startNumber123,0);
      sevseg.refreshDisplay();
      }
      startNumber123--;
      }
      sevseg.setNumber(1100+startNumber113,0);
      sevseg.refreshDisplay();
      }
      startNumber113--;
      }
      sevseg.setNumber(1000+startNumber103,0);
      sevseg.refreshDisplay();
      }
      startNumber103--;
      }
      sevseg.setNumber(900+startNumber093,0);
      sevseg.refreshDisplay();
      }
      startNumber093--;
      }
      sevseg.setNumber(800+startNumber083,0);
      sevseg.refreshDisplay();
      }
      startNumber083--;
      }
      sevseg.setNumber(700+startNumber073,0);
      sevseg.refreshDisplay();
      }
      startNumber073--;
      }
      sevseg.setNumber(600+startNumber063,0);
      sevseg.refreshDisplay();
      }
      startNumber063--;
      }
      sevseg.setNumber(500+startNumber053,0);
      sevseg.refreshDisplay();
      }
      startNumber053--;
      }
      sevseg.setNumber(400+startNumber043,0);
      sevseg.refreshDisplay();
      }
      startNumber043--;
      }
      sevseg.setNumber(300+startNumber033,0);
      sevseg.refreshDisplay();
      }
      startNumber033--;
      }
      sevseg.setNumber(200+startNumber023,0);
      sevseg.refreshDisplay();
      }
      startNumber023--;
      }
      sevseg.setNumber(100+startNumber013,0);
      sevseg.refreshDisplay();
      }
      startNumber013--;
      }
      sevseg.setNumber(startNumber003,0);
      sevseg.refreshDisplay();
      }
      startNumber003--;
      }

    digitalWrite(bledPin, HIGH);
    digitalWrite(sledPin, HIGH);
    sevseg.setNumber(1111,0); //after countdown shows endNumber, show this number.
    sevseg.refreshDisplay();
    }
    else if(btnState_reset == HIGH || btnState_start == HIGH){
    digitalWrite(bledPin, HIGH);
    digitalWrite(sledPin, HIGH);
    sevseg.setNumber(0000,0); //after countdown shows endNumber, show this number.
    sevseg.refreshDisplay();
      }
}
