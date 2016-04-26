#include<bits/stdc++.h>
#include <algorithm>  
using namespace std;


struct Workshop {
	int start_time;
	int end_time;
	int duration;
};

struct Available_Workshops{
	int n;
	Workshop  *workArray;
	
	
};

bool compare (Workshop a,Workshop b) 
{ 
	return (a.duration < b.duration);
}
bool isOverLap(Workshop a,Workshop b) 
{ 
	if(a.start_time< b.start_time
		&& (a.start_time + a.duration) > b.start_time)
		{
			return true;
		}
	else if(b.start_time< a.start_time
		&& (b.start_time + a.duration) > b.start_time)
		{
			return true;
		}	
		
	return false;	
}

std::vector<Workshop> wkList;

Available_Workshops* initialize (int start_time[], int duration[], int n) 
{
	Available_Workshops *aWorkShop = new Available_Workshops();
	aWorkShop->n =n;
	aWorkShop->workArray = new Workshop[n];
	for(int i=0; i<n; i++)
	{
		aWorkShop->workArray[i].start_time = start_time[i];
		aWorkShop->workArray[i].duration = duration[i];
		
		wkList.push_back(aWorkShop->workArray[i]);
	}
	return 	aWorkShop;
}

int CalculateMaxWorkshops(Available_Workshops* ptr) 
{
	std::sort(wkList.begin() , wkList.end(), compare);
	std::vector<Workshop>::iterator it;
	for(it = wkList.begin(); it!= wkList.end(); it++)
	{
		cout<< isOverLap(*it, *(it+1)) <<endl;
		
		cout<<" -"<<(*it).start_time<< "-"<<(*it).duration<<endl;
		}
}
//Define the structs Workshops and Available_Workshops.
//Implement the functions initialize and CalculateMaxWorkshops


int main(int argc, char *argv[]) {
    int n; // number of workshops
    cin >> n;
    // create arrays of unknown size n
    int* start_time = new int[n];
    int* duration = new int[n];

    for(int i=0; i < n; i++){
        cin >> start_time[i];
    }
    for(int i = 0; i < n; i++){
        cin >> duration[i];
    }

    Available_Workshops * ptr;
    ptr = initialize(start_time,duration, n);
    cout << CalculateMaxWorkshops(ptr) << endl;
    return 0;
}