#include <iostream>
using namespace std;

template <class T1, class T2>

class myclass
{
public:
    T1 num1;
    T2 num2;
    myclass(T1 a, T2 b)
    {
        num1 = a;
        num2 = b;
    }
    void display();
};

template <class T1, class T2>
void myclass<T1, T2>:: display()
{
    cout << "the number is: " << this->num1 << " and " << this->num2 << endl;
}

int main()
{
    myclass<int, float> obj(5, 3.4);
    obj.display();
    
    return 0;
}