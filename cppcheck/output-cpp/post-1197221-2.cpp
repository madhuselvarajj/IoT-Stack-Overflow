union 
{
    struct {
        unsigned int flag1 : 1;  //1 sets the length of the field in bits
        unsigned int flag2 : 4;
    } bits;
    unsigned int val;
} flags;
