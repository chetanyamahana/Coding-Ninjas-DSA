#include <iostream>
using namespace std;
class Student{
    static int totaStudents;
public:
    int rollNumber;
    int age;
    //Static propety: Properties which belong to a class
    //static int totaStudents;//Total Number of students present
    Student(){
        totaStudents++;
    }
    int getRollNumber(){
        return rollNumber;
    }
    static int getTotalStudent(){
        return totaStudents;
    }
};
int Student::totaStudents=0;//initialize static data members
//Static resolution operator
int main(){
    Student s1;
    //cout<<s1.age<<" "<<s1.rollNumber<<endl;
    //cout << s1.totaStudents << endl;
    //s1.totaStudents=20;
    Student s2;
    //cout << s2.totaStudents << endl;
    Student s3,s4,s5;
    //cout<<Student::totaStudents<<endl;
    cout << Student::getTotalStudent() << endl;
}