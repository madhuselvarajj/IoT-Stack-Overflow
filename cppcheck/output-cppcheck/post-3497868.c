//function to combine uri and key
char* combine(char const* key, char const* uri) {
    int len = strlen(key) + strlen(uri) + 1; /* don't the '\0' terminator */

    char* pResult = malloc(len);

    if (pResult) {
        /* we got a buffer */
        strcpy( pResult, uri);
        strcat( pResult, key);
    }

    return pResult; /* will return NULL on failure */
                    /* caller is responsible for calling free() */
} 
