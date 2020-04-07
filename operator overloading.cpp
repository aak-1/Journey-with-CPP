#include <iostream>
using namespace std;
class hello{
public: int real,img,a;
public: void set(){
    cout<<"enter real part"<<endl;
    cin>>real;
    cout<<"enter imaginary part"<<endl;
    cin>>img;
    };
friend hello operator + (hello , hello);
void display(){cout<<"real part of sum is "<<real<<"   "<<"imaginary part of sum is "<<img<<endl;}
hello (){cout<<"constructor called"<<endl;}
hello (int a){cout<<"constructor overloaded"<<endl;}
};
hello operator +(hello t1,hello t2)
{
hello temp;
temp.real=t1.real+t2.real;
temp.img=t1.img+t2.img;
}
int main(){
hello t1,t2;
t1.set();
t2.set();
t1.real = t1.real+t2.real;
t1.img = t1.img+t2.img;
t1.display();
hello(3);
return 0;
}

