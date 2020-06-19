#include<iostream>
using namespace std;
class Tollbooth{
public:
    int carspay,carsnpay;
    double amount;
    Tollbooth(): carspay(0),carsnpay(0), amount(0) {}
    void carpay(){
    carspay++;
    amount =amount+0.5;
    }
    void carnpay(){
    carsnpay++;
    }
    void disp(){
    cout<<"total cars are "<<carspay+carsnpay<<endl;
    }
    void get(){
    cout<<"paying cars are "<< carspay <<endl;
    }
    void get1(){
    cout<<"not paying cars are "<< carsnpay <<endl;
    }
    void get2(){
    cout<<"cash is "<< amount <<endl;
    }

};
int main(){
char key;
Tollbooth c;
lbl:
cout<<"enter key"<<endl;
cin>>key;
switch(key)
{
    case 'y': c.carpay();
              break;
    case 'n': c.carnpay();
              break;
}
if (key=='y'||key=='n') goto lbl;
c.disp();
c.get();
c.get1();
c.get2();
return 0;
}
