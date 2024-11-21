#include<iostream>
#include<list>
#include<vector>
#include<string>
#include<initializer_list>

using namespace std;

class boVector{
    
    public:
        boVector(const initializer_list<int>&v){
            for(initializer_list<int>::iterator itr=v.begin(); itr!=v.end();++itr){
                mVec.push_back(*itr);
            }
        }
    private:        
        std::vector<int> mVec;
};


int main(){
    string arr[4] = {"100","222","333","444"};

    vector<int> v = {11,22,33,44,55};

    for(auto i : arr){
        cout<<i<<endl;
    }

cout<<"now printing vector\n";
    for(auto i : v){

        cout<<i<<endl;
    }
    
    return 0;
}