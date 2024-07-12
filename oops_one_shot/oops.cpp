#include <iostream>
#include <string>
using namespace std;
class Teacher
{
private:
    double salary;

public:
    // Properties/Attributes
    string name;
    string dept;
    string subject;

    // Methods/Member Functions
    void changeDept(string newDept)
    {
        dept = newDept;
    }
    //setter
    void setSalary(double s){
        salary=s;
    }
    //getter
    double getSalary(){
        return salary;
    }
};
class Account{
    public:
        string accID;
        string username;
    private://Data Hiding
        double balance;
        string password;
};
int main()
{
    Teacher t1;  //constructor call
    t1.name = "Shradha";
    t1.dept = "CSE";
    t1.subject = "C++";
    t1.setSalary(25000);

    cout<<t1.getSalary();
    return 0;
}