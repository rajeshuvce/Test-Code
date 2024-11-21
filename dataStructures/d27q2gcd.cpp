#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
class Solution
{
public:
    int gcd(int A, int B);

    };

int Solution::gcd(int A, int B) {
    if(B==0)
        return A;
    
    return gcd(B,A%B);
    
    }

int main()
{
    Solution s;
    int A =4;
    int B=6;
    

    cout <<s.gcd( A, B);
 
    return 0;
}