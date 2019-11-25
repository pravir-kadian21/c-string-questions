// PIYUSH AND MAGICAL PARK
// Piyush is lost in a magical park which contains N rows and M columns.In order to get out of park safely and return home, he needs atleast K amount of strength.Given a N by M pattern, your task is to find weather Piyush can ever escape the park.

// The pattern consisits of '.' , * and '#'.Intially the strength is S and if Piyush encounters * , strength increases by 5.If he encounters '.', strength decreases by 2.Please note that Piyush can only walk row wise, so he starts from left of a row and moves towards right and he does this for every row. If he encounters '#', this means that the row is blcked and he cannot move forward. Also while moving in a row, Piyush requires strength of 1 for every step and strength should always be positive for moving forward.

// Assume that Piyush can shift immediately from last of one row to the start of next one without loss of any strength, help out Piyush to escape the park.

// Input Format:
// Four space separated integers N, M, K and S all lie between 0 and 100. Next N lines contains M space separated characters which can be '.', '*' or '#'.

// Constraints:
// All numbers are positive and <= 100.

// Output Format
// Print "Yes" or "No" depending on whether Piyush can escape or not. If the answer is "Yes", also print the maximum strength that he can gather in the park in a new line.

// Sample Input
// 4 4 5 20
// . . * .
// . # . .
// * * . .
// . # * *
// Sample Output
// Yes
// 13
#include<iostream>
using namespace std;
int main() {
    int n,m,k,s;
    cin>>n>>m>>k>>s;
    char a[105][105];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>a[i][j];
        }
    }
    int energy=s;
    int sr=0;
    int sc=0;
    while(sr<=n-1 && sc<=m){
        if(a[sr][sc]=='.'){
            energy-=2;
            if(energy>0){
                sc++;
                energy-=1;
            }
            else{
                break;
            }
        }
        if(a[sr][sc]=='*'){
            energy+=5;
            if(energy>0){
                sc++;
                energy-=1;
            }
            else{
                break;
            }
        }
        if(a[sr][sc]=='#'){
            sr++;
            sc=0;
            energy+=1;
        }
        if(sc==m){
            sr++;
            sc=0;
        }
    }
    if(energy>=k){
        cout << "yes" << endl;
        cout << energy;
    }
    else{
        cout << "No" << endl;
    }
	return 0;
}