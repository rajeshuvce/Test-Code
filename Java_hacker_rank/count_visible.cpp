#include<iostream>
#include <map>
/*
#include<stdio.h>
#include<string.h>
*/
using namespace std;

//Assume following return types while writing the code for this question. 
int output1;

void GetVisibleCount(int input1,int input2,int **input3)
{
    
    cout<< input1<<"@@@@" << input2 <<endl;
    
    
	//Write code here
	std::map<int,int> myMap;
	//Write code here
	for(int i=0;i<input2;i++)
	{
	    
	 cout<< input3[i][0]<<"---" << input3[i][1] <<endl;
        std::map<int,int>::iterator it;
     	it = myMap.find(input3[i][0]);
		if(it !=myMap.end())
		{
			myMap[input3[i][0]] = input3[i][1];
		}
		else if(it->second < input3[i][1])
		{
			myMap[input3[i][0]] = input3[i][1];
		}
		
	}
	cout<<myMap.size();
	
}

int main()
{
	int in[5][2] ={ { 0, 4 }, { 6, 3 }, { 1, 5 }, { 6, 4 }, { 7, 2 } };
	
	int *ptr = in[0];
	GetVisibleCount(10,5,&ptr);
	
	cout<<output1;
}
