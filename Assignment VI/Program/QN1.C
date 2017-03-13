//a program that uses pointers to copy an array of double
#include<stdio.h>

int main(){
	int m,i;
	printf("How many elements do you want to store in a array ?\n");
	scanf("%d", &m);
	double array[m];
	printf("Enter the numbers in the array:\n");
	for(i=0; i<m; i++){
		scanf("%d", &array[i]);
	}
	printf("The elements in array is:\n");
	for(i=0; i<m; i++){
		printf("%d\n", array[i]);
	}
	return 0;
}
