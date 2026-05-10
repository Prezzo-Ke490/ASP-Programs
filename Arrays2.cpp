#include <stdio.h>

#define SIZE 10


void inputArray(int arr[], int size) {
    for(int i = 0; i < size; i++) {
        printf("Enter the value of the element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }
}

void displayArray(int arr[], int size) {
    printf("The Arrays are: ");
    for(int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}


int calculateSum(int arr[], int size) {
    int sum = 0;
    for(int i = 0; i < size; i++) {
        sum += arr[i];
    }
    return sum;
}

int findLargest(int arr[], int size) {
    int largest = arr[0];
    for(int i = 1; i < size; i++) {
        if(arr[i] > largest) {
            largest = arr[i];
        }
    }
    return largest;
}

int main() {
    int numbers[SIZE];

    
    inputArray(numbers, SIZE);

    displayArray(numbers, SIZE);

    int sum = calculateSum(numbers, SIZE);
    printf("Sum of elements: %d\n", sum);


    int largest = findLargest(numbers, SIZE);
    printf("Largest element: %d\n", largest);

    return 0;
}

