#include <iostream>

std::string generatePassword(int length) {
    if (length <= 5) {
        return "Passwort muss mindestens 5 Bustaben haben";
    }

    srand(time(NULL));

    std::string password = "";
    std::string charset = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ1234567890!?[]{}()!?[]{}()!?[]{}()!?[]{}()";
    const char* charsetArray = charset.c_str();
    
    for (int i = 0; i < length; i++) {
        int index = rand() % charset.length();
        password = password + charsetArray[index];
    }

    return password;
}

int main() {
    int length;
    std::cout << "How long should the password be?\n";
    std::cin >> length;

    std::cout << "Your password:\n" << generatePassword(length);

    return 0;
}

