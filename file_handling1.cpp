#include <iostream>
#include <fstream>
using namespace std;

int main()
{

    string str = "hello everyone";
    string str2;
    ifstream in("sample.txt");
    getline(in, str2);
    cout << "The content of the file is: \n"
         << str2 << endl;

    ofstream out("sample.txt");
    out << str;
    cout << "The content of the file after update is: \n"
         << str << endl;

    return 0;
}