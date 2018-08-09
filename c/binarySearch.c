#include <stdio.h>

int binarySearch(int * array, int size, int element){

	int first = 0;
	int last  = size - 1;
	int ret   = -1;

	while ( first <= last ){
		int mid   = (first + last)/2;
		if (array[mid] == element){
			ret = mid; 
			break;
		}
		if (array[mid] < element) first = mid + 1;
		else last = mid - 1;
	}
	return ret;
}

int main(){
	int input[] = { 2, 3, 6, 10, 23, 34, 50, 67, 76, 88, 92, 98};
	int size = sizeof(input) / sizeof(int);
	int result = -1;
	int element;

	for(int i = 0; i < size; i++) printf("%d  ", input[i]);

	printf("\n\nEnter the element to search:");
	fflush(0);
	scanf("%d", &element);

	result = binarySearch(input, size, element);

	(result == -1)  ? printf("Element is not found in input array\n")
			: printf("Element found at index %d \n", result);   

	return 0;

}
