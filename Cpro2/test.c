#include <stdio.h>

int main()
{
	float arr[3] = { 0 };
	scanf_s("%f%f%f", arr, &arr[1], &arr[2]);
	printf("%.2f %.2f %.2f", *arr,arr[1],arr[2]);
	/*int arr[3] = { 0,1,2 };
	printf("%d", *arr);*/
}