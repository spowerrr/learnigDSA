// #include<iostream>
// using namespace std;
// int main(){
//     int arr[5] = { 1, 2, 5, 4, 3 };
//     arr[0]=1;                        //int max = arr[0];
//     for (int i = 1; i < 5; i++){    //for (int i = 0; i < 5; i++){ 
//         if (arr[0] < arr[i])       //         if (max < arr[i])
//         {                         //             {arr[0]=arr[i];}
//             arr[0]=arr[i];       //       cout<<"Max : "<<max<<endl;
//         }
//     }
//     cout<<"Max : "<<arr[0]<<endl;
// }

//vector approach
#include <bits/stdc++.h>
#include <algorithm> // Add the missing include directive for the <algorithm> header.
using namespace std;

int sortArr(vector<int> &arr) {
    std::sort(arr.begin(), arr.end()); // Specify the namespace for the "sort" function call.
    return arr[arr.size() - 1];
}

int main() {
    vector<int> arr = {1, 5, 3, 7, 6, 2};
    cout << "Max : " << sortArr(arr) << endl;
    return 0;
}
