#include <iostream>
#include <string>

using namespace std;

int hexadecimalToDecimal(string hex) {
    return stoi(hex, nullptr, 16);
}

string decimalToBinary(int decimal) {
    string binary = "";
    while (decimal != 0) {
        binary = to_string(decimal % 2) + binary;
        decimal /= 2;
    }
    return binary;
}

int main() {
    string hex = "FF";  // Example hexadecimal number
    int decimal = hexadecimalToDecimal(hex);
    cout << "Binary: " << decimalToBinary(decimal) << endl;
    return 0;
}
