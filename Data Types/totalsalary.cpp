#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    // Write your code here
    double basic;
    char grade;
    cin >> basic >> grade;
    int grade1 = grade;
    double totalSalary, hra, da, pf, allow;
    hra = (20 * basic) / 100;
    da = (50 * basic) / 100;
    pf = (11 * basic) / 100;
    if (grade1 == 65)

    {
        allow = 1700;
    }
    else if (grade1 == 66)
    {
        allow = 1500;
    }
    else
    {
        allow = 1300;
    }
    totalSalary = basic + hra + da + allow - pf;
    cout << round(totalSalary) << endl;
}
