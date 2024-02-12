#include<iostream>
#include <cmath>
using namespace std;

class simple{
    protected:
    int a, b;
    public:
    void setdata1(int num1,int num2){
        a=num1;
        b=num2;
    }
    void calc(){
        cout<<"Sum of "<<a<<" and "<<b<<" is : "<<a+b<<endl;
        cout<<"Difference of "<<a<<" and "<<b<<" is : "<<a-b<<endl;
        cout<<"Multiplication of "<<a<<" and "<<b<<" is : "<<a*b<<endl;
        cout<<"Division of "<<a<<" and "<<b<<" is : "<<a/b<<endl;
    }

};

class scientific{
    protected:
    int x,y;
    public:
    void setdata2(int num1,int num2){
        x=num1;
        y=num2;
    }
    void sci_calc(){
        cout << "The square root of x is " << sqrt(x) << endl;
        cout << "The square root of y is " << sqrt(y) << endl;
        cout << "Cube root of x = " << cbrt(x) << endl;
        cout << "Cube root of y = " << cbrt(y) << endl;
        cout << "The power of x to the power of y is " << pow(x,y) << endl;
    }
};

class hybrid : public simple, public scientific{
    public:
    void perform(int num1, int num2){
        simple::setdata1(num1,num2);
        scientific::setdata2(num1,num2);
        simple::calc();
        scientific::sci_calc();
    }
};


int main(){
    hybrid h;
    h.perform(2,3);

    simple s;
    s.setdata1(1,2);
    s.calc();
    return 0;
}