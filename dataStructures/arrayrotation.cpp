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

int swap(int &a, int &b){
    int temp = a;
    a=b;
    b=temp;
    return 0; 
}
int reverseArray(vector<int>&A, int startIndex, int arryLen){
    int i=startIndex;
    int j=arryLen-1;
    if(i>= j) 
        return 0;
    
    for( ;i<=j; i++,j-- ){
        swap(A[i],A[j]);
    }
    return 0;
}

int Solution::solve(vector<int> &A, int B) {
    int len = A.size();
    cout<<"B "<<B<< " len :"<<len<<endl;
    B = B%len;
    if(B!=0){
        reverseArray(A, 0, len);
        reverseArray(A, 0, B);
        reverseArray(A, B, len);
    }
    return 0;
}

int main(){
    Solution s;
    vector<int> A = {1,1,4,9,4,7,1};
    int B = 9;
    int count = s.solve(A,B);   

    cout<<"Final result:";
    show(A);
    
    return 0;
}


