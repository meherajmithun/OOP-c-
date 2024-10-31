#include<bits/stdc++.h>
using namespace std;

class person{
public:
    string name;
    int age;
    person(){
        cout<<"All attributes student e paiba"<<endl;
        //Why this line is called for student class ? 
    }
    // ~person(){
    //     cout<<"All attributes student e paiba"<<endl;
    //     //Why this line is called for student class ? 
    // }
};

class student : public person{
public:
    int roll;
    student(){
        cout<<"Child constructor"<<endl;
    }
    // ~student(){
    //     cout<<"Child constructor"<<endl;
    // }
    
    void info(){
        cout<<"Student name is : "<<name<<endl;
        cout<<"Student age is : "<<age<<endl;
        cout<<"Student roll is : "<<roll<<endl;
    }
};

int main(){
   // person p1;
    student s1;
    s1.name = "Meheraj";
    s1.age = 21;
    s1.roll = 430;
    s1.info();
}