void setup(void)
{
    ...

    byte* numbers[3] = {zero, one, two };
    size_t sizes[3] = {sizeof(zero), sizeof(one), sizeof(two)};

    function(numbers[1], sizes[1]);
}
