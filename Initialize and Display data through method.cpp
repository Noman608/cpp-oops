#include<bits/stdc++.h>
using namespace std;

class student{
public:

    int id;
    string name;

    void Insert(int i,string s){
    id = i;
    name = s;
    }
    void display(){
    cout<<id<<" "<<name<<endl;
    }
};

int main()
{
    student s1,s2;
    s1.Insert(123,"Abdullah Al Noman");
    s2.Insert(456,"Rabby");
    s1.display();
    s2.display();
    return 0;
}
