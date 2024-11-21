

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

    int N = A.length();
    int len = 1;
    //Case 1 where mid falls on the character
    for(int mid = 0; mid <n; mid ++){
        int st = mid, e = mid;

        while(A[st] == A[e]){
            st++;
            e--;
        }
        len = e-st+1;
    }

    //Case 2 where mid falls in between the character
    for(int mid = 0; mid <n; mid ++){
        int st = mid, e = mid+1;

        while(A[st] == A[e]){
            st--;
            e++;
        }
        len = e-st+1;
    }
   
}
#endif 

string expandAroundCenter(string s, int c1, int c2) {
    int l = c1, r = c2;
    int n = s.length();
    while (l >= 0 && r <= n - 1 && s[l] == s[r]) {
        l--;
        r++;
    }
    return s.substr(l + 1, r - l - 1);
}

string Solution::longestPalindrome(string s) {
    int n = s.length();
    if (n == 0)
        return "";
    string longest = s.substr(0, 1); // a single char itself is a palindrome
    for (int i = 0; i < n - 1; i++) {
        string p1 = expandAroundCenter(s, i, i);
        if (p1.length() > longest.length())
            longest = p1;
        string p2 = expandAroundCenter(s, i, i + 1);
        if (p2.length() > longest.length())
            longest = p2;
    }
    return longest;
}
