#include<iostream>
using namespace std;
int main(){
int a,counter=0,sum=0,maximum=0;
cout << "Enter the numbers. When you want to stop, enter -1. "<<endl;
cin>>a;
while(a>=0){
    counter++;
    if ((a&1)==0){
    sum=sum+a;}
    maximum=(a>maximum?a:maximum);
    cin>>a;

}
cout<<"No. of integers entered "<<counter<<endl;
cout<<"Average is "<<sum/counter<<endl;
cout << "sum is "<<sum<<endl;
cout<<"Maximum number is "<<maximum;
return 0;
}
