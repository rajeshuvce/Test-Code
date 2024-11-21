

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
class Solution
{
public:
   string largestNumber(vector<int> &A);
};

void show(vector<long long> A)
{
    for (int i = 0; i < A.size(); i++)
       {
        cout << "[" << A[i] << "]";
    }
    cout << endl;
}


bool compare(int a, int b) {
  return to_string(a) + to_string(b) > to_string(b) + to_string(a);
}

string Solution::largestNumber(vector<int>&A) {
  sort(A.begin(), A.end(), compare);
  string ans = "";
  for (auto & x: A)
    ans += to_string(x);
  if (ans[0] == '0') return "0";
  return ans;
}


int main()
{
    Solution s;
    vector<int> A = {3,30,34,5,9};

    string res = s.largestNumber(A);

    cout << "Final result:"<<res << endl;
    //show(res);

    return 0;
}

