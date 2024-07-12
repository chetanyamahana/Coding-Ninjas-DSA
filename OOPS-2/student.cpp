#include <bits/stdc++.h>
using namespace std;
class Student{
    public:
    int age;
    const int rollNumber;
    int &x; //age refrence variable

    /*Student(int r):rollNumber(r){
        //rollNumber=r;
    }*/
    /*Student(int r,int age) : rollNumber(r),age(age)
    {

    }*/
    Student(int r, int age) : rollNumber(r), age(age),x(this->age)
    {

    }
    //No need to use this keyword

};
int main(){
    Student s1(101,20);
    //s1.age=20;
    //s1.rollNumber=101;
}