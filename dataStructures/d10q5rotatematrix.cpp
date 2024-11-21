

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
class Solution
{
public:
    void solve(vector<vector<int> > &A);

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


void Solution::solve(vector<vector<int> > &A) {
    int row = A.size();
    //int col = A[0].size();
    cout<<"before Solve"<<endl;
    show(A[0]);
    transpose(A);
    cout<<"after Solve"<<endl;
    show(A[0]);

    // for(int i=0;i<row/2;i++){
    //     for(int j=i;j<row-i;j++){
    //         swap(A[i][j],A[j][i]);
    //     }       

    //     cout<<"After swap\n";
    //     show(A[i]); 
    // } 
}


int main()
{
    Solution s;
    vector<vector<int>> A = {{1,1,1,1},{2,2,2,2},{3,3,3,3},{4,4,4,4}};
    
    int a =10;
    int b =20;
    swap(a,b);

    cout<<" after swap a:"<<a<< " b:"<<b<<endl;
    // show(A[0]);
    // show(A[1]);
    // show(A[2]);
    // show(A[3]);
    s.solve(A);
cout<<"chk 3"<<endl;
    
    show(A[0]);
    show(A[1]);
    show(A[2]);
    show(A[3]);

    cout << "Final result:" << endl;
    
    return 0;
}

