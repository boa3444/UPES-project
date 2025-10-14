#include <stdio.h>
#include <stdlib.h>

void reverse_arr( int arr[], int size)
{
	int fwd =0 , bck=size-1, reversed = 0, can;
	while (! ( reversed))
	{
		if ( fwd > bck )
		{
			reversed = 1;
			return ;
		}
			
		can = arr[fwd] ;
		arr[fwd] = arr[bck];
		arr[bck] = can;
		
		++fwd;
		--bck;
		
	}
}
int main(){
	int *arr, size ;
	scanf("%d" , &size);
	arr= malloc( sizeof(int) * size);
	for ( int i = 0 ; i < size; i++)
	{
		scanf( " %d", &arr[i]);
	}
	
	reverse_arr(arr, size);
	printf("New reversed array:");
	for ( int i = 0 ; i< size; i++)
	{
		printf("%d " , arr[i]);
	}
	return 0 ;
	}
	
