#include<iostream>
#include<string>
using namespace std;
const int monthDays[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
const string monthNames[12] = {"january","february","march","april","may","june","july","august","september","october","november","december"};
class date_class{
int day,year;
string month;
public:
  date_class(){}
  date_class(int q):day(q)
  {}
  void getData(){
  cout << "enter day, month and year"<<endl;
  cin>>day>>month>>year;
  }
  int getDaysInMonth(){
    int m;
    for(m = 0;m<12;++m){
        if(month==monthNames[m])
            break;
    }
    return monthDays[m];
}

  int no_of_leaps(int y,string m){
  if(m=="january"||m=="february")
    y--;
  return y/4 + y/400-y/100;
  }
  int days_in_year_before_given(string m){
  int i,retvar=0;
  for(i = 0;i<12;++i){
    if(monthNames[i]==m)
        break;
  }
  for(int j = 0;j<=i-1;++j)
    retvar+=monthDays[j];
  return retvar;
  }
  date_class operator-(date_class d){
  //finding total days till first date
  int no_till_first=365*(year-1);
  no_till_first += no_of_leaps(year,month);
  no_till_first+=day;
  no_till_first+=days_in_year_before_given(month);
  int no_till_second = 365*(d.year-1);
  no_till_second += no_of_leaps(d.year,d.month);
  no_till_second+=d.day;
  no_till_second+=days_in_year_before_given(d.month);
  return date_class(no_till_second-no_till_first);
  }
  void show(){
  cout << "days in between " << day<<endl;
  }
friend void operator++(date_class d);
};
void operator++(date_class d){
  int q;
  for(q = 0;q<12;++q){
    if(d.month==monthNames[q])
        break;
  }
    cout << "next day after first given date is ";
    if(d.day==monthDays[q]&&q<11)
        cout << "1 " << monthNames[q+1]<<endl;
    else if(d.day==monthDays[q]&&q==11)
        cout << "1 " << "january " << ++d.year<<endl;
    else
        cout << ++d.day << d.month << d.year;
  }

int main(){
date_class d1,d2;
d1.getData();
d2.getData();
int f = d1.getDaysInMonth();
int s = d2.getDaysInMonth();
cout << "no of days in months given are " << f << " and " << s<<endl;
date_class difference;
difference = d1 - d2;
difference.show();
++d1;
}
