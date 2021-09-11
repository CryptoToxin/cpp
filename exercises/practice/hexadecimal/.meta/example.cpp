#include "hexadecimal.h"
#include <cctype>

namespace hexadecimal
{

int convert(const std::string &text)
{
    int result = 0;
    for (char c : text) {
        result *= 16;
        if (c >= '0' && c <= '9') {
            result += c - '0';
        } else {
            c = static_cast<char>(std::tolower(c));
            if (c >= 'a' && c <= 'f') {
                result += 10 + c - 'a';
            } else {
                return 0;
            }
        }
    }
    return result;
}

}
