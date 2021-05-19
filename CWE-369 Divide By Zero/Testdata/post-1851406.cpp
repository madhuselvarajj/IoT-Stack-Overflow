float speed = 17.812345;
int display_speed = speed * 10 + 0.5;     
int digits[4];
digits[3] = display_speed % 10;           
digits[2] = (display_speed / 10) % 10;    
digits[1] = (display_speed / 100) % 10;   
digits[0] = (display_speed / 1000) % 10;  
