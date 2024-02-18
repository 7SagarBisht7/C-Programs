#include<iostream>
#include<map>
#include<string>
using namespace std;

int main(){
    map<string,int> marksmap;
    marksmap["Sagar"]= 99;
    marksmap["Akash"] = 85;
    marksmap["Rahul"] = 76;
    marksmap.insert({"Rohan",48});
    map<string,int>:: iterator iter;
    for(iter= marksmap.begin();iter!=marksmap.end();iter++){
        cout<<(*iter).first<<" "<<(*iter).second<<endl;
    }
    
    return 0;
}