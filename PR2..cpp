#include<iostream>
using namespace std;
int main()
{
    int i;
    int j;
    cout<<"please enter a number " ;
    cin>>i;
    for(j=2;j<i;j++)
    {
        if (i%j==0){
        cout<<"composite and divisible by"<< j;
        break;}
        else{
        cout<<"prime";
        break;
    }
    }
