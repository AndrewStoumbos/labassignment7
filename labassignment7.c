#include <stdio.h>
#include <stdlib.h>

void swap(int* ptrA, int* ptrB);
int totalSwaps;
void selectionSort(int arr[], int n, int specificInt) {
    int tempArr[n];
    for (int i =0; i < n; i++) {
        tempArr[i] = arr[i];
    }
    totalSwaps = 0;
    int specificSwaps = 0;
    for (int i=n-1; i>0; i--) {


        int maxI = 0;
        for (int j=1; j<=i; j++) {
            if (tempArr[j] > tempArr[maxI])
                maxI = j;
        }
        if(tempArr[maxI] == specificInt || tempArr[i] == specificInt) {
            specificSwaps++;
        }
        swap(&tempArr[maxI], &tempArr[i]);
        totalSwaps++;
    }
    printf(" %d\n", specificSwaps);
}

void bubbleSort(int arr[], int n, int specificInt) {
    int tempArr[n];
    for (int i =0; i < n; i++) {
        tempArr[i] = arr[i];
    }
    totalSwaps = 0;
    int specificSwaps = 0;

    for(int i=n-2; i>=0; i--) {
        for(int j =0; j<=i; j++) {

            if(tempArr[j] > tempArr[j+1]) {
                if(tempArr[j] == specificInt || tempArr[j+1] == specificInt) {
                    specificSwaps++;
                }
                swap(&tempArr[j],&tempArr[j+1]);
                totalSwaps++;
            }
        }

    }

    printf(" %d\n", specificSwaps);



}
void swap(int* ptrA, int* ptrB) {
    int tmp = *ptrA;
    *ptrA = *ptrB;
    *ptrB = tmp;
}

int main() {
    int arr[] = { 97, 16, 45, 63, 13, 22, 7, 58, 72};
    int n = 9;
    int specificInt = 0;
    int specificInt2 = 0;
    printf("arr1\n");
    printf("what numbers compare? \n");
    scanf("%d %d", &specificInt, &specificInt2);
    printf("selectionsort:\n");
    printf("number swaps on %d:\n", specificInt);
    selectionSort(arr, n, specificInt);
    printf("number swaps on %d:\n", specificInt2);
    selectionSort(arr, n, specificInt2);
    printf("\ntotal swaps: %d\n", totalSwaps);
    printf("bubblesort:\n");
    printf("number swaps on %d:\n", specificInt);
    bubbleSort(arr, n, specificInt);
    printf("number swaps on %d:\n", specificInt2);
    bubbleSort(arr, n, specificInt2);
    printf("\ntotal swaps: %d\n", totalSwaps);

    int arr2[] = { 90, 80, 70, 60, 50, 40, 30, 20, 10};
    printf("arr2\n");
    printf("what numbers compare? \n");
    scanf("%d %d", &specificInt, &specificInt2);
    printf("selectionsort:\n");
    printf("number swaps on %d:\n", specificInt);
    selectionSort(arr2, n, specificInt);
    printf("number swaps on %d:\n", specificInt2);
    selectionSort(arr2, n, specificInt2);
    printf("\ntotal swaps: %d\n", totalSwaps);
    printf("bubblesort:\n");
    printf("number swaps on %d:\n", specificInt);
    bubbleSort(arr2, n, specificInt);
    printf("number swaps on %d:\n", specificInt2);
    bubbleSort(arr2, n, specificInt2);
    printf("\ntotal swaps: %d\n", totalSwaps);



    return 0;
}



