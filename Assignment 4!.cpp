#include <iostream>
using namespace std;
int main(){
int n;
cout<<"enter number of elements"<<endl;
cin>>n;
int arr[n];
for(int a=0;a<n;a++){
    cout<<"enter number"<<endl;
    cin>>arr[a];
}
for(int a=0;a<n;a++){
    cout<<"element "<<a+1<<" is "<<arr[a]<<endl;
}
int num;
cout<<"enter number to be checked"<<endl;
cin>>num;
int counter=0;
for(int a=0;a<n;a++){
    if(num==arr[a]){
        counter++;
    }
}
cout<<"the number of times "<<num<<" has appeared in the array is "<<counter<<endl;
}
