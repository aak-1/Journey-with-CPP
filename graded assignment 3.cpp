#include<iostream>
using namespace std;
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
    int getsid(){
    cout << "sid is:"<<sid<<endl;
    }
    int getname(){
    cout << "name is: "<<name3<<endl;
    }
    int getbranch(){
    cout << "branch is: "<<branch<<endl;
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
    int num;
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
    }
}
