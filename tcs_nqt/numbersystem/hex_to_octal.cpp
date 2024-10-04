#include <iostream>
#include <string>

using namespace std;

int hexadecimalToDecimal(string hex) {
    return stoi(hex, nullptr, 16);
}

string decimalToOctal(int decimal) {
    string octal = "";
    while (decimal != 0) {
        octal = to_string(decimal % 8) + octal;
        decimal /= 8;
    }
    return octal;
}

int main() {
    string hex = "FF";  // Example hexadecimal number
    int decimal = hexadecimalToDecimal(hex);
    cout << "Octal: " << decimalToOctal(decimal) << endl;
    return 0;
}
