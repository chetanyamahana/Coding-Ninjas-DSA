#include <iostream>
using namespace std;

int main()
{
    int N;
    cin >> N;
    int a, b, c;
    a = 1;
    b = 1;
    c=1;
    for (int i = 1; i <= N-2; i++)
    {
        
            c = a + b;
            a=b;
            b=c;
        
        if (i == N)
        {
            
            cout << c << endl;
            break;
        }
        
    }
}