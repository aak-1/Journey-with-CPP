
#include <iostream>
using namespace std;
int sqaure(int x)
{return x*x;}
double sqaure(double x)
{return x*x;}

int main()
{
cout<<sqaure(6)<<endl;
cout<<sqaure(6.5)<<endl;
cout<<sqaure('a')<<endl;
return 0;
}
