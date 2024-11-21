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
    int high = A.size()-1;
    int low =0;

    int count =0;
    std::sort(A.begin(),A.end()/*,greater<int>()*/);
    show(A);
    while(low<high){
        if(A[low] + A[high] > B){
            cout<<"1 No is "<<low <<" -- "<<high<<endl;
            high--;
        } else if(A[low] + A[high]< B){
            cout<<"2 No is "<<low <<" -- "<<high<<endl;
            low++;

        } else if(A[low] + A[high] == B) {
            cout<<"Yes is "<<low <<" -- "<<high<<endl;
            high--;
            low++;
            return 1;   
        }
    }
    
    return 0;
}

int solve_1(vector<int> &A, int B) {
    int len = A.size();
    int count =0;
    std::sort(A.begin(),A.end()/*,greater<int>()*/);
    //show(A);
    int index;
    for(int i =1; i<= len; i++){
     vector<int>::iterator it = lower_bound(A.begin(),A.end(),B-A[i]);
     index = distance(A.begin(),it);
     
    if(*it == B-A[i]){
        cout<<"lb for "<<B-A[i] <<" is "<<*it<< "Index "<<distance(A.begin(),it)<<endl;
        cout<<"Found at "<<i;
        return 1;
        }
    cout<<"---lb for "<<B-A[i] <<" is "<<*it<<endl;
   }
    return 0;
}


int main(){
    Solution s;
   // vector<int> A = {1,2,3,4};
    vector<int> A = {654526,366100,719634,636475,813827,179061,982841,401504,838539,616139};
    int B=591125;
    //int B=4;

    int count = s.solve(A,B);
    cout<<"response is:"<<count;
    return 0;
}