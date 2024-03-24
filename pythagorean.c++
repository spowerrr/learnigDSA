#include<iostream>
#include<cmath>
using namespace std;
pair<int,int> check_max(int x,int y,int z){
    int a=max(z,max(x,y));
    cout <<"Max: "<< a<<endl;
    int f1=pow(a,2);
    cout << "F1: " <<f1<< endl;
    int min1=min(z,min(x,y));
    int min2;
    if (min1==x)
    {
        min2=min(y,z);
    } else if (min1==y)
    {
        min2=min(x,z);
    } else
    {
        min2=min(x,y);
    }


    int f2=pow(min1,2)+pow(min2,2);
    cout << "F2: " <<f2<< endl;
    return make_pair(f1,f2);
}
void check_pythagorean(int x,int y, int z){
    pair<int,int>result=check_max(x,y,z);
    int rightpos=result.first;
    int leftpos=result.second;
    if (leftpos==rightpos)
    {
        cout << "Is is pythogorean" << endl;
    } else
    {
        cout << "It's not pyhtogorean";
    }
    }
int32_t main() {
    int x,y,z;
    cin>>x>>y>>z;
    check_pythagorean(x,y,z);

    return 0;
}