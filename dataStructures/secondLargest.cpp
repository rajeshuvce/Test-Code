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
    if(len<2)
        return -1;
    
    int count =0;
    int i=0;
    int j = len-1;
    int max =*max_element(A.begin(),A.end());
    int sMax = -1;
    for(;i<len;i++){
        if(A[i]<max && A[i] > sMax){
            sMax = A[i];
        }
    }
    return sMax;
}

int main(){
    Solution s;
    vector<int> A = {2,4,1,3,2};
    int count = s.solve(A);   

    cout<<"Final result:"<<count<<endl;
    show(A);
    
    return 0;
}
