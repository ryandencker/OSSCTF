#include <iostream>
#include <string>

using namespace std;

// Helper function to convert hex to string
string hexToString(const string& hex) {
    string result;
    for (size_t i = 0; i < hex.length(); i += 2) {
        string byte = hex.substr(i, 2);
        char chr = static_cast<char>(stoi(byte, nullptr, 16));
        result.push_back(chr);
    }
    return result;
}

// Functions to return strings stored in hex values
string OSS() {
    return hexToString("4f5353"); // "OSS"
}

string CTF() {
    return hexToString("435446"); // "CTF"
}

string getIs() {
    return hexToString("7b315f"); // "{1_"
}

string getA() {
    return hexToString("4c3056"); // "L0V"
}

string getFlag() {
    return hexToString("335f37"); // "3_7"
}

string dank() {
    return hexToString("344e4b33527d"); // "4NK3R}"
}

// Main function to combine strings
int main() {
    // Combine strings from different functions
    if (1 == 1) {
        string result = OSS() + CTF() + getIs() + getA() + getFlag() + dank();
        cout << result << endl;
    }

    return 0;
}
