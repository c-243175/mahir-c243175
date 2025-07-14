#include<iostream>
using namespace std;
template<class t>
class calculator
{
private:
    t num1,num2;
public:
    calculator(t n1,t n2)
    {
        num1=n1;
        num2=n2;
    }
    void displayment(){
    cout<<"numbers are:"<<num1<<"and"<<num2<<" "<<endl;
        cout<<"addition is:"<<add()<<endl;}
        t add()
        {
            return num1+num2;
        }

    };
    int main()
    {
        calculator<int>intcalc(2,1);
        intcalc.displayment();
        return 0;
    }
