#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n;
    cin>>n;
    vector<int>v;
    for (int i=0;i<n;i++)
    {
     int a;
     cin>>a;
     v.push_back(a);
    };
    sort(v.begin(),v.end());
    return 0;
    for (int i=0;i<n;i++)
    {
     cout << v.at(i) << ' ';
    }
}
/*#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
/*vector<int> v;
int size;
cin>>size;
int a;
for(int i=0;i<size;i++)
{
 cin>>a;
 v.push_back(a);
}
sort(v.begin(),v.end());
 for(int i=0;i<size;i++)
    {
      cout<<v[i]<<" ";
    }
}
*/
