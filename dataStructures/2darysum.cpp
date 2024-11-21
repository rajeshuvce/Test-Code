

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
    return res;
}
