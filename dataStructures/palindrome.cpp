

#include <iostream>
#include <vector>
#include <algorithm>
#include <stdio.h>
using namespace std;
class Solution
{
public:
    string longestPalindrome(string A);
    int solve(string A);
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

bool isPalintrome(string str){
    int len = str.length();
    for(int i=0,j=len-1;i<j;i++,j-- ){
        if(str[i]!=str[j]){
            return false;
        }
    }
    cout<<"Yes"<<endl;
    return true;
}

int isPalindrome(string A, int i){
    if(i>A.size()/2){
        return 1;
    }
    if(A[i] = A[A.size()-i-1] && isPalindrome(A,i+1)){
        return 1;
    }
    return 0;
}
int main()
{
    Solution s;
    string str = "emadamasass";
    cout<<"r="<<isPalindrome(str,0);

    return 0;
}


int Solution::solve(string A) {
    return isPalindrome(A,0);
}

