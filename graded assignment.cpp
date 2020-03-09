#include<iostream>
using namespace std;
int main(){
    string name;
    float weight;
    float height;
    cout<<"enter name"<<endl;
    getline(cin,name);
    cout<<"enter height in inches"<<endl;
    cin>>height;
    cout<<"enter weight in pounds"<<endl;
    cin>>weight;
    float bmi;
    bmi= 703*weight/(height*height);
    if (bmi<= 19){cout<<name <<", you are underweight and your bmi is "<<bmi<<endl; }
    else if(bmi>=19&&bmi<=24){cout<<name <<", you are normal and your bmi is "<<bmi<<endl;}
    else if(bmi>=24&&bmi<=29){cout<<name <<", you are overweight and your bmi is "<<bmi<<endl;}
    else {cout<<name <<", you are obese and your bmi is "<<bmi<<endl;}
}
