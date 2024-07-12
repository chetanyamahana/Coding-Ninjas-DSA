#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

int main()
{
    int T;
    cin >> T;

    while (T--)
    {
        int N;
        cin >> N;

        vector<int> A(N);
        for (int i = 0; i < N; ++i)
        {
            cin >> A[i];
        }

        int maxScore = 0;
        for (int i = 1; i < N; i += 2)
        {
            int score = abs(A[i] - A[i - 1]) + abs(A[i + 1] - A[i]);
            maxScore += score;
        }

        cout << maxScore << endl;
    }

    return 0;
}
