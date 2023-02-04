// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
int factorial(int n)
{
    int f=1;
    for(int i=1;i<=n;i++)
    {
        f*=i;
    }
    return f;
}
int main() 
{
    int n=0;
    cin>>n;
    int total=0;
    //cout<<factorial(n)<<endl<<factorial(n-2)*2;
    total=factorial(n)/(factorial(n-2)*2);
    cout<<total-1<<endl;
    
}
