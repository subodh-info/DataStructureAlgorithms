/* A program to check if a number is divisible by 9 or not.
The rule for checking divisibility by 9 is that if the sum of the digits of a number is divisible by 9, then the number itself is divisible by 9.
For example, for the number 729:
7 + 2 + 9 = 18
Since 18 is divisible by 9, we can conclude that 729 is also divisible by 9.
For the number 123:
1 + 2 + 3 = 6
Since 6 is not divisible by 9, we can conclude that 123 is not divisible by 9.

Implemention of this logic in C++ is very similar to the implementatino of checking divisibility by 3.
Hence, we can use the same code as in DivisibleBy3.cpp and just change the condition to check if the sum of the digits is divisible by 9 instead of 3.
*/