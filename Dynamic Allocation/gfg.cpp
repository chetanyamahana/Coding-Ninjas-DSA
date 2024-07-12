//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

class Array
{
public:
    template <class T>
    static void input(vector<T> &A, int n)
    {
        for (int i = 0; i < n; i++)
        {
            scanf("%d ", &A[i]);
        }
    }

    template <class T>
    static void print(vector<T> &A)
    {
        for (int i = 0; i < A.size(); i++)
        {
            cout << A[i] << " ";
        }
        cout << endl;
    }
};

// } Driver Code Ends

class Solution
{
public:
    int longestBeautifulSubsequence(int N, vector<int> &arr)
    {
        // code here
        vector<int> pdt;
        /* bool one = false;
         vector<int> index;
         for(int i=0;i<arr.size();i++){
             if(arr[i]==1){
                 one = true;
                 index.push_back(i);
             }
         }
         if(!one){
            return N;
         }else{
             int first=0;
             for(int i=0;i<index.size();i++){
                 int temp_i=index[i];
                 int temp_p=1;
                 for(int j=first;j<=temp_i-1;j++){
                     temp_p*=arr[j];
                 }
                 pdt.push_back(temp_p/temp_i-first);
                 first=temp_i;
             }*/
        int size = 1;
        vector<int> len;
        while (size <= N)
        {
            for (int i = 0; i < N - size + 1; i++)
            {
                int temp_p = 1;
                for (int j = i; j < size; j++)
                {
                    temp_p *= arr[j];
                }
                pdt.push_back(temp_p / size);
                len.push_back(size);
            }
            size++;
        }
        int index = 0;
        vector<int> temp_s;
        int max = *max_element(pdt.begin(), pdt.end());
        for (int i = 0; i < pdt.size(); i++)
        {
            if (pdt[i] == max)
            {
                index = i;
                temp_s.push_back(len[index]);
            }
        }
        return *min_element(temp_s.begin(), temp_s.end());
    }
};

//{ Driver Code Starts.

int main()
{
    int t;
    scanf("%d ", &t);
    while (t--)
    {

        int N;
        scanf("%d", &N);

        vector<int> arr(N);
        Array::input(arr, N);

        Solution obj;
        int res = obj.longestBeautifulSubsequence(N, arr);

        cout << res << endl;
    }
}

// } Driver Code Ends