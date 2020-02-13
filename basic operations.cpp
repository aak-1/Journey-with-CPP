#include<iostream>
using namespace std;
int main()
{
	int a;
	int c;
	cout<<"How many large rooms would you like to get cleaned? ";
	cin>>a;
	cout<<endl<<"How many small rooms would you like to get cleaned? ";
	cin>>c;
	cout<<endl<<"Price per small room is Rs. 25"<<endl<<"Price per large room is Rs. 50"<<endl;
	cout<<"Cost is Rs. "<<25*a+50*c<<endl;
	cout<<"The Estimate is valid upto 30 days";

}
