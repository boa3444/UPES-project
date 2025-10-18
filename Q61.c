#include <stdio.h>
#include <stdlib.h>

int search( int arr[], int size , int find)
{
	for ( int i = 0 ; i < size ; i++)
	{
		if ( arr[i] == find )
		{
			//printf("%d" , i);
			return i;
		}
	}
	return -1;
}

int main(){
	int size, *arr, numb;
	printf("Type size of your array:");
	scanf("%d" , &size);
	arr = (int *) malloc(sizeof(int) * size);
	printf("Now type the elements:\n");
	for ( int i = 0 ; i< size; i++)
	{
		scanf(" %d" , &arr[i]);
	}
	printf("Now type which element you want to search:\n");
	scanf("%d" , &numb);
	int result = search( arr , size , numb);
	( result == -1 ) ? printf("Could not find the element\n") : printf("Found it at : %d\n", result);
	
	return 0 ;
}
