#include <bits/stdc++.h>
using namespace std;
// int binaryToDecimal(int n){
//     int ans=0;
//     int x=1;
//     while (n>0)
//     {
//         int a=n%10;
//         ans+=x*a;
//         x*=2;
//         n/=10;
//     }
//     return ans;
// }
int octalToDecimal(int n){
    int ans=0;
    int x=1;
    while (n>0)
    {
        int a=n%10;
        ans+=x*a;
        x*=8;//changes
        n/=10;
    }
    return ans;
}

int32_t main() {
    int n;
    cin>>n;
    //cout<<binaryToDecimal(n);
    cout<<octalToDecimal(n);
    
}