#include<bits/stdc++.h>
using namespace std;

class Teacher{
    public:
    Teacher(){
        dept = "CSE";
        cout<<"I am constructor"<<endl;
    }
    Teacher(string s , string d , int beton){
        name = s;
        dept = d;
        salary = beton;
    }
  private:
    double salary;
    
public:
    string name;
    string dept;
    void show(){
        cout<<"Name is "<<name<<endl;
        cout<<"Department is "<<dept<<endl;
        cout<<"Kamlar beton is "<<salary<<endl;
    }

};

int main(){
    //Teacher t1;
    //cout<<t1.dept<<endl;
    Teacher t2("Meheraj","BBA",200);
    t2.show();
}