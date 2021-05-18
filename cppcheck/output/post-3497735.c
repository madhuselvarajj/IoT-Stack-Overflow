//function to combine uri and key
void combine(char key[], char uri[], char long_s[]) {
  int i = 0;
  int x = 0;
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
}

char newURI = malloc(strlen(uri) + strlen(key) + 1);
combine(key, uri, newURI);
