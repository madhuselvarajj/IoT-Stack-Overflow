#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

int main()
{
  std::vector<std::string> strings;
  strings.push_back("Hello");
  strings.push_back("World");
  std::sort(strings.begin(), strings.end());
  std::copy(strings.begin(), strings.end(), std::ostream_iterator<std::string>(std::cout, ""));
}
