char *command = (char *)malloc(sizeof(char) * MAXLENGTH);
*command = '\0';

void loop(){
  char clinput[2] = {}; //for nullifying the array
  if(Serial.available() > 0){
    clinput[0] = (char)Serial.read();
    strcat(command, clinput);
}
