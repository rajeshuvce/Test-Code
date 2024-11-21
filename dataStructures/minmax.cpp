#include<iostream>
#include<vector>
#include <algorithm> 


using namespace std;
class Solution{
    public:
    int solve(vector<int> &A) ;    
};

void show(vector<int> A){
    for(int i =0;i<A.size();i++){
        cout<<"["<<A[i]<<"]";
    }
    cout<<endl;
}
int Solution::solve(vector<int> &A) {
    int max = A[0];
    int min = A[0];
    for(int i = 0;i< A.size() ; i++){
        if(A[i]>max){
            max = A[i];
        }
        if(A[i]<min){
            min = A[i];
            }
    }
    return min+max;
}



int main(){
    Solution s;
    vector<int> A = {-2, 1, -4, 5, 3};
   // vector<int> A = {1, 3, 4, 1};
    
    int count = s.solve(A);
    cout<<"response is:"<<count;
    return 0;
}