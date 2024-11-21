#include <iostream>
#include <vector>
#include <algorithm>

/*Given an array of integers A and an integer B, 
find and return the number of pairs in A whose sum is divisible by B.

Since the answer may be large, return the answer modulo (109 + 7).
Note: Ensure to handle integer overflow when performing the calculations. */

using namespace std;
class Solution
{
public:
    int solve(vector<int> &A, int B);

    };

int Solution::solve(vector<int> &A, int B) {
    int n = A.size();
    vector<int> map(n) ;
    int count =0;
    
    for(int i=0;i<n;i++){
        cout<<"value is :"<<A[i]<<endl;
        cout<<"Count :"<<count<<endl;
        int pair = 0;
        int val = A[i]%B;
        if( val==0){
            pair = 0;
        } else {
            pair = B-val;
        }
        count+=map[pair];
        map[val]++;
    }
    return count;
}

int main()
{
    Solution s;
    vector<int> A ={1,2,3,4};
    int B=6;
    

    cout <<s.solve( A, B);
 
    return 0;
}