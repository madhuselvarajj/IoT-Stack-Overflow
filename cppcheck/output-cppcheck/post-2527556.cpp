char Command[MAX_COMMAND_CHARS];

void loop() {
  int ix = 0; 
  // uncomment this to append to the Command buffer
  //ix = strlen(Command);

  while(ix < MAX_COMMAND_CHARS-1 && Serial.available() > 0) {
     Command[ix] = Serial.read();
     ++ix;
  }

  Command[ix] = 0; // null terminate the command
}
