#include <iostream>
#include <string>

using namespace std;

int octalToDecimal(string octal) {
    return stoi(octal, nullptr, 8);
}

int main() {
    string octal = "12";  // Example octal number
    cout << "Decimal: " << octalToDecimal(octal) << endl;
    return 0;
}
