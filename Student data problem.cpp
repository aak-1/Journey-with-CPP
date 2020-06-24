#include<iostream>
using namespace std;
int add((*a)[int][int]){
         int sum=0;
         for(int i=0;i<n;i++)
        {
            sum=sum+ p[i][];
        }
        cout<<sum;}

int main()
{
    int n;
    cout<<"enter number of students"<<endl;
    cin>>n;
    string stuname[n];
    int markssid[n][2];
    for (int i=0;i<n;i++)
        {
            cout<<"enter name "<<endl;
            cin>>stuname[i];
            cout<<"enter sid "<<endl;
            cin>>markssid[i][1];
            cout<<"enter marks "<<endl;
            cin>>markssid[i][2];
        }
     int (*p_stuff)[n][2] = &markssid;
     add(p_stuff);

}
