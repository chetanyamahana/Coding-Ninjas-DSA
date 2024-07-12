#include <iostream>
using namespace std;
#include "Student.cpp"
int main(){
    Student s0(10,101);
    cout<<"S0 Location:"<<&s0<<endl;
    s0.display();
    Student s1;
    s1.display();
    Student s2;
    Student *s3=new Student();
    s3->display();
    cout<<"Parametrized Constructor Demo:"<<endl;
    Student s4(4);
    s4.display();
    Student *s5 = new Student(10);
    s5->display();
    Student s6(19,8);
    s6.display();
    Student *s7=new Student(19,8);
    s7->display();
}