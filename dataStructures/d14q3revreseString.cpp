

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
    string str = "the sky is blue";
    string str2 = s.solve(str);
    
    cout<<"result  --->"<<str2<<endl;    
    return 0;
}


string Solution::solve(string A) {
    int n = A.size();
    string ans = "";

    for(int i =n-1; i>=0;i--){
        if(A[i]!=' '){
            string current = "";

            while(i>=0 && A[i]!=' '){
                current += A[i];
                i--;
            }
            reverse(current.begin(),current.end());

            if(!ans.empty()){
                ans +=' ';
            }
            ans+=current;
        }
    }
    return ans;
}

#if 0
string Solution::solve(string A) {
       
    int count = 0;
    int N = A.length();
    string res ="" ;
    int i = N-1;
    //cout<<"check 1"<<endl;
    for(;i >=0; i--){
        //cout<< count<<"-"<<A[i];
        if(A[i] == ' '){
            // cout<<"append -1 :"<<res<<endl; 
            res.append(A.substr(i,count+1));
            // cout<<"append:"<<res<<endl;
            count =0 ;
        }
        count++;
    }
    //cout<< endl<<count<<"####"<<i;
    res.append(A.substr(0,count));

    return res;
}
#endif 