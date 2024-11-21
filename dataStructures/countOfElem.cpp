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
    int len = A.size();
    int count =0;
    int i=0;
    int max =*max_element(A.begin(),A.end());
    for(;i<len;i++){
        if(A[i] < max){
            count++;
        }    
    }
    return count;
}

int main(){
    Solution s;
    vector<int> A = {3,5,3,2,9,3,10,10,10,3};
    int count = s.solve(A);   

    cout<<"Final result:"<<count<<endl;
    show(A);
    
    return 0;
}
