#include <iostream>
#include <sstream>

using namespace std;

string decimalToHexadecimal(int decimal) {
    stringstream ss;
    ss << hex << decimal;  // Convert decimal to hexadecimal
    return ss.str();
}

int main() {
    int decimal = 255;  // Example decimal number
    cout << "Hexadecimal: " << decimalToHexadecimal(decimal) << endl;
    return 0;
}
