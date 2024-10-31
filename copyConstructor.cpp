#include<bits/stdc++.h>
using namespace std;

class student{
public:
    string name;
    int id;
    string dept;
    student(string s , int n, string d){
        name = s;
        id = n;
        dept = d;
    }
    student(student &original){
        name = original.name;
        id = original.id;
        dept = original.dept;
    }
    void info(){
        cout<<"Student name is : "<<name<<endl;
        cout<<"Student id is : "<<id<<endl;
        cout<<"Student dept is : "<<dept<<endl;
    }
};

int main(){   
    student s1("Meheraj",430,"LLB");
  //  s1.info();
    //student s2(s1);//default copy constructor
    student s2(s1); // custom copy constructor which is made by user
    s2.info();
}