#include <iostream>
#include <string>

using namespace std;

int hexadecimalToDecimal(string hex) {
    return stoi(hex, nullptr, 16);
}

int main() {
    string hex = "FF";  // Example hexadecimal number
    cout << "Decimal: " << hexadecimalToDecimal(hex) << endl;
    return 0;
}
