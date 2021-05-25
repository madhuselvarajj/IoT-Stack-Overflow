 char command[MAX_COMMAND];
 void loop(){
     char *p = command;
    if(Serial.available() > 0){
      int clinput = Serial.read();
    command[p++] = (char)clinput;
   }
  }
