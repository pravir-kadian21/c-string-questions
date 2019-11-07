// STRINGS-MAX FREQUENCY CHARACTER
// Take as input S, a string. Write a function that returns the character with maximum frequency. Print the value returned.

// Input Format:
// String

// Constraints:
// A string of length between 1 to 1000.

// Output Format
// Character

// Sample Input
// aaabacb
// Sample Output
// a
#include<iostream>
#include<cstring>
using namespace std;

void maxfreq(char *a,int l){
    int freqarr[26]={0};
    for(int i=0;i<l;i++){
        freqarr[a[i]-'a']++;
    }
    int lv=0;
    int index;
    for(int i=0;i<26;i++){
        if(freqarr[i]>lv){
            lv=freqarr[i];
            index=i;
        }
    }
    cout << char(index+97) << endl;
}
int main(){
    char a[1005];
    cin>>a;
    int l=strlen(a);
    maxfreq(a,l);
    return 0;
}