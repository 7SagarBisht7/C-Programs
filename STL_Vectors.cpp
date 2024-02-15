#include <iostream>
#include <vector>
using namespace std;

void display(vector<int> &vec)
{
    for (int j = 0; j < vec.size();j++){
        //cout << vec[j]<<" ";
        cout << vec.at(j)<<" ";
    }
    cout<<endl;
}

int main()
{
    vector<int> v1;
    vector<char> v2(4);

    int size, element;
    cout << "Enter the number of elements you want in your vector: ";
    cin >> size;
    for (int i = 0; i < size; i++)
    {
        cout << "Enter the element of vector : " << endl;
        cin >> element;
        v1.push_back(element);
    }
    //v1.pop_back();
    display(v1);
    vector<int>::iterator iter = v1.begin();
    v1.insert(iter+2,3,35);
    display(v1);
    return 0;
}