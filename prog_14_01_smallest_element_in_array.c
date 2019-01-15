#include<stdio.h>
#include<conio.h>

int compare(int array[], int size)
{
	int i, min;
	min = array[0];//assign first index value as minimum value;
	for(i = 1; i < size; i++)
	{
		if(array[i] < min)	//Comparison between the array elements
		{
		min = array[i];
		}	
		 
	}	
	return min;
}
void main(int arg1, char *arg2[])
{
	int size = 5, min;
	int array[] = {10, 13, 45, 67, 3};
	min = compare(array, size);
	printf("Smallest number is= %d ", min);
	getch();
	
}

