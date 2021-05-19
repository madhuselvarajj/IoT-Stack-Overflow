void setup() {
  Ethernet.begin(mac, ip, gateway, mask);
  Serial.begin(9600);

  delay(1000);

  Serial.println("connecting...");

  for(int i = 0;i <100 ; i++) {  
    if (client.connect()) {
      Serial.println("connected");        
      client.println("GET /search?q=arduino HTTP/1.0");
      client.println();
      break;
    } else {
      Serial.println("connection failed");
    }
  }
}
