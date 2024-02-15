#include<iostream>
#include<string>
#include<fstream>

using namespace std;

int main(){
    string str= "hello world";
    ofstream out("sample.txt");
    out<<str;
    out.close();

    string str2;

    ifstream in("sample.txt");
    getline(in,str2);
    cout<<str2;
    

    return 0;
}