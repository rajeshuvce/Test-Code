

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
class Solution
{
public:
    int solve(vector<vector<int> > &A , int B);

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

int Solution::solve(vector<vector<int> > &A , int B) {
    
        int row = A.size();
    int col = A[0].size();
    
    int i = 0;
    int j = col -1;
    
    while(i< row-1 && j >=0){
        if(A[i][j] < B){
            cout<<" cs 1: "<< A[i][j]<<endl;
            i++;
        }
        if(A[i][j] >B){
            cout<<" cs 2: "<< A[i][j]<<endl;
            j--;
        }
        if(A[i][j]==B){
            cout<<" cs 3: "<< A[i][j]<<endl;
            return(((i+1)*1009)+(j+1));
        }
    }
    return -1;
  
}


int main()
{
    Solution s;
    vector<vector<int>> A = {{1,2,3},{4,5,6},{7,8,9}};
    int B = 10;
    int res = s.solve(A ,B);
    cout<<"res"<< res<<endl;
    cout << "Final result:" << endl;
   // show(res);

    return 0;
}

