#include<iostream>
using namespace std;
int main(){
    int arr[5] = { 1, 2, 5, 4, 3 };
    arr[0]=1;                        //int max = 0;
    for (int i = 1; i < 5; i++){    //for (int i = 0; i < 5; i++){ 
        if (arr[0] < arr[i])       //         if (max < arr[i])
        {                         //             {arr[0]=arr[i];}
            arr[0]=arr[i];       //       cout<<"Max : "<<max<<endl;
        }
    }
    cout<<"Max : "<<arr[0]<<endl;
}