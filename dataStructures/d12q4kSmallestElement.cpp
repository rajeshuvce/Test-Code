

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
class Solution
{
public:
    int kthsmallest(const vector<int> &A, int B);
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
int Solution::kthsmallest(const vector<int> &A, int B) {
    int res = 0;
    vector<int> srtv[B]={};
    
    for(int i =0 ;i<A.size();i++){
        //srtv[i] = min_element(A.begin(),A.end());
    }

    return res;
}
int main()
{
    Solution s;
    vector<int> A = {1,2,3};    
    int B =3;
    int res = s.kthsmallest(A, B);

    cout<<"result  "<<res<<endl;    
    return 0;
}

