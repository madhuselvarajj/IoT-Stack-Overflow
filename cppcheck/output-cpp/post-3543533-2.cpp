#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

int main()
{
  std::vector<std::string> strings;
  strings.push_back("Hello");
  strings.push_back("World");
  for ( int idx = 0; idx < strings.size(); idx++ )
    std::cout << strings[idx];
}
