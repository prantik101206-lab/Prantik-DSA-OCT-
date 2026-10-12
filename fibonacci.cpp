#include<iostream>
using namespace std;
long long int fib(int n);
int main()
{
    int n,fibonacci=1;
    cout<<"enter=";
    cin>>n;
    fibonacci=fib(n);
    cout<<"fibonacci of "<<n<<" is "<<fibonacci;
    return 0;
}
long long int fib(int n)
{
    if(n==1)
        return 0;
    else if(n==2)
        return 1;
    else
    return n*fib(n-1)+fib(n-2);
}