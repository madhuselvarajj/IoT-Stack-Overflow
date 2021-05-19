  char long_s[sizeof(uri) + sizeof(key)];
  while(uri[i]) {
      long_s[i] = uri[i];
      ++i;
  }
  while(key[x]) {
      long_s[i] = key[x];
      ++i;
      ++x;
  }
  long_s[i] = '\0';
  //Serial.print(long_s);
