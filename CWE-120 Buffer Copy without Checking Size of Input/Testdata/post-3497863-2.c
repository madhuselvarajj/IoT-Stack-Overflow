char lon[1024];
char *newURI = combine (lon, sizeof lon, key, uri);

if (newURI == NULL)
{
    /* Error - URL too long */
}
else
{
    GETrequest getSession(ipaddr, port, hostname, newURI);
}
