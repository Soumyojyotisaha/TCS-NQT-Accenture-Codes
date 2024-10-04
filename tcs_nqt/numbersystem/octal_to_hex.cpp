#include <iostream>
#include <sstream>
#include <string>

using namespace std;

int octalToDecimal(string octal) {
    return stoi(octal, nullptr, 8);
}

string decimalToHexadecimal(int decimal) {
    stringstream ss;
    ss << hex << decimal;  // Convert decimal to hexadecimal
    return ss.str();
}

int main() {
    string octal = "377";  // Example octal number
    int decimal = octalToDecimal(octal);
    cout << "Hexadecimal: " << decimalToHexadecimal(decimal) << endl;
    return 0;
}
