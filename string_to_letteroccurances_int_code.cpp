#include <iostream>
#include <string>
using namespace std;

string encodeString(const string& input)
{
    int frequency[256] = {0};  // Array to store frequency of each character (ASCII size 256)
    string encoded = "";
    
    // First pass: count the frequency of each character in the string
    for (int i = 0; i < input.length(); i++)
    {
        frequency[(int)input[i]]++;  // Increment frequency of the character
    }

    // Second pass: append the count of each character the first time it appears
    for (int i = 0; i < input.length(); i++)
    {
        if (frequency[(int)input[i]] > 0)  // If character has not been processed yet
        {
            encoded += to_string(frequency[(int)input[i]]);  // Append its count
            frequency[(int)input[i]] = 0;  // Mark the character as processed
        }
    }

    return encoded;
}

int main()
{
    string str;
    
    // Take input from the user
    cout << "Enter a string: ";
    cin >> str;
    
    // Encode the string and print the result
    string encodedStr = encodeString(str);
    
    cout << "Encoded string: " << encodedStr << endl;
    
    return 0;
}
