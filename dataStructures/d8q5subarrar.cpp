

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
class Solution
{
public:
    //int solve(vector<int> &A);
    vector<vector<int>>solve(vector<int> &A);
    };

void show(vector<vector<int>> A)
{
    cout<<"Inside Show function\n";
    int m = A.size();

    
    for (int i = 0; i < m; i++)
       {
            int n = A[i].size();            
            for(int j = 0;j<n;j++){
                cout << "[" << A[i][j] << "]";
            }   
            //cout << endl;
        }
    //cout << endl;
}

vector<vector<int> > Solution::solve(vector<int> &A) {
    vector<vector<int>> res;
    int len = A.size();
    for(int i =0;i<len;i++){
        for(int j=i;j<len;j++){
            vector<int> temp={};
            for(int k=i;k<j;k++){
//                cout<<A[k]<<" ";
                temp.push_back(A[k]);
            }            
 //           cout<<endl;
            res.push_back(temp);
        }
      //  cout<<endl;
    }
    return res;

}



int main()
{
    Solution s;
    vector<int> A = {36,63,63,26,87,28,77,93,7};

    vector<vector<int>> res = s.solve(A);

    //cout << "Final result:"<<res << endl;
    show(res);

    return 0;
}

