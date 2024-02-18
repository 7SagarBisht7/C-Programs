#include<iostream>
#include<vector>
using namespace std;

void display(vector<int> v){
    for(int j=0;j<v.size();j++){
        cout<<v[j]<<" ";
    }
    cout << endl;
}

int main(){

    vector<int> vec1(4);
    for(int i=0;i<vec1.size();i++){
        cout << "Enter the elements : "<<endl;
        cin>> vec1[i];
    }
    display(vec1);
    vec1.push_back(5);
    display(vec1);

    vector<int> :: iterator iter = vec1.begin();
    //or auto iter = vec1.begin();
    
    vec1.insert(iter+2,26);
    display(vec1);

    vec1.pop_back();
    display(vec1);

    vec1.erase(iter);
    display(vec1);


    return 0;
}