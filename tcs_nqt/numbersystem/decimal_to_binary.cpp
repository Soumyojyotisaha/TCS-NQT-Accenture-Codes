#include <iostream>
#include <string>

using namespace std;

string decimalToBinary(int decimal) {
    string binary = "";
    while (decimal != 0) {
        binary = to_string(decimal % 2) + binary;
        decimal /= 2;
    }
    return binary;
}

int main() {
    int decimal = 10;  // Example decimal number
    cout << "Binary: " << decimalToBinary(decimal) << endl;
    return 0;
}
