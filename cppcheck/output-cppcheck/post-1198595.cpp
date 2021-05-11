#include <bitset>

enum tFlags { c_firstflag, c_secondflag, c_NumberOfFlags };

...

std::bitset<c_NumberOfFlags> bits;

bits.set( c_firstflag );
if( bits.test( c_secondflag ) ) {
  bits.clear();
}

// even has a pretty print function!
std::cout << bits << std::endl;// does a "100101" representation.
