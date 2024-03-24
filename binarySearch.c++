#include<iostream>
using namespace std;
int binarySearch(int arr[],int n,int key){
    int s=0;
    int e=n-1;
    while (s<=e) { 
        int mid = (s + e)/2;  
        if (arr[mid] == key) return mid;
        else if (arr[mid] < key) { 
            s = mid + 1; 
            }
        else 
            e = mid - 1;
    } 
    return -1; 
}
int32_t main() {
    int n,key;
    std::cout << "Enter the size of the array:" << std::endl;
    cin>>n;
    int arr[n];
    std::cout << "Array elements:" << std::endl;
    for (int i = 0; i < n; i++)
    {
       cin>>arr[i];   // you have to take all the elements in  ordered format ascending order
    }
    std::cout << "Enter the element you want to search:";
    cin>>key;
int index = binarySearch(arr, n, key);

    if (index != -1)
        cout << "Index: " << index << endl;
    else
        cout << "Element not found in the array." << endl;  
    return 0;
}
