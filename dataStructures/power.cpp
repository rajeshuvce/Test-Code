

#include <iostream>
#include <vector>
#include <algorithm>
#include <stdio.h>
using namespace std;
class Solution
{
public:
    int pow(int A, int B, int C);
};

long pr(int a, int b){
    if(b==0)return 1;

    int p = pr(a,b/2);

    if(b%2 ==0){
        return p*p;
    } else {
        return p*p*a;
    }
}

int Solution::pow(int A, int B, int C){
    return pr(A,B)%C;   
    
}
        
int main()
{
    Solution s;
    int a = 1;
    int b = -1;
    int c = 20;
    int res = s.pow(a,b,c);
    
    cout<<"#"<<res<<endl;    
    
    return 0;
}