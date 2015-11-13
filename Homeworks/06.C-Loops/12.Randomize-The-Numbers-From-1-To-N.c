/*
 * Write a program that enters an integer n and prints the numbers 1, 2, …, n
 * in random order. Examples:
n       randomized numbers 1…n
3       2 1 3
10      3 4 8 2 6 7 9 1 10 5
 * Note that the above output is just an example. Due to randomness, your program
 * most probably will produce different results. You might need to use arrays.
 */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// A utility function to swap to integers

void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

// A utility function to print an array

void printArray(int arr[], int n) {
    int i;
    for (i = 0; i < n; i++)
        printf("%d ", arr[i]);
    printf("\n");
}

// A function to generate a random permutation of arr[]

void randomize(int arr[], int n) {
    // Use a different seed value so that we don't get same
    // result each time we run this program
    srand(time(NULL));

    // Start from the last element and swap one by one. We don't
    // need to run for the first element that's why i > 0
    int i;
    for (i = n - 1; i > 0; i--) {
        // Pick a random index from 0 to i
        int j = rand() % (i + 1);

        // Swap arr[i] with the element at random index
        swap(&arr[i], &arr[j]);
    }
}

// Driver program to test above function.

int main() {
    int n;
    printf("Please enter how many random numbers do you want to randomize: ");
    scanf("%d", &n);

    int arr[n];
    size_t i;

    for (i = 1; i <= n; i++) {
        arr[i - 1] = i;
    }

    randomize(arr, n);
    printArray(arr, n);
    return 0;
}
