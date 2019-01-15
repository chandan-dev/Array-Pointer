#include<stdio.h>
#include<conio.h>
int Search(int array[], int, int);// Declaration of Search function;
void main(int arg1, char*arg2[])
{ 
	int search_element, i, value, size;	
	int array[]={10, 20, 30, 40, 50, 60};
	size = sizeof(array) / sizeof(array[0]); // size of the array;
	printf("Array elements are:\n" );							 
	for(i = 0; i < size ; i++)
	{
		printf("%d     ", array[i]);		 
	}	
	printf("\n\n Enter the search element:" );
	scanf("%d", &search_element);
	int element = Search(array, size, search_element);
	if(element == search_element)
	{
		printf("Element is found");
	}
	else
		printf("Element is not found");
	getch();

	
}
int Search(int array[], int size, int search_element)
{
	int i, element;
	element = array[0];
	for(i = 1; i <=size; i++)
	{
		if(search_element == element) //Search for element in array;
		{
			return search_element;
		}	 
			element = array[i]; //Assigning next array element to element variable;
	}
	
 }
