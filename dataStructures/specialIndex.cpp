

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
class Solution
{
public:
    vector<int> solve(vector<int> &A);
    int rangeSum(vector<int> &A);
};

void show(vector<int> A)
{
    for (int i = 0; i < A.size(); i++)
    {
        cout << "[" << A[i] << "]";
    }
    cout << endl;
}

vector<int> Solution::solve(vector<int> &A)
{
    int len = A.size();
    vector<int> res;
    res.resize(len);

    res[0] = A[0];
    for (int i = 1; i < len; i++)
    {
        res[i] = res[i - 1] + A[i];
    }
    // show(res);
    return res;
}

int main()
{
    Solution s;

    vector<int> A = {4,3,2,7,6,-2};

    int res = s.rangeSum(A);

    cout << "Final result:" << res << endl;
    // show(res);

    return 0;
}

vector<long long> PS(vector<int> &A)
{
    int len = A.size();
    vector<long long> res;
    res.resize(len);

    res[0] = A[0];
    for (int i = 1; i < len; i++)
    {
        res[i] = res[i - 1] + A[i];
    }

    return res;
}
int Solution::rangeSum(vector<int> &A)
{
    int res = 0;

    vector<int> pSum;
    pSum.resize(A.size());

    int oddSum = 0;
    int evenSum = 0;
    int rest;
    for (int i = 0; i < A.size(); i++)
    {
        if (i % 2 == 0)
        { // even numbers
            evenSum += A[i];
            pSum[i] = evenSum;
        }
        else
        {
            oddSum += A[i];
            pSum[i] = oddSum;
        }
    }
    show(pSum);

    for (int i = 0; i < A.size(); i++)
    {
        /*if (i % 2 == 0)
        {

        }*/
    }
#if 0
    for (int i = 0; i < A.size(); i++)
    {
        if (i % 2 == 0)
        {
            if ((pSum[i] * 2 - A[i] + evenSum) == (pSum[i - 1] || 0) * 2 + evenSum)
            {
                res += 1;
            }
            else if ((pSum[i] * 2 - A[i] + oddSum) == (pSum[i - 1] || 0) * 2 + oddSum)
            {
                res += 1;
            }
        }
    }
#endif
    return res;
}
