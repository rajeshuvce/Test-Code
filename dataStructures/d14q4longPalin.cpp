

#include <iostream>
#include <vector>
#include <algorithm>
#include <stdio.h>
using namespace std;
class Solution
{
public:
    string longestPalindrome(string A);
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

int main()
{
    Solution s;
    string str = "emadamasass";
    cout<<"r="<<isPalintrome(str);


    string str2 = s.longestPalindrome(str);
    
    cout<<"result  --->"<<str2<<endl;    
    return 0;
}



string Solution::longestPalindrome(string A) {

    int N = A.length();
    int maxLen = 0;
    string res;
    for(int c = 0; c<N;c++){
        //odd length strings
        int left  = c, right = c;
        while(left>=0 && right <N){
            cout<<"Loop 1------>"<<left<<":"<<right<<endl;
            if(A[left] != A[right]){
                break;
            }
            cout<<"Loop 1.1------>"<<left<<":"<<right<<endl;
            left--;
            right++;
        }
        if(right-left-1 > 0 && (maxLen < right-left-1)){
            maxLen = right-left-1;
            cout<<"Loop 1.3------>"<<left<<":"<<right<<"--"<<maxLen<<endl;
            res =  A.substr(left+1,maxLen);    
        } 
        
        
       
       cout<<"Loop 1.4------>"<<left<<":"<<right<<endl;
        ////even length strings
        left = c; right = c+1;
        while(left>=0 && right <N){
            cout<<"Loop 2------>"<<left<<":"<<right<<endl;
            if(A[left] != A[right]){
                break;
            }
            left--;
            right++;
        }
        if(right-left-1 > 0 && (maxLen < right-left-1)){
            maxLen = right-left-1;
            res  = A.substr(left+1,maxLen);    
        }
    cout<<"C is:"<<c<< "maxLen:"<<maxLen <<endl;
    }

    return res;
}
