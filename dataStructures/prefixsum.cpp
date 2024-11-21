#include<iostream>
#include<vector>
#include <algorithm> 


using namespace std;
class Solution{
    public:
    vector<int> solve(vector<int> &A) ;    
};

void show(vector<int> A){
    for(int i =0;i<A.size();i++){
        cout<<"["<<A[i]<<"]";
    }
    cout<<endl;
}

vector<int> Solution::solve(vector<int> &A) {
    int len = A.size();
    vector<int> res;
    res.resize(len);

    res[0] = A[0];
    for(int i=1;i<len;i++){
        res[i] = res[i-1] + A[i];
    }
    //show(res);
    return res;
}

int main(){
    Solution s;
    vector<int> A = {3,5,3,2,9,3,10,10,10,3};
    vector<int> count = s.solve(A);   

    //cout<<"Final result:"<<count<<endl;
    show(count);
    
    return 0;
}
