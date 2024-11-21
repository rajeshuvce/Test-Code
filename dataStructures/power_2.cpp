

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

// Do not write code to include libraries, main() function or accept any input from the console.
// Initialization code is already written and hidden from you. Do not write code for it again.
long pr(int a, int b,int c){
    if(b==0)return 1;
    
    long p = (pr(a,b/2,c)+c)%c;
    
    if(b%2 ==0){
        return (p*p)%c;
    } else {
        return ((p*p)%c*(a%c)+c)%c;
    }
}
int Solution::pow(int A, int B, int C) {
    // Just write your code below to complete the function. Required input is available to you as the function arguments.
    // Do not print the result or any output. Just return the result via this function.
    if(C==1)return 0;
    return pr(A,B,C);    
}

        
int main()
{
    Solution s;
    int a = -1;
    int b = 1;
    int c = 20;
    int res = s.pow(a,b,c);
    
    cout<<"#"<<res<<endl;    
    
    return 0;
}