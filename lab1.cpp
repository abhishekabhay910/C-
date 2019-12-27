#include<iostream>
using namespace std;
class arr{ 
	int a[5];
	public:
	void get();
	void display();
	void sum();
	void maxmin();
	void sort();
	void rev();
	};
void arr::get()
{
	int i=0;
	cout<<"enter array\n";
	for(i=0;i<5;i++)
	cin>>a[i];
}
void arr::display()
{
	int i=0;
	cout<<"entered elements are\n";
	for(i=0;i<5;i++)
	cout<<a[i]<<"\t";
}
void arr::sum()
{
	int i=0;int sum=0;
	for(i=0;i<5;i++)
	sum=sum+a[i];
	cout<<"\nsum= "<<sum;
}
void arr::maxmin()
{
	int i=0;
	int max=a[0]; int min=a[0];
	for(i=0;i<5;i++)
	{
	if(max<a[i])
	max=a[i];
	}
	cout<<"\nmax= "<<max;
	for(i=0;i<5;i++)
	{
	if(min>a[i])
	min=a[i];
	}
	cout<<"\nmin= "<<min;
}
void arr::sort()
{
	int i=0,j=0,temp=0;
	for(i=0;i<5;i++)
	for(j=0;j<5;j++)
	{
	if(a[j]>a[j+1])
		{
		temp=a[j];
		a[j]=a[j+1];
		a[j+1]=temp;
		}
	}
	cout<<"\nsorted array\n";
	for(j=0;j<5;j++)
	cout<<a[j]<<" ";
}
void arr::rev()
{
	int i=0, j=0, temp=0;
	for(i=0,j=4;i<j;i++,j--)
	{
		temp=a[j];
		a[j]=a[i];
		a[i]=temp;
	}
	cout<<"\nreversed array\n";
	for(j=0;j<5;j++)
	cout<<a[j]<<" ";

}
int main()
{
	int ch=0;
	arr obj;
	while(1)
	{
	cout<<"\nenter yuor choice\n1. to enter\n2. display\n3. sum\n4. maximum and minimum\n5. sort\n6. reverse\n";
	cin>>ch;
	switch(ch)
	{
		case 1:
		obj.get();break;
		case 2:
		obj.display();break;
		case 3:
		obj.sum();break;
		case 4:
		obj.maxmin();break;
		case 5:
		obj.sort();break;
		case 6:
		obj.rev();break;
		case 7:
		return 0;
	}
	}
	return 0;
}
