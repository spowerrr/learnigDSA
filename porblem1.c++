//this a problem of max till i; first element stick to his position and 
//then second element compare with first element if first>second element the arr[1] means 
//2nd position will be first element and goes on till n th;
#include<iostream>
using namespace std;
int32_t main() {
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    int mx=0;
    for (int i = 0; i < n; i++)
    {
        mx=max(arr[i],mx);
        cout<<mx<<endl;
    }
    return 0;
}