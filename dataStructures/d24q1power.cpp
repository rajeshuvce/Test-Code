#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
class Solution
{
public:
    int pow(int A, int B, int C);

    };

int powr(int A, int B){
    if(A==0) return 0;
    if(B ==0) return 1;
    int val = powr(A,B/2);
    if(B%2==0){
        //even number 
        return (val * val);
    } else {
        //even number 
        return (A* val *val);
    }
}

int Solution::pow(int A, int B, int C) {
    if(A==0) return 0;
    if(B ==0) return 1;

    long ans = pow(A,B/2, C);

    ans = (ans*ans)%C;

    if(B%2==1){
        ans = (ans *A)%C;
    }

    ans = (ans +C) %C;

    return (int)ans;
}



int main()
{
    Solution s;
    int A =2;
    int B=3;
    int C=3;

    cout <<s.pow( A, B, C);
 
    return 0;
}