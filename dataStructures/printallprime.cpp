

#include <iostream>
#include <vector>
#include <algorithm>
#include <stdio.h>
using namespace std;
class Solution
{
public:
    vector<int> solve(int A, int B);
};

vector<int> Solution::solve(int A, int B){
    
    bool isPrime[B];
    vector<int> res;

    for(int i =2; i<B;i++){
        isPrime[i] = true;
    }

    for(int i = 2; i<=B; i++){
        if(isPrime[i]){
            for(int j= i+i; j<=B;j+=i){
                isPrime[j]=false;
            }
        }
    }
    if(A<2)
        A=2;
    for(int i =A;i<=B;i++){
        if(isPrime[i]){
            res.push_back(i);
        }
    }
    return res;
}



int main()
{
    Solution s;
    int a = 10;
    int b = 99;
    vector<int> res = s.solve(a,b);
    for(int i=0;i<res.size();i++){
        cout<<"#"<<res[i]<<endl;    
    }
    
    return 0;
}