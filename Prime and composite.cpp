#include<iostream>
using namespace std;
int main()
{
    static int d;
    int i;
    int j;
    cout<<"please enter a number " ;
    cin>>i;
    for(j=2;j<i;j++)
    {
        if (i%j==0){
        d = 1;
        break;}
        else
        d = 0 ;
    }
    if (d==1) cout<<"composite";
    else cout<<"prime";
}
