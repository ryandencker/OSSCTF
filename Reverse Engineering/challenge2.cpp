#include <iostream>
#include <string>
#include <vector>

using namespace std;

// Function to decode the encoded flag
string decodeFlag(const vector<int>& encodedFlag, int key) {
    string decodedFlag;
    for (int ch : encodedFlag) {
        decodedFlag += static_cast<char>(ch ^ key); // XOR with the key to decode
    }
    return decodedFlag;
}

void addnumbers() {
    int sum;
    sum = 2 + 2;
}

void printsecrets() {
    cout << "\n****WELCOME BACK AGENT****\n" << endl;
    cout << "You might be looking for this" << endl;
    
    // Encoded flag (obfuscated using XOR with 0xAA) OSSCTF{T1M3_T0_ST0P_EV1L}
    vector<int> encodedFlag = {0xE5, 0xF9, 0xF9, 0xE9, 0xFE, 0xEC, 0xD1, 0xFE, 0x9B, 0xE7, 0x99, 0xF5, 0xFE, 0x9A, 0xF5, 0xF9, 0xFE, 0x9A, 0xFA, 0xF5, 0xEF, 0xFC, 0x9B, 0xE6, 0xD7};
    int key = 0xAA;
    string flag = decodeFlag(encodedFlag, key);
    cout << flag << endl;
}

void comparePassword(string password) {

    // Split "MINION24" into four 2-character strings
    string part1 = "MI";
    string part2 = "NI";
    string part3 = "ON";
    string part4 = "24";

    // Compare each part with corresponding positions in the user's password
    if (password.substr(0, 2) == part1 && 
        password.substr(2, 2) == part2 && 
        password.substr(4, 2) == part3 &&
        password.substr(6, 2) == part4) {
        printsecrets();
    } else {
        cout << "Incorrect password. Try again when you want to stop evil." << endl;
    }
}

int main() {
    string password;
    addnumbers();
    cout << "=====WELCOME TO THE ANTI-VILLAIN LEAGUE=====" << endl;
    cout << "\nWhat is the secret password?" << endl;
    cout << ">";
    cin >> password;
    comparePassword(password);
    return 0;
}