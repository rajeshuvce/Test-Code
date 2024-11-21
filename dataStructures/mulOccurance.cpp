#include<iostream>
#include<vector>
#include <algorithm> 


using namespace std;
class Solution{
    public:
    int solve(vector<int> &A, int B) ;    
};

void show(vector<int> A){
    for(int i =0;i<A.size();i++){
        cout<<"["<<A[i]<<"]";
    }
    cout<<endl;
}

int Solution::solve(vector<int> &A, int B) {
    int len = A.size();
    int count =0;
    int i=0;
    for(;i<len;i++){
        if(A[i] == B){
            count++;
        }
    }
    return count;
}

int main(){
    Solution s;
    vector<int> A = {1,2,2};
    int B = 3;
    int count = s.solve(A,B);   

    cout<<"Final result:"<<count<<endl;
    show(A);
    
    return 0;
}
