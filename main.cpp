#include <iostream>
#include <random>

int main() {
    std::cout << "Welcome to password generator, enter the length of the password" << "\n";

    std::string chars = "123456789!@#$%^&*abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
    std::string password;

    int passwordLength;

    std::cin >> passwordLength;

    std::sample(chars.begin(), chars.end(), std::back_inserter(password),
                passwordLength, std::mt19937{std::random_device{}()});

    std::cout << "Your password is : " << password << "\n";

    return 0;
}
