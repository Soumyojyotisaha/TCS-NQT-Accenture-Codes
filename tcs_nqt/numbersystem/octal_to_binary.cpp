#include <iostream>
#include <string>

using namespace std;

int octalToDecimal(string octal) {
    return stoi(octal, nullptr, 8);
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
    string octal = "12";  // Example octal number
    int decimal = octalToDecimal(octal);
    cout << "Binary: " << decimalToBinary(decimal) << endl;
    return 0;
}
