#include<iostream>
#include<list>
using namespace std;

void display(list<int> &l){
    list<int> :: iterator iter;
    for (iter=l.begin();iter!=l.end(); iter++){
        cout <<*iter<<" ";
    }
    cout << endl;
}

int main(){

    list<int> l1;
    l1.push_back(3);
    l1.push_back(4);
    l1.push_back(2);
    l1.push_front(5);
    display(l1);

    list<int> l2(4);
    list<int> :: iterator it = l2.begin();
    *it=5;
    it++;
    *it=6;
    it++;
    *it=7;
    it++;
    *it=1;
    it++;
    display(l2);


    l1.pop_back();
    display(l1);
    l2.remove(6);
    display(l2);

    l1.sort();
    display(l1);

    l1.merge(l2);
    display(l1);

    l1.reverse();
    display(l1);

    l1.swap(l2);
    display(l1);

    return 0;
}