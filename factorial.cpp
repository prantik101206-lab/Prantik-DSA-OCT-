#include <iostream>
using namespace std;
int fact(int n);
int main()
{
    int n,factorial=1;
    cout<<"enter=";
    cin>>n;
    factorial=fact(n);
    cout<<"factorial of "<<n<<" is "<<factorial;
    return 0;
}
long long int fact (int n)
{
    if(n==1)
    return 1;
    else
    return n*fact(n-1);
}