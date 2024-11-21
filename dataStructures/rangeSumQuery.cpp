

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
class Solution
{
public:
    vector<int> solve(vector<int> &A);
    vector<long long> rangeSum(vector<int> &A, vector<vector<int>> &B);
};

void show(vector<long long> A)
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

    vector<int> A = {7,3,1,5,5,5,1,2,4,5};
    vector<vector<int>> B = {{6,9}, {2,9}, {2,4},{0,9}};

    vector<long long> res = s.rangeSum(A, B);

    cout << "Final result:" << endl;
    show(res);

    return 0;
}

vector<long long> PS(vector<int> &A)
{
    int len = A.size();
    vector<long long > res;
    res.resize(len);

    res[0] = A[0];
    for (int i = 1; i < len; i++)
    {
        res[i] = res[i - 1] + A[i];
    }

    return res;
}
vector<long long> Solution::rangeSum(vector<int> &A, vector<vector<int>> &B)
{
    vector<long long> res;
    int resLen = B.size();

    res.resize(resLen);

    vector<long long> ps = PS(A);



    for (int i = 0; i < resLen; i++)
    {
        int startIndex = B[i][0];
        int endIndex = B[i][1];
        if (startIndex == 0)
        {
            res[i] = ps[endIndex];
        }
        else
        {
            res[i] = ps[endIndex] - ps[startIndex-1];
        }
    }
    return res;
}
