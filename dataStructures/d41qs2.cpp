
/**
 * Problem Description
Given an array with N objects colored red, white, or blue, sort them so that objects of the same color are adjacent, with the colors in the order red, white, and blue.

We will represent the colors as,

red -> 0
white -> 1
blue -> 2

Note: Using the library sort function is not allowed.
Problem Constraints
1 <= N <= 1000000
0 <= A[i] <= 2


Input Format
First and only argument of input contains an integer array A.


Output Format
Return an integer array in asked order


Example Input
Input 1 :
    A = [0, 1, 2, 0, 1, 2]
    Example Output
Input 2:

    A = [0]
Output 1:
    [0, 0, 1, 1, 2, 2]
Output 2:

    [0]
 */
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
class Solution
{
public:
   vector<int> sortColors(vector<int> &A) ;
};

void show(vector<long long> A)
{
    for (int i = 0; i < A.size(); i++)
       {
        cout << "[" << A[i] << "]";
    }
    cout << endl;
}

void partition(int A[],int first,int last){
   int pivotvalue = A[first];

   int leftmark = first+1;
   int rightmark = last;
   
   while (leftmark <= rightmark){
        if(A[leftmark] <= pivotvalue)
           leftmark++;

       else if (A[rightmark] > pivotvalue)
           rightmark--;

       else{
        temp = A[leftmark];
        A[leftmark] = A[rightmark];
        A[rightmark] = temp;
        
        leftmark++;
        rightmark--;
        }           
   }
}

       
vector<int> Solution::sortColors(vector<int> &A) {
}

bool compare(int a, int b) {
  return to_string(a) + to_string(b) > to_string(b) + to_string(a);
}



int main()
{
    Solution s;
    vector<int> A = {3,30,34,5,9};

    //string res = s.largestNumber(A);

    for(auto a in A){
        cout << "Final result:"<<a << endl;    
    }
    
    //cout << "Final result:"<<A << endl;
    //show(res);

    return 0;
}

