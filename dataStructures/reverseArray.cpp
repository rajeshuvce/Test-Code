#include<iostream>
#include<vector>
#include <algorithm> 


using namespace std;
class Solution{
    public:
    int solve(vector<int> &A, int B, int C) ;    
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

int Solution::solve(vector<int> &A, int B, int C) {
    int len = A.size();
    cout<<"B "<<B<< " len :"<<len<<endl;
    reverseArray(A, B, C);
    return 0;
}

int main(){
    Solution s;
    vector<int> A = {8,7,7,6,6,3,1,5,7};
    int B = 0;
    int C = 3;
    int count = s.solve(A,B,C);   

    cout<<"Final result:";
    show(A);
    
    return 0;
}
