#include <iostream>
#include <string>

using namespace std;

int binaryToDecimal(string binary) {
    return stoi(binary, nullptr, 2);
}

int main() {
    string binary = "1010";  // Example binary number
    cout << "Decimal: " << binaryToDecimal(binary) << endl;
    return 0;
}
