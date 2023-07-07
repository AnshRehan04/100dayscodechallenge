#include <iostream>
#include <cstring>

char highestOccurringChar(char input[]) {
    // Create an array to store the count of each character
    int count[256] = {0};
    
    // Traverse the input string and update the count array
    int length = strlen(input);
    for (int i = 0; i < length; i++) {
        count[input[i]]++;
    }
    
    // Find the character with the highest occurrence
    char highestChar;
    int maxCount = 0;
    for (int i = 0; i < 256; i++) {
        if (count[i] > maxCount) {
            maxCount = count[i];
            highestChar = static_cast<char>(i);
        }
    }
    
    return highestChar;
}