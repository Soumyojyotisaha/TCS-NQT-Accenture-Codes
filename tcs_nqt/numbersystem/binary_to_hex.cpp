#include <iostream>
#include <string>
#include <sstream>

using namespace std;

int binaryToDecimal(string binary) {
    return stoi(binary, nullptr, 2);
}

string decimalToHexadecimal(int decimal) {
    stringstream ss;
    ss << hex << decimal;  // Convert decimal to hexadecimal
    return ss.str();
}

int main() {
    string binary = "1010";  // Example binary number
    int decimal = binaryToDecimal(binary);
    cout << "Hexadecimal: " << decimalToHexadecimal(decimal) << endl;
    return 0;
}
