#include<iostream>
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
int32_t main() {
    int n,key;
    std::cout << "Enter the size of the array:" << std::endl;
    cin>>n;
    int arr[n];
    std::cout << "Array eliments:" << std::endl;
    for (int i = 0; i < n; i++)
    {
       cin>>arr[i]; 
    }
    std::cout << "Enter the element you want to search:";
    cin>>key;
    std::cout <<"Index:" <<linearSearch(arr,n,key) <<"(Note:If -1 then key not found in the array)"<< std::endl;
    return 0;
}