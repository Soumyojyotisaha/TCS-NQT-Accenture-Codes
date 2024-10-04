#include <iostream>
#include <string>

using namespace std;

int binaryToDecimal(string binary) {
    return stoi(binary, nullptr, 2);
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
    string binary = "1010";  // Example binary number
    int decimal = binaryToDecimal(binary);
    cout << "Octal: " << decimalToOctal(decimal) << endl;
    return 0;
}
