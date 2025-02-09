/*Example 1:

Input: Character
Output: 1
Explaination: For java it would be 2 bytes.
Example 2:

Input: Integer
Output: 4
 

Your Task:

Complete the function dataTypeSize() which takes a string as input and returns the size of the data type represented by the given string in byte unit.
Return -1 if the input data type is invalid.*/

#include<cctype>
#include<iostream>
using namespace std;
class Solution {
  public:
    int dataTypeSize(string str) {
        // your code here
        for (char &c : str) {
            c = tolower(c);
        }

        // Check for valid data types
        if (str == "character" || str == "char") return sizeof(char);
        if (str == "integer" || str == "int") return sizeof(int);
        if (str == "long") return sizeof(long);
        if (str == "float") return sizeof(float);
        if (str == "double") return sizeof(double);

        return -1;
    }
};
