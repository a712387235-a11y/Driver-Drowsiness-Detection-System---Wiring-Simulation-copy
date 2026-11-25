const int BUZZER_CTRL=1;
const int STATUS_LED=21;
const int REAR_LED_CTRL=47;
void setup(){pinMode(BUZZER_CTRL,OUTPUT);pinMode(STATUS_LED,OUTPUT);pinMode(REAR_LED_CTRL,OUTPUT);}
void loop(){digitalWrite(BUZZER_CTRL,HIGH);digitalWrite(STATUS_LED,HIGH);digitalWrite(REAR_LED_CTRL,HIGH);delay(1000);digitalWrite(BUZZER_CTRL,LOW);digitalWrite(STATUS_LED,LOW);digitalWrite(REAR_LED_CTRL,LOW);delay(1000);}