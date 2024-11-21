#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> A = {1, 2, 3, 4, 5};
    for(int i=0;i<A.size();i++)
        cout<<"--"<<A[i];
}
