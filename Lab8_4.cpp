#include <stdio.h>

int findMax(int arr[], int size);

int main() {
    int score[4] = {75, 88, 92, 60};
    int total = 0;

    for (int i = 0; i < 3; i++) {
        total += findMax(score, 4);
    }

    printf("Total of top 3 scores = %d\n", total);

    return 0;
}

int findMax(int arr[], int size) {
    int max = arr[0];
    int index = 0;

    for (int i = 1; i < size; i++) {
        if (arr[i] > max) {
            max = arr[i];
            index = i;
        }
    }

    arr[index] = -1;   // remove used max
    return max;
}


