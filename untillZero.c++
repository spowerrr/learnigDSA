#include<iostream>
using namespace std;
int main(){
    int number,sum=0;
    cout<<"Enter a number: ";
    cin>>number;
    while (number!=0)
    {
        int digit=number%10;
        sum+=digit;
        number/=10;
    }
    cout<<"Sum: "<<sum<<endl;
}