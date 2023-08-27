class Solution {
public:
    string addBinary(string a, string b) {
        int carry = 0;  // Initialize the carry
        int i = a.size() - 1; // Index for string 'a'
        int j = b.size() - 1; // Index for string 'b'
        string result = ""; // Initialize the result string
        
        // Loop until both strings are processed and there's no carry left
        while (i >= 0 || j >= 0 || carry > 0) {
            int sum = carry; // Add the current carry to the sum
            if (i >= 0) {
                sum += a[i] - '0'; // Convert char to integer
                i--;
            }
            if (j >= 0) {
                sum += b[j] - '0'; // Convert char to integer
                j--;
            }
            
            carry = sum / 2; // Calculate the new carry
            result = to_string(sum % 2) + result; // Add the current bit to the result
        }
        
        return result;
    }
};class Solution {
public:
    string addBinary(string a, string b) {
        int carry = 0;  // Initialize the carry
        int i = a.size() - 1; // Index for string 'a'
        int j = b.size() - 1; // Index for string 'b'
        string result = ""; // Initialize the result string
        
        // Loop until both strings are processed and there's no carry left
        while (i >= 0 || j >= 0 || carry > 0) {
            int sum = carry; // Add the current carry to the sum
            if (i >= 0) {
                sum += a[i] - '0'; // Convert char to integer
                i--;
            }
            if (j >= 0) {
                sum += b[j] - '0'; // Convert char to integer
                j--;
            }
            
            carry = sum / 2; // Calculate the new carry
            result = to_string(sum % 2) + result; // Add the current bit to the result
        }
        
        return result;
    }
};