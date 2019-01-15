#include<stdio.h>
#include<conio.h>
void main(int arg1, char *arg2[])
{
 
	int array[] = {10, 30, 45, 56, 03};
	int size = sizeof(array) / sizeof(array[0]);
	printf("Largest number = %d",largest(array, size));
}
int largest(int array[], int size)
{
	int max, i;
	max = array[0];
	for(i = 1; i < size; i++)
	{
		if(max < array[i])
		{
			max = array[i];
		}
	}
	return max;
}
