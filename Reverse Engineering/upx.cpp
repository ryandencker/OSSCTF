#include <iostream>
#include <string>
#include <vector>

// Function to check password
void checkPassword(const std::string& inputPassword) {
    const std::vector<int> correctPassword = {
        79,83,83,67,84,70,123,85,80,88,95,49,83,95,83,49,76,76,55,125
    };

    if (inputPassword.length() != correctPassword.size()) {
        std::cout << "Password is incorrect!" << std::endl;
        return;
    }

    for (size_t i = 0; i < inputPassword.length(); ++i) {
        if (static_cast<int>(inputPassword[i]) != correctPassword[i]) {
            std::cout << "Password is incorrect!" << std::endl;
            return;
        }
    }

    std::cout << "Password is correct!" << std::endl;
}

int main() {
    std::string inputPassword;
    std::cout << "Enter password: ";
    std::cin >> inputPassword;

    checkPassword(inputPassword);

    return 0;
}
