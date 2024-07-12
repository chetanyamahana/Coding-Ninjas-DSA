#include <iostream>
using namespace std;
class Polynomial{
private:
    int *degCoeff;
    int capacity;
public:
    //Default Constructor
    Polynomial()
    {
        degCoeff = new int[5];
        capacity = 5;
        for (int i = 0; i < capacity; i++)
        {
            degCoeff[i]=0;
        }
    }
    //Copy Constructor
    Polynomial(Polynomial const &p){
        this->degCoeff = new int[p.capacity];
        for (int i = 0; i < capacity; i++)
        {
            this->degCoeff[i] = p.degCoeff[i];
        }
        this->capacity = p.capacity;
    }
    //Copy assignment Operator
    void operator=(Polynomial const &p)
    {
        this->degCoeff = new int[p.capacity];
        for (int i = 0; i < p.capacity; i++)
        {
            this->degCoeff[i] = p.degCoeff[i];
        }
        this->capacity = p.capacity;
    }

    //print
    void print() const
    {
        for (int i = 0; i < capacity; i++)
        {
            if(degCoeff[i]!=0){
                cout << degCoeff[i]<<'x'<<i<<'+';
            }
        }
        cout << endl;
    }

    //setCoefficient
    void setCoefficient(int degree,int coefficient){
        if(degree<capacity){
            degCoeff[degree]=coefficient;
        }else{
            while(degree>capacity){
            int *newData = new int[2 * capacity];
            for (int i = 0; i < capacity; i++)
            {
                newData[i] = degCoeff[i];
            }
                delete[] degCoeff;
                degCoeff = newData;
                capacity *= 2;
            }
            degCoeff[degree] = coefficient;
        }

    
    //+
        Polynomial operator+(const Polynomial &p2) 
        {
            Polynomial result;
            int maxDegree = max(this->capacity, p2.capacity);
            result.capacity = maxDegree;
            delete[] result.degCoeff;
            result.degCoeff = new int[maxDegree];
            for (int i = 0; i < maxDegree; i++)
            {
                int coeff1 = (i < this->capacity) ? this->degCoeff[i] : 0;
                int coeff2 = (i < p2.capacity) ? p2.degCoeff[i] : 0;
                result.degCoeff[i] = coeff1 + coeff2;
            }
            return result;
        }

    //-
        Polynomial operator-(const Polynomial &p2) 
        {
            Polynomial result;
            int maxDegree = max(this->capacity, p2.capacity);
            result.capacity = maxDegree;
            delete[] result.degCoeff;
            result.degCoeff = new int[maxDegree];
            for (int i = 0; i < maxDegree; i++)
            {
                int coeff1 = (i < this->capacity) ? this->degCoeff[i] : 0;
                int coeff2 = (i < p2.capacity) ? p2.degCoeff[i] : 0;
                result.degCoeff[i] = coeff1 - coeff2;
            }
            return result;
        }

    //*
        Polynomial operator*(const Polynomial &p2) 
        {
            Polynomial result;
            result.capacity = this->capacity + p2.capacity - 1;
            delete[] result.degCoeff;
            result.degCoeff = new int[result.capacity];
            for (int i = 0; i < result.capacity; i++)
            {
                result.degCoeff[i] = 0;
            }
            for (int i = 0; i < this->capacity; i++)
            {
                for (int j = 0; j < p2.capacity; j++)
                {
                    result.degCoeff[i + j] += this->degCoeff[i] * p2.degCoeff[j];
                }
            }
            return result;
        }
    }
};