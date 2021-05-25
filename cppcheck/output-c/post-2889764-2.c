void printletter(char c);
{
    int *data = lookup((unsigned char)c);

    // In case you get a letter that you don't know how to display
    if (data != NULL)
    {
        // display with data
    }
}
