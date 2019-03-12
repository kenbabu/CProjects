#include <stdio.h>
#include <stdbool.h>

int binarySearch(int arr[], int n, int x, bool searchFirst)
{
	int low = 0, high = n-1, result = -1;
	while(low <= high)
	{
		int mid = (low+high)/2;
		if(arr[mid] == x) 
			{
				result = mid;
				if(searchFirst)
					high = mid - 1; // search lower indices
				else
					low = mid + 1; // search higher indices 
				
			}
		else if(x < arr[mid]) high = mid - 1;
		else low = mid + 1;
	}
	return result;
}

int main()
{
	int items[] = {1,1,2,2,2,3,3,3,5,5,6,9,9,11};
	int x;
	printf("Enter a number:\n");
	scanf("%d", &x);
	int arraysize = sizeof(items)/sizeof(items[0]);
	int firstIndex = binarySearch(items, arraysize, x, true);
	

	if(firstIndex == -1)
	{
		printf("Item %d not found in the list\n", x);
	}
	else
	{
		int lastIndex =  binarySearch(items, arraysize, x, false);
		printf("Found %d items  between indices [%d:%d]in the list \n", (lastIndex - firstIndex) +1, firstIndex, lastIndex );
	}
	

	return 0;
}