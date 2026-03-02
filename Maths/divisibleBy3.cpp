// A program to check that given number is divisible by 3 or not
#include <iostream>
#include <string>

bool check(std::string num) {
    int digitSum = 0;
    for(size_t i = 0; i < num.length(); ++i) {
        // This line of code converts character to its ASCII value, 
        // which is not what we want. We need to convert the character to its 
        // corresponding integer value. 
        // for example, using this line of code we get 48 for number '0', 
        // 49 for '1', and so on. 
        // To get the actual integer value, we can subtract '0' from the character.
        // digitSum += (int)(num[i]); 
        digitSum += (num[i] - '0');
    }
    std::cout << "Sum of digits: " << digitSum << std::endl;
    return (digitSum %3 == 0);
}

int main() {
    // std::string number("769452");
    // std::cout << (check(number) ? "Yes" : "No")  << std::endl;

    // std::string number("12345678933312");
    // std::cout << (check(number) ? "Yes" : "No")  << std::endl;

    std::string number("3635883959606670431112222");
    std::cout << (check(number) ? "Yes" : "No")  << std::endl;
}