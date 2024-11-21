

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
class Solution
{
public:
    string addBinary(string A, string B);

};


void show(vector<int> A)
{
    for (int i = 0; i < A.size(); i++)
       {
        cout << "[" << A[i] << "]";
    }
    cout << endl;
}

void swap(int &a, int &b){
    int temp = a;
    a = b;
    b = temp;
}

void transpose(vector<vector<int> > &A){
    int row = A.size();
    int col = A[0].size();

    if(row != col){
        cout<<"Not NxN matrix";
        return;
    }

    for(int i=0;i<row;i++){
        for(int j=0;j<i;j++){
            swap(A[i][j], A[j][i]);
        }
    }

}

int main()
{
    Solution s;
    string A="1101";
    string B="100";

    string C = s.addBinary(A,B);

    cout<<"string "<<C<<endl;    
    return 0;
}

string Solution::addBinary(string A, string B){
  if (A.length() > B.length())
        return addBinary(B, A);

    int diff = B.length() - A.length();
    string padding;
    for (int i = 0; i < diff; i++)
        padding.push_back('0');

    A = padding + A;
    string res;
    char carry = '0';

    for (int i = A.length() - 1; i >= 0; i--) {
        if (A[i] == '1' && B[i] == '1') {
            if (carry == '1')
                res.push_back('1'), carry = '1';
            else
                res.push_back('0'), carry = '1';
        } else if (A[i] == '0' && B[i] == '0') {
            if (carry == '1')
                res.push_back('1'), carry = '0';
            else
                res.push_back('0'), carry = '0';
        } else if (A[i] != B[i]) {
            if (carry == '1')
                res.push_back('0'), carry = '1';
            else
                res.push_back('1'), carry = '0';
        }
    }

    if (carry == '1')
        res.push_back(carry);

    reverse(res.begin(), res.end());
    int index = 0;
    while (index + 1 < res.length() && res[index] == '0')
        index++;

    return res.substr(index);
}
string addBinary_old(string A, string B) {

    cout<< A<<endl;
    cout<<B<<endl;
    string res = "";
    int alen = A.length();
    int blen = B.length();
    if(A.length()<B.length()){
        return addBinary_old(B,A);
    }

    int diff = A.length()-B.length();

    string padding;
    for(int i =0;i<diff;i++){
        padding.push_back('0');
    }
cout<<"padding "<<padding<<endl;
    B=padding+B;

    char carry = '0';
    for(int i = 0; i<A.length()-1;i++){
        if(A[i]=='1' && B[i]=='1'){
            if(carry =='1'){
                res.push_back('1'); carry ='1';
            } else {
                res.push_back('0');carry='1';
            }
        }   else if (A[i]=='0' && B[i]=='0')
        {
            if(carry=='1'){
                res.push_back('1');carry='0';
            } else{
                res.push_back('0');carry='0';
            }
        } else if (A[i] != B[i])
        {
            if(carry=='1'){
                res.push_back('0');carry='1';
            } else{
                res.push_back('1');carry='0';
            }
        }
              
    }

    if(carry == '1'){
        res.push_back(carry);
    }

    reverse(res.begin(), res.end());
    int index = 0;

    while(index+1<res.length()&& res[index]=='0'){
        index++;
    }
    return res.substr(index);

    cout<< alen<<"---"<<A<<endl;
    cout<<blen <<"---"<<B<<endl;
    return res;
}
