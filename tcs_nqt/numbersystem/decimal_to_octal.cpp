#include <iostream>

using namespace std;

string decimalToOctal(int decimal) {
    string octal = "";
    while (decimal != 0) {
        octal = to_string(decimal % 8) + octal;
        decimal /= 8;
    }
    return octal;
}

int main() {
    int decimal = 10;  // Example decimal number
    cout << "Octal: " << decimalToOctal(decimal) << endl;
    return 0;
}
