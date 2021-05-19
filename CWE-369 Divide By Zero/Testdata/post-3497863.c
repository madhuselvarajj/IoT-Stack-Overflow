char *combine(char result[], size_t result_sz, const char key[], const char uri[])
{
  /* Test to see if there is sufficient space */

  if (strlen(uri) + strlen(key) + 1 > result_sz)
  {
    return NULL;
  }

  strcpy(result, uri);
  strcat(result, key);

  return result;
} 
