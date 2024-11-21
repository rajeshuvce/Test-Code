

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

vector<vector<int> > Solution::solve(vector<vector<int> > &A) {
    vector<vector<int>> res = {};
    int n = A.size();
    int m = A[0].size();

    int totalDiag = n+m-1;

    int i =0, j=0;
    res.resize(totalDiag);
    
    for(int d =0;d<totalDiag;d++){
        //find starting index of diagnol
        if(d<m){
            i=0;j=d;
        } else {
            i=d%m+1;
            j=m-1;
        }

        vector<int> temp(n,0);
        //cout<<"size of temp array:"<<temp.size();
        //cout<<"i&j: "<<i<<"-"<<j<<endl;
        int idx = 0;
        while(i<n && j>=0){
            temp[idx++] =A[i][j];
            //cout<<"idx: "<<idx++<<endl;
            //cout<<"res array "<<A[i][j]; 
            i++; j--;
        }
        res[d]=temp;
    } 

    return res;
}


int main()
{
    Solution s;
    //vector<vector<int>> A = {{1,1,1,1},{2,2,2,2},{3,3,3,3},{4,4,4,4}};
    vector<vector<int>> A = {{1,2,3},{4,5,6},{7,8,9}};
    
    show(A[0]);
    show(A[1]);
    show(A[2]);
    vector<vector<int>>res =  s.solve(A);
    
    cout<<"chk 3"<<endl;
    
    show(res[0]);
    show(res[1]);
    show(res[2]);
    
    cout << "Final result:" << endl;
    
    return 0;
}

