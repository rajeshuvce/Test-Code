#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int nary=0, nquery=0;
    cout<<"ENter number of arrays and number of queries";
    cin>>nary>>nquery;

    vector<vector<int>> mVec={};
    int aryLen = 0;
  //  cout<<"chk 0 \n"<<nary;
    for(int i =0;i< nary;i++){
        aryLen = 0;
        cin>>aryLen;
  //      cout<<"chk 1"<<i;
        vector<int> lVec ={};
        int temp=0;
        for(int j=0;j < aryLen;j++){
  //          cout<<"chk 2"<<j;
            cin>>temp;
            lVec.push_back(temp);
        }
        mVec.push_back(lVec);

 //       cout<<"chk 3"<< i ;
    }

//    cout<<"chk 4";

    for(auto i =0;i< nary;i++){
  //      cout<<"chk 5";
        for(auto j=0;j < aryLen;j++){
 //           cout<<"chk 6";
            cout<<mVec[i][j];
        }
    }
   
    cout<<">>N ary"<<nary<<" nquery "<<nquery;
    return 0;
}