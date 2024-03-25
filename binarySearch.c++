//if you want to binary search occur then the array should have to be in ordered list
#include<iostream>
using namespace std;
// int binarySearch(int arr[],int n,int key){
//     int s=0;
//     int e=n-1;
//     while (s<=e) { 
//         int mid = (s + e)/2;  
//         if (arr[mid] == key) return mid;
//         else if (arr[mid] < key) { 
//             s = mid + 1; 
//             }
//         else 
//             e = mid - 1;
//     } 
//     return -1; 
// }
int binarySearch1(int arr[],int n,int key){
    int low = 0;
    int high = n-1;
    while (low<=high)
    {
        int mid =(low + high)/2;
        if(arr[mid]==key){
            return mid;
        } else if (arr[mid]>key)
        {
            high = mid + 1;
        } else {
            low = mid - 1;
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
       cin>>arr[i];   // you have to take all the elements in  ordered format ascending order
    }
    cout << "Enter the element you want to search:";
    cin>>key;
int index = binarySearch1(arr, n, key);

    if (index != -1)
        cout << "Index: " << index << endl;
    else
        cout << "Element not found in the array." << endl;  
    return 0;
}
