#include<iostream>
#include<vector>
using namespace std;

void display(vector<int> &v){
    for(int j=0; j<v.size();j++){
        cout << v.at(j)<<" ";
    }
    cout<<endl;
}


int main(){
    vector<int> vec1;
    int size, element;
    cout<<"Enter the number of elements in array: ";
    cin>>size;
    for(int i=0; i<size; i++){
        cout<<"Enter the element : "<<endl;
        cin>>element;
        vec1.push_back(element);
    }
    display(vec1);

    return 0;
}