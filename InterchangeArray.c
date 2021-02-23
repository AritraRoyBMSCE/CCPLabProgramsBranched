#include <stdio.h>
#include <conio.h>
void array(int);
void main()
{
	int p=0;
	int i;
	printf("Enter the size of the array. \n");
	scanf("%d", &p);
	array(p);
}
void array(int n){
int a[n];
int max, min, maxpos, minpos, i, temp;
	for (int i = 0; i < n; i++){
		scanf("%d", &a[i]);
	}
	max = a[0];
	min = a[0];
	maxpos = 0;
	minpos = 0;
	for(int i = 1; i < n; i++)
	{
		if (a[i] > max)
		{
			max = a[i];
			maxpos = i;
		}
		if (a[i] < min)
		{
			min = a[i];
			minpos = i;
		}
	}
	temp = a[maxpos];
	a[maxpos] = a[minpos];
	a[minpos] = temp;
	printf("After interchange array elements are: ");
	for (int i = 0; i < n; i++)
		printf("%d ", a[i]);
	return;
}
