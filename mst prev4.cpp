#include<iostream>
using namespace std;
int main(){
    cout<<"Enter number of entries "<<endl;
    int n,i=0;
    cin>>n;
    cout<<"Enter numbers "<<endl;
    float arr[n];
    for (i=0;i<n;i++)
        {
        cin>>arr[i];
        }
    float rs[n];
    for (i=0;i<n;i++)
    {
            if(i>0)
            {
        rs[i]=rs[i-1]+arr[i];
            }
            else rs[i]=arr[i];
    }
    for (i=0;i<n;i++)
        {
        cout<<arr[i]<<"  ";
        }
    cout<<endl;
     for (i=0;i<n;i++)
     {
        cout<<rs[i]<<"  ";
     }
    cout<<endl;
    float a;
    a= rs[0];
    for (i=0;i<n;i++)
        {
            a= (a>=rs[i])? a: rs[i];
        }
    cout<<"The largest running sum is "<< a;
    return 0;
}
