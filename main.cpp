#include <iostream>
#include "base64.h"

using namespace std;
int main() {
    string txt = "Привет";
    string enc = macaron::Base64::Encode(txt);
    std::cout << "orig:" << txt << std::endl;
    std::cout << "enc:" << enc << std::endl;
    string dec;
    string dec1 = macaron::Base64::Decode(enc, dec);
    std::cout << "dec:" << dec << std::endl;
    std::cout << "dec1:" << dec1 << std::endl;
    return 0;
}
