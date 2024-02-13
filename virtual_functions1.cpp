#include <iostream>
using namespace std;

class base
{
public:
    int var_base = 1;
    virtual void display()
    {
        cout << "Displaying Base class variable var_base" << var_base << endl;
    }
};

class derived : public base
{
public:
    int var_derived = 2;
    void display()
    {
        cout << "Displaying Base class variable var_base " << var_base << endl;
        cout << "Displaying Derived class variable var_derived " << var_derived << endl;
    }
};

int main()
{
    base *base_ptr;
    base base_obj;
    derived derived_obj;
    base_ptr = &derived_obj;
    
    base_ptr->display();

    return 0;
}