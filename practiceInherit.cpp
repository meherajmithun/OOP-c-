#include<bits/stdc++.h>
using namespace std;

class student{
public:    
    string name;
    int id;
    string dept;
};
class teacher : public student{
public:
    string teacherName;
    string designation;
};
//if same attribute in two class are same .then it showes an error.
class vc : public teacher{
public:
    void info(){
        cout<<"Student name is : "<<name<<endl;
        cout<<"Student id is : "<<id<<endl;
        cout<<"Student dept is : "<<dept<<endl;
        cout<<"Teacher name is : "<<teacherName<<endl;
        cout<<"Teacher designation is : "<<designation<<endl;
    }
};

int main(){
    vc v1;
    v1.name = "Meheraj";
    v1.id = 430;
    v1.dept = "CSE";
    v1.teacherName = "Nabliha";
    v1.designation = "Lecturer";
    v1.info();
}