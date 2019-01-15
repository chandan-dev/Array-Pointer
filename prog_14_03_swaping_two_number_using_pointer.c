#include<stdio.h>
#include<conio.h>
int main(int arg1, char *arg2[])
{	int num_1,num_2;
	printf("Enter two numers x & y :");
	scanf("%d %d", &num_1, &num_2);
	printf("Before swaping num_1 = %d and num_2 = %d  \n", num_1, num_2);
	swap(&num_1, &num_2);
	printf("After swaping num_1 = %d and num_2 = %d", num_1, num_2);
	getch();
}
int swap(int *num_1, int *num_2)
{
	int temp; 
	temp = *num_1;
	*num_1 = *num_2;
	*num_2 = temp;
}
