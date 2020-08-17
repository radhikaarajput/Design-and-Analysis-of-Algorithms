#include<iostream>
#include<conio.h>
#include<time.h>

clock_t begin, end;
double time_spent;

using namespace std;

int BinarySearch(int A[],int find,int left, int right );

int main()
{
	int n,find,i,pos=0;
	cout<<"Enter size of the array ";
	cin>>n;
	int A[n];
	cout<<"Enter elements of array ";
	for(i=0;i<n;i++)
	{
		cin>>A[i];
	}
	cout<<"Enter element to search ";
	cin>>find;
	
	begin = clock();
	pos= BinarySearch(A,find,0,n-1);
	if(pos == 0)
		cout<<"Not found";
	else
		cout<<"Found at"<<pos+1;
		
	end = clock();
	time_spent = (double)(end - begin) / CLOCKS_PER_SEC;
	cout<<"\nTime taken by BinarySearch function is: "<<time_spent<<" seconds";
	
	getch();
	return 0;
}


int BinarySearch(int A[],int find,int left, int right )
{
	int i;
	if(right>left)
	{
		int mid=(left+right)/2;
		if(A[i]== mid)
		{
			return mid;
		}
		else if(A[mid]<find)
		{
			return BinarySearch(A,find,mid+1,right);
		}
		else if(A[mid]>find)
		{
			return BinarySearch(A,find,left,mid-1);	
		}
	}
	return 0;
}
