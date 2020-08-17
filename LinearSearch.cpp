#include<iostream>
#include<conio.h>
#include<time.h>
using namespace std;

int linearSearch(int arr[],int num,int start_index,int size);

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
	pos= linearSearch(A,find,0,n-1);
	
	if(pos == -1)
		cout<<"Element Not found";
	else
		cout<<"Found at: "<<pos+1;
		
	end = clock();
	
	time_spent = (double)(end - begin) / CLOCKS_PER_SEC;
	cout<<"\nTime taken by LinearSearch function is: "<<time_spent<<" seconds";
	
	getch();
	return 0;
}



int linearSearch(int arr[],int find,int start_index,int size)
{
	if(start_index<=size)
	{
		if(arr[start_index] == find)
		{
			return start_index;
		}
		else
		{
			return linearSearch(arr, find, start_index+1, size);
		}
	}
	return -1;
}
/*

Time complexity and Recurrence relation

Best Case:    The best case is that the item to find is present at starting index
 That gives us a lower bound of 1 (or ?(1))
Time Complexity: O(1) (or ?(1))

Worst Case: Element not present in array.
		Initially Search space = n
 Let T(n) be the number of comparisons (time) required for linear search on an array of size n.
 At, n = 1, T(1) = 1. 
T(n) = 1 + T(n ? 1) = 1 + · · · + 1 + T(1) 
Therefore, T(n) = n ? 1 + 1 = n, i.e., 
T(n) = ?(n).

Average case:   Time complexity of a successful search is about the same as the worst case equal to O(n) So, the average case time complexity of binary search  is O(n)	

*/
