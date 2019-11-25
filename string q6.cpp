// STRINGS-DIFFERENCE IN ASCII CODES
// Take as input S, a string. Write a program that inserts between each pair of characters the difference between their ascii codes and print the ans.

// Input Format:
// String

// Constraints:
// Length of String should be between 2 to 1000.

// Output Format
// String

// Sample Input
// acb
// Sample Output
// a2c-1b
#include<iostream>
#include<cstring>
using namespace std;
int main() {
    char ch[1000];
    cin>>ch;
    int i=strlen(ch);
    int j=0;
    while(ch[j]!='\0'){
        
        cout << ch[j];
        if(ch[j+1]!='\0'){
            cout << int(ch[j+1])-int(ch[j]);
        }
        j++;
    }
	return 0;
}