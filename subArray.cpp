#include<bits/stdc++.h>
using namespace std;
void printSubArray(vector<int> arr,int start,int end){
    if (end==arr.size())
    return;
    else if (start > end){
        printSubArray(arr, 0, end+1);
    }
    else{
        cout << "[";
        for (int i = start; i < end; i++)
            cout << arr[i] << ", ";
        cout << arr[end] << "]" << endl;
        printSubArray(arr, start + 1, end);
    }
    return;   
}
int main(){
    vector<int> arr= {1,2,3};
    printSubArray(arr,0,0);
    return 0;
}