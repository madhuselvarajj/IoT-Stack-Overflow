
#include <sstream>
#include <string>

std::string loop()
{
    std::ostringstream oss;
    while ( Serial.available() > 0 ){
        oss << static_cast<char>(Serial.read());
    }
    return oss.str();
}
