#include<iostream>
#include<map>
using namespace std;

void display(map<string,int> &m){
    map<string,int> :: iterator iter;
    for(iter=m.begin(); iter!=m.end();iter++){
        cout << (*iter).first <<" " << (*iter).second <<endl;
    }
}

int main(){
    
    map<string,int> marksMap;

    marksMap["Sagar"]=98;
    marksMap["Akash"]=75;
    marksMap["Rahul"]=60;

    marksMap.insert({{"Raj",90}, {"Sam",45}});
    marksMap.insert({"Jack",67});

    display(marksMap);

    cout << "the size of map is : "<< marksMap.size()<<endl;

    marksMap.erase("Jack");
    display(marksMap);

    marksMap["Dev"]=34;
    display(marksMap);

    
    

    





    return 0;
}