/* A program to check input number is divisible by 4 or not.*/
/* We can directly check by using modulo '%' operator like - 
if (num % 4 == 0) {
    cout << num << " is divisible by 4." << endl;
} else {
    cout << num << " is not divisible by 4." << endl;
}

Since, input number may be very large, we can not use n % 4 to check if a number is divisible
by 4 or not, especially in languages like C++ where we have fixed size data types. 
In such cases, we can check the last two digits of the number. 
If the last two digits form a number that is divisible by 4, 
then the entire number is divisible by 4.
*/

#include <iostream>
#include <string>

bool check(std::string str) {
    if(str.empty()) {
        return false;
    }

    if(str.length() == 1) {
        return (str[0] - '0') % 4 == 0;
    }

    std::string lastTwoDigits = str.substr(str.length() - 2, 2);

    return std::stoi(lastTwoDigits) % 4 == 0;
}

int main(){
    // std::string number = "76952";
    // std::cout << (check(number) ? "Yes" : "No") << std::endl;

    std::string number = "1234567589333862";
    std::cout << (check(number) ? "Yes" : "No") << std::endl;
}

