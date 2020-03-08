#include<iostream>
#include<cmath>
using namespace std;
float age,fem, fph, fin;
int noofdays[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
int leapdays[12] = {31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
string monthnames[12] = {"january","jebruary","march","april","may","june","july","august","september","october","november","december"};

void blue(float a,float b,float c){
    float ind=a+b+c;
    cout<<"The biorhythm index is "<<ind;
}

float cycle (float d) {
    fem = sin(age*28*6.2831);
    fph = sin(age*23*6.2831);
    fin = sin(age*33*6.2831);
    cout<<"Emotional index is "<<fem<<endl;
    cout<<"Physical index is "<<fph<<endl;
    cout<<"Intellectual index is "<<fin<<endl;
}
class student{
private:

    static int count;
    string name3;
    unsigned long long int sid;
    string branch;

public:

    int setsid(){
    cout << "Enter SID of the student"<<endl;
    cin>> sid;
    }
    int setname(){
    cout << "Enter student's name"<<endl;
    cin.ignore();
    getline(cin,name3);

    }
    int setbranch(){
    cout << "Enter student's branch"<<endl;
    cin>> branch;
    }
    student(){
    name3 = "default name";
    sid = 000;
    branch = "default branch";
    }
    void destructTest(student*point)
{
    delete point;
    cout << "Object Destroyed\n";
}
    static void showcount()
    {
        count++;
        cout << "count:" << count <<endl;
    }


};
int student::count=0;

int main(){
cout<<"You are currently viewing Aakriti Aggarwal's assignment. Which question would you like to view first? "<<endl;
int z;
cin>>z;
switch(z){
case 1:{
    string name;
    float weight;
    float height;
    cout<<"enter name"<<endl;
    cin.ignore();
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
    else {cout<<name <<", you are obese and your bmi is "<<bmi<<endl;}}
    break;

case 2:
    {cout<<"Enter age in days ";
    cin>>age;
    cycle(age);
    blue (fem,fph,fin);}
    break;

case 3:
    {int num;
    cout<<"Enter number of students"<<endl;
    cin>>num;
    student *point[num];
    for (int i=0;i<num;i++){
    point[i] = new student;
    point[i]->showcount();
    cout<<"Would you like to enter details of student number "<<i+1<<"? (y/n)"<<endl ;
    char ch;
    cin >>ch;
    if (ch=='y'||ch=='Y') {
        point[i]->setsid();
        point[i]->setname();
        point[i]->setbranch();
    }
    point[i]->destructTest(point[i]);
    }}
    break;

case 4:{
string month,ans;
cout<<"is it leap year? yes or no";
cin>>ans;
cout<<"Enter month in lower case";
cin>>month;
for(int i=0;i<12;i++){
    if (ans=="no"){
    if(month== monthnames[i]) cout<<"No. of days are "<<noofdays[i];}
    if (ans=="yes"){
    if(month ==monthnames[i]) cout<<"No. of days are "<<leapdays[i];
    }



