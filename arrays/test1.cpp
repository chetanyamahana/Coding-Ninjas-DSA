#include <iostream>
using namespace std;
#include <climits>

int main()
{

    // Write your code here
    int n;
    cin >> n;
    int num;
    int input[15952];
    for (int i = 0; i < n; i++)
    {
        cin >> num;
        input[i] = num;
    }
    int max = input[0];
    for (int i = 0; i < n; i++)
    {
        if (input[i] >= max)
        {
            max = input[i];
        }
    }
    cout<<max;
    /*for(int j=0;j<n;j++){
        int min_diff = max - input[j];

        if(min_diff!=0){
            continue;
        }
        else{
            int difference[12456];
            for(int i=0;i<n;i++){
              for (int k = 0; k < n; k++) {
                difference[i] = max - input[i];
              }
            }*/
    int second_max = input[0];
    for (int i = 1; i < n; i++)
    {
        if (second_max < input[i] && second_max != max)
        {
            second_max = input[i];
        }
    }
    cout << second_max;
}
