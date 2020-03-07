#include<iostream>
using namespace std;
int noofdays[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
int leapdays[12] = {31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
string monthnames[12] = {"january","february","march","april","may","june","july","august","september","october","november","december"};
class date_class{
public:
    string month;
    int year,date;
 getdata(){

 }
int isleap()
     {
         if(year%100==0)
         {
             if(year%400==0)
             return 1;
             else return 0;
         }
         else if(year%4==0)
         return 1;
         else return 0;
     }
int operator-(date_class)
{
    int year1=0,year2=0;
    int month1=0,month2=0;
    for(int i=1;i<year;i++)
    {
        if(isleap()==1)
        year1+=366;
        else year1+=365;
    }
    for(int i=0;i<monthnum-1;i++)
    {
        if(isleap()==1)
        month1+=leapdays[i];
        else month1+=noofdays[i];
    }
    for(int i=1;i<temp.year;i++)
    {
        if(isleap()==1)
        year2+=366;
        else year2+=365;
    }
    for(int i=0;i<temp.monthnum-1;i++)
    {
        if(isleap()==1)
        month2+=leapdays[i];
        else month2+=noofdays[i];
    }
    int final=year1-year2+month1-month2+day-temp.day;
    return(final>0?final:-final);

}

};
int main(){
string month,ans;
int year;
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
}

}

