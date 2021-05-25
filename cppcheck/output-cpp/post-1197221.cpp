struct flags {
    unsigned int flag1 : 1;  //1 sets the length of the field in bits
    unsigned int flag2 : 4;
}; 

flags data;

data.flag1 = 0;
data.flag2 = 12;

if (data.flag1 == 1)
{
    data.flag1 = 0;
}
else
{
    data.flag1 = 1;
}
