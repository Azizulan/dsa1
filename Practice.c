#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void insertionSort(int data[], int n);
void bubbleSort(int data[], int n);
void selectionSort(int data[], int n);

void print(int data[], int a)
{
    int i;
    for (i = 0; i < a; i++)
    {
        printf("%d ", data[i]);
    }
    printf("\n\n");
    return;
}

int main()
{
    // Dynamic array
    int *arr;
    int n; // Number of elements

    // Open the file for reading
    FILE *file = fopen("input.txt", "r");

    // Check if the file exists and can be opened
    if (file == NULL)
    {
        printf("Error opening the file. Exiting...\n");
        return 1; // Exit with an error code
    }

    // Read the number of elements from the file
    if (fscanf(file, "%d", &n) != 1)
    {
        printf("Error reading the number of elements. Exiting...\n");
        fclose(file);
        return 1; // Exit with an error code
    }

    // Dynamically allocate memory for the data array
    arr = (int *)malloc(n * sizeof(int));

    if (arr == NULL)
    {
        printf("Memory allocation failed. Exiting...\n");
        fclose(file);
        return 1; // Exit with an error code
    }

    // Read data from the file and store it in the array
    for (int i = 0; i < n; i++)
    {
        if (fscanf(file, "%d", &arr[i]) != 1)
        {
            printf("Error reading data from the file. Exiting...\n");
            free(arr); // Free dynamically allocated memory
            fclose(file);
            return 1; // Exit with an error code
        }
    }

    // Close the file
    fclose(file);

    // Menu-driven interface to select the sorting algorithm
    int choice;
    printf("Select a sorting algorithm:\n");
    printf("1. Bubble Sort\n");
    printf("2. Insertion Sort\n");
    printf("3. Selection Sort\n\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    // Menu-driven interface to select the sorting order
    printf("\n Select sorting order:\n");
    printf("1. Ascending\n");
    printf("2. Descending\n\n");
    printf("Enter your choice: ");
    int order_choice;
    scanf("%d", &order_choice);

    switch (choice)
    {
    case 1:
        printf("\n bubble sort starting.... \n");
        bubbleSort(arr, n);
        break;
    case 2:
        printf("\n insertion sort starting.... \n");
        insertionSort(arr, n);
        break;
    case 3:
        printf("\n selection sort starting.... \n");
        selectionSort(arr, n);
        break;
    default:
        printf("Invalid choice. Exiting...\n");
        free(arr); // Free dynamically allocated memory
        return 1;  // Exit with an error code
    }

    // Print the sorted array
    if (order_choice == 1)
    {
        printf("Sorted in ascending order: ");
        print(arr, n); 
    }
    else if (order_choice == 2)
    {
        printf("Sorted in descending order: ");
        for (int i = n - 1; i >= 0; i--)
        {
            printf("%d ", arr[i]);
        }
        printf("\n\n");
    }
    else
    {
        printf("Invalid order choice. Exiting...\n");
    }

    // Free dynamically allocated memory to prevent memory leaks
    free(arr);

    return 0;
}

void insertionSort(int data[], int n)
{
    int i, j, key;
    for (i = 1; i < n; i++)
    {
        key = data[i];
        for (j = i - 1; j >= 0 && data[j] > key; j--)
        {
            data[j + 1] = data[j];
        }
        data[j + 1] = key;
    }
    return;
}

void bubbleSort(int data[], int n)
{
    int i, j, temp;

    for (i = 0; i < n - 1; i++)
    {
        for (j = 0; j < n - 1 - i; j++)
        {
            if (data[j] > data[j + 1])
            {
                temp = data[j];
                data[j] = data[j + 1];
                data[j + 1] = temp;
            }
        }
    }
}

void selectionSort(int data[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        int min_index = i;
        for (int j = i + 1; j < n; j++)
        {
            if (data[j] < data[min_index])
            {
                min_index = j;
            }
        }
        if (min_index != i)
        {
            // Swap the elements
            int temp = data[i];
            data[i] = data[min_index];
            data[min_index] = temp;
        }
    }
}