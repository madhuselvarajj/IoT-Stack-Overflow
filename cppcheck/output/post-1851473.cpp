#include "math.h"
#include <stdio.h>
#include <iostream.h>

int main( ) {

        float value = 3.1415;
        char buf[16]; 
        value = floor( value * 10.0f ) / 10.0f;
        sprintf( buf, "%0.1f", value );

        std::cout << "Value: " << value << std::endl;

        return 0;
}
