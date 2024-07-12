#include <iostream>
using namespace std;
class Fraction
{
private:
    int numerator;
    int denominator;

public:

    Fraction(){

    }
    Fraction(int numerator, int denominator)
    {
        this->numerator = numerator;
        this->denominator = denominator;
    }
    int getNumerator() const{
        return numerator;
    }
    int getDenominator() const{
        return denominator;
    }
    void setNumerator(int n){
        numerator=n;
    }
    void setDenominator(int d){
        denominator=d;
    }
    void print() const
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
    void add(Fraction const &f2)
    {
        int lcm = this->denominator * f2.denominator;
        int x = lcm / this->denominator;
        int y = lcm / f2.denominator;
        int num = x * numerator + (y * f2.numerator);
        numerator = num;
        denominator = lcm;
        simplify();
    }
    void multiply(Fraction const &f2)
    {
        int dem = this->denominator * f2.denominator;
        int num = this->numerator * f2.numerator;
        numerator = num;
        denominator = dem;
        simplify();
    }
};
int main(){
    Fraction f1(10,2);
    Fraction f2(15,4);
    Fraction const f3;
    cout<<f3.getNumerator()<<" "<<f3.getDenominator()<<endl;
    //f3.setNumerator(10);//Error because this function is not const and is changing the values when data members are called


}