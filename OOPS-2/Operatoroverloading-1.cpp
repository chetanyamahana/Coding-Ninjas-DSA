#include <iostream>
using namespace std;
class Fraction
{
private:
    int numerator;
    int denominator;

public:
    Fraction(int numerator, int denominator)
    {
        this->numerator = numerator;
        this->denominator = denominator;
    }
    void print()
    {
        cout << this->numerator << " / " << this->denominator << endl;
    }
    void simplify()
    {
        int gcd = 1;
        int j = min(this->numerator, this->denominator);
        for (int i = 1; i <= j; i++)
        {
            if (this->numerator % i == 0 && this->denominator % i == 0)
            {
                gcd = i;
            }
        }
        this->numerator = this->numerator / gcd;
        this->denominator = this->denominator / gcd;
    }
    Fraction add(Fraction const &f2)
    {
        int lcm = this->denominator * f2.denominator;
        int x = lcm / this->denominator;
        int y = lcm / f2.denominator;
        int num = x * numerator + (y * f2.numerator);
        //numerator = num;
        //denominator = lcm;
        Fraction fNew(num,lcm);
        fNew.simplify();
        return fNew;
    }
    Fraction operator+(Fraction const &f2) const//Function name:Operator-Keyword
    {
        int lcm = this->denominator * f2.denominator;
        int x = lcm / this->denominator;
        int y = lcm / f2.denominator;
        int num = x * numerator + (y * f2.numerator);
        Fraction fNew(num, lcm);
        fNew.simplify();
        return fNew;
    }
    void multiply(Fraction const &f2)
    {
        int dem = this->denominator * f2.denominator;
        int num = this->numerator * f2.numerator;
        numerator = num;
        denominator = dem;
        simplify();
    }
    Fraction operator*(Fraction const &f2) const
    {
        int dem = this->denominator * f2.denominator;
        int num = this->numerator * f2.numerator;
        Fraction fNew(num,dem);
        fNew.simplify();
        return fNew;
    }
    /*bool operator==(Fraction &f2) {
        this->simplify();
        f2.simplify();
        int num1=this->numerator;
        int dem1=this->denominator;
        int num2=f2.numerator;
        int dem2=f2.denominator;
        return (num1==num2&&dem1==dem2);
    }*/
    bool operator==(Fraction &f2) const
    {
        int num1 = this->numerator;
        int dem1 = this->denominator;
        int num2 = f2.numerator;
        int dem2 = f2.denominator;
        return (num1 == num2 && dem1 == dem2);
    }
    //Pre-increment operator
    Fraction& operator++(){
        numerator=numerator+denominator;
        simplify();
        return *this;
    }
    //Post-increment
    Fraction operator++(int){
        Fraction fNew(numerator,denominator);
        numerator=numerator+denominator;
        simplify();
        fNew.simplify();
        return fNew;
    }
    Fraction& operator+=(Fraction const &f2){
        int lcm=denominator*f2.denominator;
        int x=lcm/denominator;
        int y=lcm/f2.denominator;
        int num=x*numerator+(y*f2.numerator);
        numerator=num;
        denominator=lcm;
        simplify();
        return *this;
    }
};
int main(){
    //Fraction f1(10,2);
    /*Fraction f2(15,4);
    Fraction f3 = f1.add(f2);
    Fraction f4 = f1 + f2;
    //f1.multiply(f2);
    Fraction f6 = f1 * f2;

    f1.print();
    f2.print();
    f3.print();
    f4.print();
    f6.print();
    Fraction f7(10,2);
    Fraction f8(20,4);
    if(f7==f8){
        cout<<"Equal"<<endl;
    }else{
        cout<<"Not Equal"<<endl;
    }*/
    //++f1;
    //f1.print();
    /*Fraction f3=++f1;
    f1.print();
    f3.print();*/
    //Fraction f3 = ++(++f1);
    //Fraction f3 = f1++;
    //f1.print();
    //f3.print();
    int i=5,j=3;
    (i+=j)+=j;
    cout<<i<<" "<<j<<endl;
    Fraction f1(10,3);
    Fraction f2(5,2);
    f1+=f2;
    f1.print();
    f2.print();
    (f1+=f2)+=f2; 
} 