#include<iostream>
int main()
{
int n,k,f,s=0,a,r=1;
std::cin>>n;
std::cin>>k;
while(n>0)
{
a=n%10;
s=s*10=a;
n=n/10;
}
while(s>0)
{
f=s%10;
if(r==k)
{
std::cout<<f;}
r++;
s=s/10;
}
return 0;
}