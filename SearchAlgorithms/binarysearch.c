#include <stdio.h>

int binarySearch(int arr[], int n, int x )
{
	int low = 0, high = n-1;
	while(low <= high)
	{
		int mid = (low+high)/2;
		if(arr[mid] == x) return mid;
		else if(x < arr[mid]) high = mid - 1;
		else low = mid + 1;
	}
	return -1;
}

int main()
{
	int items[] = {1,1,2,2,2,3,3,3,5,5,6,9,9,11};
	int x;
	printf("Enter a number:\n");
	scanf("%d", &x);
	int arraysize = sizeof(items)/sizeof(items[0]);
	int itemIndex = binarySearch(items, arraysize, x);
	printf("You are searching for: %d\n", x );
	// printf("itemIndex = %d\n", itemIndex );

	if(itemIndex == -1)
	{
		printf("Item %d not found in the list\n", x);
	}
	else
	{
		printf("Found the item at index [ %d ] in the list \n", itemIndex );
	}
	

	return 0;
}