float speed = 17.812345;
int display_speed = speed * 10 + 0.5;     // round to nearest 0.1 == 178
int digits[4];
digits[3] = display_speed % 10;           // == 8
digits[2] = (display_speed / 10) % 10;    // == 7
digits[1] = (display_speed / 100) % 10;   // == 1
digits[0] = (display_speed / 1000) % 10;  // == 0
