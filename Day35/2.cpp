#include <iostream>

// Function to count the number of 1-bits in a given number
int countOnes(int num) {
    int count = 0;
    while (num) {
        num &= (num - 1);
        count++;
    }
    return count;
}

int main() {
    int num1, num2;

    // Input two numbers
    std::cout << "Enter the first number: ";
    std::cin >> num1;

    std::cout << "Enter the second number: ";
    std::cin >> num2;

    // Calculate the number of 1-bits in each number
    int count1 = countOnes(num1);
    int count2 = countOnes(num2);

    std::cout << "Number of 1-bits in the first number: " << count1 << std::endl;
    std::cout << "Number of 1-bits in the second number: " << count2 << std::endl;

    return 0;
}
