#include <stdio.h>

void addthree(int number[], int sizeNum, int pos[][2], int sizePos) {
    for (int i = 0; i < sizePos; i++) {
        int index = pos[i][0];
        int value = pos[i][1];

        if (index >= 0 && index < sizeNum) {
            number[index] += value;
        }
    }
}

void printAr(const int a[], int n) {
    for (int i = 0; i < n; i++) printf("%d ", a[i]);
    printf("\n");
}

int main() {
    int number[5] = {20, 50, 100, 199, 9};

    
    int pos[2][2] = { {0, 5}, {2, 10} };

    printf("Before: ");
    printAr(number, 5);

    addthree(number, 5, pos, 2);

    printf("After : ");
    printAr(number, 5);

    return 0;
}


