//Example program 1
//SUM OF DIGITS IN A NUMBER
#include <iostream>
int main()
{
    int n,r,sum=0;
    std::cin>>n;
    while(n>0)
    {
        r=n%10;
        sum=sum+r;
        n=n/10;
    }
    std::cout<<sum;
    return sum;
}
