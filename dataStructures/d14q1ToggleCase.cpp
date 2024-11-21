

#include <iostream>
#include <vector>
#include <algorithm>
#include <stdio.h>
using namespace std;
class Solution
{
public:
    string solve(string A);
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

int main()
{
    Solution s;
    string str = "azsdfasdfaEWRWREWRERAZ";
    string str2 = s.solve(str);
    
    cout<<"result  --->"<<str2<<endl;    
    return 0;
}


string Solution::solve(string A) {
    for(int i =0;i<A.length();i++){
        if((A[i]<='Z')&&(A[i]>='A')){
            A[i] = 'a'+(A[i]-'A');
        } else if((A[i]<='z')&&(A[i]>='a')){
            A[i] = 'A'+(A[i]-'a');
        }
    }
    return A;
}
