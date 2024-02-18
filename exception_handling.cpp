#include <iostream>
using namespace std;

void function(int x, int y)
{
    cout << "Inside function" << endl;
    try
    {
        if (y == 0)
        {
            throw y;
        }
        else
        {
            cout << "x/y = " << x / y << endl;
        }
    }
    catch (int e)
    {
        cout << "exception" << e<<endl;
        throw;
    }
    cout<<"end of function"<<endl;
}

int main()
{
    try
    {
        function(4, 0);
    }
    catch (int e)
    {
        cout << e;
    }

    return 0;
}