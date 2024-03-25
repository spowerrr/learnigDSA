#include<bits/stdc++.h>
using namespace std;
int linearSearch(int arr[],int n,int key){
    for (int i = 0; i < n; i++)
    {
        if (arr[i]==key)
        {
          return i;
        }
    }
    return -1;
}
int main() {
    int n,key;
    cout << "Enter the size of the array:" << endl;
    cin>>n;
    int arr[n];
    cout << "Array elements:" << endl;
    for (int i = 0; i < n; i++)
    {
       cin>>arr[i]; 
    }
    cout << "Enter the element you want to search:";
    cin>>key;
    int idx = linearSearch(arr,n,key);
    if(idx!=-1){
        cout<<"Index:"<<idx<<endl;
    } else{
        cout<<"Not Found"<<endl;
    }
    return 0;
}