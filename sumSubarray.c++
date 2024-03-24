//sum of each subArray of thr given array 
#include<iostream>
using namespace std;
int32_t main() {
    int n,key;
    std::cout << "Enter the size of the array:" << std::endl;
    cin>>n;
    int arr[n];
    cout << "Array elements:" << std::endl;
    for (int i = 0; i < n; i++)
    {
       cin>>arr[i]; 
    }
    int sum=0;
    for (int i = 0; i < n; i++)
    {
        for (int j = i; j < n; j++)
        {
           sum+=arr[j]; 
           cout << "Sum of SubArray" <<" "<<sum<< std::endl;
        }
    }

}