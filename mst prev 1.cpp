#include<iostream>
using namespace std;
int main(){
int a,counter=0,sum=0,maximum=0;
int minimum=0;
cout << "Enter the numbers. When you want to stop, enter -1. "<<endl;
cin>>a;
while(a>=0){
    counter++;
    sum=sum+a;
    maximum=((a>maximum)?a:maximum);
    minimum=((a<minimum)?a:minimum);
    cin>>a;
}
cout<<"No. of integers entered "<<counter<<endl;
cout<<"Average is "<<sum/counter<<endl;
cout<<"Maximum number is "<<maximum<<endl;
cout<<"Minimum number is "<<minimum;
return 0;
}
