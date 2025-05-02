#include<iostream>
#include<string>
using namespace std;
int main()
{
string str1="mahir";
string str2="judge";
cout<<"before swapping:\n";
cout<<"str1:"<<str1<<"\nstr2:"<<str2<<endl;
string temp = str1;
str1=str2;
str2=temp;
cout<<"\nafter swapping:\n";
cout<<"str1:"<<str1<<"\nstr2:"<<str2<<endl;
return 0;
}


