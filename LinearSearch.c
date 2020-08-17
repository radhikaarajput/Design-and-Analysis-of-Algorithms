#include<stdio.h>
#include<conio.h>
#include<time.h> 

int LinearSearch(int A[],int find,int n );
int main()
{
	int n,find,i,pos=-1;
	time_t start, end; 

	printf("Enter size of the array: ");
	scanf("%d", &n);
	int A[n];
	printf("Enter elements of the array: ");
	for(i=0;i<n;i++)
	{
		scanf("%d", &A[i]);
	}
	printf("Enter element to search: ");
	scanf("%d", &find);
	
	for(i=0;i<n;i++)
	{
		if(A[i]== find)
		{
			pos= i+1;
		}
	}
	//int pos= LinearSearch(A,find,n);
	if(pos == -1)
		printf("Not Found");
	else
		printf("Element found at %d", pos );
		
	printf("\nTime taken to print sum is %.2f seconds: ",  difftime(end, start)); 
	getch();
	return 0;
}

/*int LinearSearch(int A[],int find,int n )
{
	int i;
	for(i=0;i<n;i++)
	{
		if(A[i]== find)
		{
			return i+1;
		}
	}
	return 0;
}
*/
