

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
class Solution
{
public:
    vector<int> solve(vector<vector<int> > &A);

    int solve(vector<int> &A);
    };

void show(vector<int> A)
{
    for (int i = 0; i < A.size(); i++)
       {
        cout << "[" << A[i] << "]";
    }
    cout << endl;
}

vector<int> Solution::solve(vector<vector<int> > &A) {
    int row = A.size();
    int col = A[0].size();

    vector<int> colSum ={};
    colSum.resize(col);

    int sum;
    for(int i=0;i<col;i++){
        sum = 0;
        for(int j=0;j<row;j++){
            sum = sum + A[j][i];
        }
        colSum[i] = sum;
    } 
     return colSum;
}


int main()
{
    Solution s;
    vector<vector<int>> A = {{1,2,3,4},{5,6,7,8},{9,2,3,4}};
    
    vector<int> res = s.solve(A);
    cout<<"chk 3"<<endl;
    cout << "Final result:" << endl;
    show(res);

    return 0;
}

