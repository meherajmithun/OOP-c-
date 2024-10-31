#include<bits/stdc++.h>
using namespace std;

class student{
public:
    string name;
    int id;
    string dept;
    double cgpa;
    student(string name,int id,string dept,double cgpa){
        this->name = name;
        this->id = id;
        this->dept = dept;
        this->cgpa = cgpa;
    }
    student(const student &s1){
        cout<<"Eta arkta kahini"<<endl;
        name = s1.name;
        id = s1.id;
        dept = s1.dept;
        cgpa = s1.cgpa;
    }
    void info(){
        cout<<"Student name is : "<<name<<endl;
        cout<<"Student id is : "<<id<<endl;
        cout<<"Student dept. is : "<<dept<<endl;
        cout<<"Student cgpa is : "<<cgpa<<endl;
    }
};

int main(){
    student s1("Mithun",430,"CSE",3.83);
    s1.info();
    student s2("Nayem",439,"LLB",3.83);
    s2.info();
    student s3(s1);
    s3.info();
}