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

int swap(int &a, int &b){
    int temp = a;
    a=b;
    b=temp;
    return 0; 
}
int reverseArray(vector<int>&A, int startIndex, int endIndex){
    int i=startIndex;
    int j=endIndex;
    if(i>= j) 
        return 0;
    
    for( ;i<=j; i++,j-- ){
        swap(A[i],A[j]);
    }
    return 0;
}

int Solution::solve(vector<int> &A) {
    int len = A.size();
    int count =0;
    int i=0;
    int j = len-1;
    int max =*max_element(A.begin(),A.end());

    for(;i<=j;i++,j--){
        if(i==j){
            count +=max - A.at(i);    
        } else {
            cout<<"Count:"<<count<<" i:"<<i<<" j:"<<j<<endl;
            count +=max - A.at(i);
            count +=max - A.at(j);
        }
    }
    return count;
}

int main(){
    Solution s;
    vector<int> A = {2,4,1,3,2};
    int count = s.solve(A);   

    cout<<"Final result:"<<count<<endl;
    show(A);
    
    return 0;
}
