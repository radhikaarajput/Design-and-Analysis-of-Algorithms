#include<iostream>
#include<conio.h>
#include<time.h>
using namespace std;


using namespace std;

int BinarySearch(int A[],int find,int left, int right );

int main()
{
	int n,find,i,pos=-1;
	clock_t begin, end;
double time_spent;
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
	
	if(pos == -1)
		cout<<"Element Not found";
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
	if(left <= right)
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
	return -1;
}
/*
Time complexity and Recurrence relation

Best Case:    Element presnt at middle.
Time Complexity: O(1)

Worst Case: Element not present in array.
		Initially Search space = n
			Step1: Search space= n
			Step2: Search space decreased to= n/2
			Step3: Search space decreased to= n/4
			Step4: Search space decreased to= n/8
			.......
			Step m: Search space decreased to= n/2k

T(n)= T(n/2k ) 
After k divisions, the length of array becomes 1, Therefore  (n/2k ) =1
Applying log function on both sides:   log (n) = log  (2k) 
log (n) = k log (2)                            As (loga (a) = 1)
 Therefore,  k = log (n)
Time Complexity= log(n)

Average case:   Time complexity of a successful search is about the same as the worst case equal to logN. So, the average case time complexity of binary search  is O(logN)			

*/
