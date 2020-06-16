#include<iostream>
#include<math.h>
using namespace std;
int main()
{
	int n;
	int a=1;
	cout<<"enter a number n ";
	cin>>n;
	while (a<=n)
    {
       cout<<a<<endl;
       a++;
    }
    int c;
    c=n*(n+1)/2;
	cout<<"sum is "<<c ;
	return 0;
}
