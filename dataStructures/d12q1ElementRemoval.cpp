

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
class Solution
{
public:
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

void swap(int &a, int &b){
    int temp = a;
    a = b;
    b = temp;
}

void transpose(vector<vector<int> > &A){
    int row = A.size();
    int col = A[0].size();

    if(row != col){
        cout<<"Not NxN matrix";
        return;
    }

    for(int i=0;i<row;i++){
        for(int j=0;j<i;j++){
            swap(A[i][j], A[j][i]);
        }
    }

}

int Solution::solve(vector<int> &A) {
    int res = 0;

    sort(A.begin(),A.end());
    reverse(A.begin(),A.end());

    for(int i =0;i<A.size();i++){
        for(int j=i;j<A.size();j++){
            res += A[j];
        }
    }
    //cout<<"result "<<res<<endl;
    //show(A);
    return res;
}
int main()
{
    Solution s;
    vector<int> A = {1,2,3};

    int res = s.solve(A);

    cout<<"result  "<<res<<endl;    
    return 0;
}

