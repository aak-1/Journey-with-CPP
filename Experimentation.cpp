#include<iostream>
using namespace std;
#define multiply(x) x*x
int fun(int a,int b=1,int c=2){return a+b+c;}
int main()
{
    int i;
    cout<<"Enter the student ID"<<endl;
    cin>>i;
    int j=i/1000000;
    cout << "The year of enrollment is 20"<<j<<endl;
    cout<<"The year of graduation is 20"<<j+4<<endl;
    int k= i-(j*1000000);
    int f= k/1000;
    cout<<"The branch code is "<< f <<endl;

    /*int x;
    double ans = 20.0/multiply(2+3);
    cout<< ans;


    int arr[]{1,2,3,4,5};
    cout<<arr<<endl;
    cout<<*(arr+1);

    cout<<"new is: ";
    int w=0;
    while (w){
            cout<<"its wchd";
    }
    cout<< @ ;*/
/*
char str[5] = "ABC";

cout << str[3];

cout << str;
int a;

a = 5 + 3 * 5;

cout << a;
int x, y;
x = 5;
y = ++x * ++x;
cout << x << y;
x = 5;
y = x++ * ++x;
cout << x << y;
    return 0;*//*
    int arr[10]{1,2,3,4,5};int b;
cout<< fun(12,2);}*/
#include <iostream>
#include <cstdlib>
using namespace std;
int main()
{
	for (int j=0; j < 80 ; j++)
    {
        char ch=(j%8?' ' : 'x');
        cout<< ch;
    }
}

