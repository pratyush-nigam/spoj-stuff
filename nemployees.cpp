#include<vector>
#include<algorithm>
#include<cstdio>
using namespace std;

int main()
{
	vector<pair<int,int> > emp;//pair's first element is finish time and second element is start time of the employees
	vector<int> events;
	int n,i;
	printf("No. of employees are: ");
	scanf("%d",&n);//number of employees taken as input here
	printf("Enter their Start Time and Finish Time:\n");
	for(i=0;i<n;i++)
	{
		int x,y;
		scanf("%d%d",&x,&y);//start time and finish time of each employee taken as an input
		emp.push_back(make_pair(y,x));
	}
	sort(emp.begin(),emp.end());
	for(i=0;i<n;i++)
	{
		if(events.size()<2 || events[events.size()-1] < emp[i].second)//When the start date of the employee > last date of event 
		{
			events.push_back(emp[i].first-1);
			events.push_back(emp[i].first);
		}
		else if(events[events.size()-2] < emp[i].second)//When the start date of the employee > second last date of event
		{
			if(events[events.size()-1] == emp[i].first)
			{
				events.pop_back();//removing last element
				events.push_back(emp[i].first-1);
			}
			events.push_back(emp[i].first);
		}
	}
	for(i=0;i<events.size();i++)
		printf("%d ",events[i]);
	printf("\n");
	return 0;
}
