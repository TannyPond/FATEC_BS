#include <stdio.h>
#include <math.h>

int main (void)
{
	printf("\nPrograma Estudo de Arrays\n");
	/*Site com Exercicios: https://www.w3resource.com/c-programming-exercises/array/index.php*/


	/*************************************************************************************************************/
	/*Exercicio 1: Write a program in C to store elements in an array and print it. Input 10 elements in the array*/
	/*https://www.w3resource.com/c-programming-exercises/array/c-array-exercise-1.php*/

	int arr[10];
	int i;

	printf("\nRead and print elements of an array:\n");
	printf("Input 10 elements in the array: \n");

	for(i=0;i<10; i++){
		printf("element - %d : ",i);
		scanf("%d", &arr[i]);
	}

	printf("\nElements in array are: \n");
	for(i=0; i<10; i++){
		printf("%d", arr[i]);
	}

	printf("\n");
	/****************************************************************************************************************/

	/*Exercicio 2: Write a program in C to read a given n number of values in an array and display it in reverse order. Input 3 elements in the array.*/
	/*https://www.w3resource.com/c-programming-exercises/array/c-array-exercise-2.php*/

    int i, n, a[0];

    printf("\nRead n numbers of values in an array and display in reverse order\n");

	printf("Input the number of elements to store in the array\n");
	scanf("%d", &n);

	printf("Input %d number of elements in the array:\n", n);
	for (i=0;i<n;i++){
		printf("element %d: ", i);
		scanf("%d", &a[i]);
	}

		printf("\nThe values store into the array are: \n");
	for(i=0;i<n;i++){
		printf("%d", a[i]);
	}

	printf("\n\nThe values store into the array in reverse are :\n");
	for(i=n-1;i>=0;i--){
		printf("%d",a[i]);
	}

	/****************************************************************************************************************/

}


