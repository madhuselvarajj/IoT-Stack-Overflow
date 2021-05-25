#include <sstream> // include this for stringstreams
#include <iostream>
#include <string>

using namespace std; // stringstream, like almost everything, is in std

string stringifyFloat(float f) {
  stringstream ss;
  ss.precision(1); // set decimal precision to one digit.
  ss << fixed;     // use fixed rather than scientific notation.
  ss << f;         // read in the value of f
  return ss.str(); // return the string associated with the stream.
}

int main() {
  cout << stringifyFloat(17.812345) << endl; // 17.8
  return 0;
}
