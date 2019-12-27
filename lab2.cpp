#include<iostream>
using namespace std;
class arr{
	char name[10],dept[10],post[10],add[20];
	int empid;
	public:
	void insert();
	void display();
	};arr a[3];
void arr::insert()
{
	cout<<"\nempid-";cin>>empid;
	cout<<"\nname-";cin>>name;
	cout<<"\ndepartment-";cin>>dept;
	cout<<"\npost-";cin>>post;
	cout<<"\naddress-";cin>>add;
}
void arr::display()
{
	cout<<"\nempid:"<<empid;
	cout<<"\nname:"<<name;
	cout<<"\ndepartment:"<<dept;
	cout<<"\npost:"<<post;
	cout<<"\naddress:"<<add;
}
int main()
{
	int n,i;
	cout<<"\nenter no of employee";
	cin>>n;
	cout<<"\nenter detail";
	for(i=0;i<n;i++)
	a[i].insert();
	cout<<"\nentered detail";
	for(i=0;i<n;i++)
	a[i].display();
	return 0;
}

