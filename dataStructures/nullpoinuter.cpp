#include<iostream>
using namespace std;
enum class apple {green, red};


enum class orange {big, small};

int main(){
    apple a = apple::green;

    orange o = orange::big;

    if(a == o){
        cout<<"green apple and big orange are same \n";
    }
    else{
        cout<<"green apple and big orange are not same \n";
    }

}
