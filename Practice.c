#include<stdio.h> 
#include<stdlib.h>
#include<time.h>

void insertionSort(int data[], int n);
void bubbleSort(int data[], int n);

void print(int data[], int a)
{
	int i;
	for(i= 0; i<a; i++)
	{
		printf("%d ",data[i]);
	}
	printf("\n\n");
	return;
}


int main() {
    //dynamic array
    int *arr;
    int n; // Number of elements

    printf("Enter the number of elements: ");
    scanf("%d",&n); // Accepts the number of elements from the test case

    // Dynamically allocate memory for the data array
    arr = (int *)malloc(n * sizeof(int));

    // Check if the memory has been successfully allocated by malloc or not
    if (arr == NULL)
    {
        printf("Memory allocation failed. Exiting...\n");
        return 1; // Exit with an error code
    }

    srand(time(NULL));
    for (int i = 0; i < n; i++)
    {
        //use rand() to generate random numbers and store them in the array
        arr[i] = (rand() % 100) + 1;
    }

    //print the array
    printf("Before sorting: ");
    print(arr,n);


    //apply insertion sort
    insertionSort(arr,n);
    printf("After sorting: ");
    print(arr,n);


    //apply bubble sort
    bubbleSort(arr,n);
    printf("After sorting: ");
    print(arr,n);


    // Free dynamically allocated memory to prevent memory leaks
    free(arr);

    return 0;
}

void insertionSort(int data[], int n)
{
	int i, j, key;
	for(i = 1; i < n; i++)
	{
		key = data[i];
		for(j = i-1; j >= 0 && data[j] > key; j--)
		{
			data[j+1] = data[j];
		}
		data[j+1] = key;
	}
	return;
}


void bubbleSort(int data[], int n)
{
	int i, j, temp;

	for(i = 0; i < n-1; i++)
	{
		for(j = 0; j < n-1-i; j++)
		{
			if(data[j] > data[j+1])
			{
				temp = data[j];
				data[j] = data[j+1];
				data[j+1] = temp;
			}
		}
	}
}