#include<iostream>
using namespace std;
template<typename T>
T sum(T n1,T n2)
{
    T s;
    s=n1+n2;
    return s;
}
int main()
{
    int a=10,b=12,c;
    float i=11.5,j=2.5,k;

    c=sum(a,b);
    cout<<"\n the sum of int value"<< c;
    k=sum(i,j);
     cout<<"\n the sum of float value"<< k;
     return 0;
}
