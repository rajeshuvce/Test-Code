

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
class Solution
{
public:
    int solve(vector<int> &A);
    };

void show(vector<long long> A)
{
    for (int i = 0; i < A.size(); i++)
       {
        cout << "[" << A[i] << "]";
    }
    cout << endl;
}

int Solution::solve(vector<int> &A) {
    int len = A.size();
    int max = *max_element(A.begin(),A.end());
    int min = *min_element(A.begin(), A.end());

    int minpos=-1;
    int maxpos=-1;

    int ans = len;

    for(int i =0;i<len;i++){
        if(A[i] == max){
            maxpos = i;
        }

        if(A[i]==min){
            minpos = i;
        }

        if(minpos !=-1 && maxpos != -1){
            ans = std::min(ans, abs(minpos - maxpos)+1);
        }
    }

    return ans;

}

int main()
{
    Solution s;
    vector<int> A = {2, 6, 1, 6, 9};

    int res = s.solve(A);

    cout << "Final result:"<<res << endl;
    //show(res);

    return 0;
}

