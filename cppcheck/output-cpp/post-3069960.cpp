sVal = analogRead(potPin);
sVal = sVal / 8 + 1; //scale value [0.. 1023] to [1.. 128]

itoa(sVal, res, 10);
println(res);
println(" ");
delay(150);
clearScreen();
