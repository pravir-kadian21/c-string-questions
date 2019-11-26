// STRING SORT
// Nishant is a very naughty boy in Launchpad Batch. One day he was playing with strings, and randomly shuffled them all. Your task is to help Nishant Sort all the strings ( lexicographically ) but if a string is present completely as a prefix in another string, then string with longer length should come first. Eg bat, batman are 2 strings and the string bat is present as a prefix in Batman - then sorted order should have - Batman, bat.

// Input Format:
// N(integer) followed by N strings.

// Constraints:
// N<=1000

// Output Format
// N lines each containing one string.

// Sample Input
// 3
// bat
// apple
// batman
// Sample Output
// apple
// batman
// bat
#include<iostream>
#include<cstring>
#include<algorithm>
using namespace std;
bool compare(string a,string b){
    int value=0;
    if(a.length()>b.length()){
        for(int i=0;i<b.length();i++){
            if(a[i]!=b[i]){
                value=1;
            }
        }
    }
    else{
        for(int i=0;i<a.length();i++){
            if(a[i]!=b[i]){
                value=1;
            }
        }
    }
    if(value==1){
        return a<b;
    }
    else{
        return a.length()>b.length();
    }
}
int main() {
    string arr[1005];
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    sort(arr,arr+n,compare);
    for(int i=0;i<n;i++){
        cout << arr[i] << endl;
    }
	return 0;
}