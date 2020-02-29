#include<iostream>
using namespace std;
int main()
{
    int i;
    int j;
    int f=0;
    cout<<"please enter a number " ;
    cin>>i;
    for(j=2;j<i;j++)
    {
        if (i%j==0){
        cout<<"composite and divisible by "<< j;
        int f=1;
        break;}
        else if (f=0)
        cout<<"prime";

    }
}
