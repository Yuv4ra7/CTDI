#include <iostream>
#include<cmath>
using namespace std;
int main()
{
    int n,r;
    cin>>n;
cout<<sqrt(n);
r=sqrt(n);
if(r.fail())
{
  cout<<"Yes";
}
  else
  {
      cout<<"No";
  
}
r.clear();
return 0;
}