char *newURI = malloc(strlen(uri) + strlen(key) + 1);
if (newURL == 0) { /* indicate failure, somehow */ }
strcpy(newURI, uri);
strcat(newURI, key);
GETrequest session = getSession(ipaddr, port, hostname, newURI);
free(newURI); // avoids a memory leak
// do something with the session...
