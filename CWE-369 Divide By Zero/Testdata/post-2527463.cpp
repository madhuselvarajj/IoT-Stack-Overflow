#define MAX_COMMAND_LENGTH 20

char Command[MAX_COMMAND_LENGTH];
int commandLength;    

void loop(){
  if(Serial.available() > 0){
    int clinput = Serial.read();
    if (commandLength < MAX_COMMAND_LENGTH) {
      Command[commandLength++] = (char)clinput;
    }
}
