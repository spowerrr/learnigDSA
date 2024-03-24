#include<iostream>
using namespace std;
int main(){
    int a=31;
    bool flag=0;
    for (int i = 1; i <= a/2; i++)
    {
        if(a%2==0){
            flag=1;
            break;
        }
    }
    if(flag) cout<<"Not prime"<<endl;
    else cout<<"prime"<<endl;
}