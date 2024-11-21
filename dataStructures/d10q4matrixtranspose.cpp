

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
class Solution
{
public:
    vector<vector<int> > solve (vector<vector<int> > &A);

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
    b = a;
}
/*void Solution::solve(vector<vector<int> > &A) {
    int row = A.size();
    //int col = A[0].size();
    int temp = 0;
    for(int i=0;i<row/2;i++){
        for(int j=i;j<row-i;j++){

            swap(A[i][j],A[j][i]);
        }       

        cout<<"After swap\n";
        show(A[i]); 
    } 
}
*/



vector<vector<int> > Solution::solve(vector<vector<int> > &A) {
    vector<vector<int>> res = {};
    
    int n = A.size();
    int m = A[0].size();

    res.resize(m);
    
    for(int i=0;i<m;i++){
        //cout<<"chk 2-"<<i<<endl;
        vector<int> temp ;
        temp.resize(n);
        for(int j=0;j<n;j++){
           temp[j]= A[j][i];
        }
        res[i]=temp;
    }
    return res;
}


int main()
{
    Solution s;
    //vector<vector<int>> A = {{1,1,1,1},{2,2,2,2},{3,3,3,3},{4,4,4,4}};
    vector<vector<int>> A = {{21,62,16,44,55,100,16,86,29},
    {62,72,85,35,14,1,89,15,73},
    {42,44,30,56,25,52,61,23,54},
    {5,35,12,35,55,74,50,50,80},
    {2,65,65,82,26,36,66,60,1},
    {18,1,16,91,42,11,72,97,35},
    {23,57,9,28,13,44,40,47,98}};
    
    show(A[0]);
    show(A[1]);
    show(A[2]);
    show(A[3]);
    vector<vector<int>>res =  s.solve(A);
cout<<"chk 3"<<endl;
    
    show(res[0]);
    show(res[1]);
    show(res[2]);
    show(res[3]);

    cout << "Final result:" << endl;
    
    return 0;
}

