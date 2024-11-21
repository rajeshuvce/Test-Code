#include<iostream>
using namespace std;

class dog {
    public:
        dog(int a){
            age = a;
        }

        dog()=default;

        int age = 19;

       dog operator= (const dog&);

       void testFun();

};
void dog::testFun(){
    cout<<"testFun";
}


dog dog::operator=(const dog& d) {

    dog nd ;
    nd.age = d.age;
    return nd;  
}

int main(){
    dog d(10);

    dog a;
    a = d;

    d.testFun();

    cout<<d.age<<endl;
    cout<<a.age<<endl;
    return 0;
}