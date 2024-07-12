#include <bits/stdc++.h>
using namespace std;
struct student{
    string name,phone_number;
    int roll_number,class_num;
    char section;
    
};
void printStudentDetails(student s){
    cout<<"Name:"<<s.name<<endl;
    cout << "Phone Number:" << s.phone_number << endl;
    cout << "Roll Number:" << s.roll_number << endl;
    cout << "Class Number:" << s.class_num << endl;
    cout << "Section:" << s.section << endl;
}
int main(){
    student s1;
    s1.name="codingNinja";
    s1.roll_number=12;
    s1.class_num=9;
    s1.section='B';
    printStudentDetails(s1);
}