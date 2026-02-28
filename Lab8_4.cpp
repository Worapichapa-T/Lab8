#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int random1to100(void);
void printAr(int numAr[], int numArSize);
int checkNum(int numAr[], int numArSize);
int searchNum(int numAr[], int numArSize, int target);

int main() {
    int N, i;
    int A[100];

    scanf("%d", &N);

    if (N > 100) N = 100;
    if (N < 1) N = 1;

    srand(time(NULL));

    for (i = 0; i < N; i++) {
        A[i] = checkNum(A, i);
    }

    printf("\nGenerated Numbers:\n");
    printAr(A, N);

    return 0;
}

/* Print array elements */
void printAr(int numAr[], int numArSize) {
    for (int i = 0; i < numArSize; i++) {
        printf("%d ", numAr[i]);
    }
    printf("\n");
}

/* Generate a unique number (1–100) */
int checkNum(int numAr[], int numArSize) {
    int rnum = random1to100();

    while (searchNum(numAr, numArSize, rnum) == 1) {
        rnum = random1to100();
    }

    return rnum;
}

/* Linear search
   Return 1 if found
   Return 0 if not found */
int searchNum(int numAr[], int numArSize, int target) {
    for (int i = 0; i < numArSize; i++) {
        if (numAr[i] == target) {
            return 1;
        }
    }
    return 0;
}

/* Generate random number between 1 and 100 */
int random1to100(void) {
    return (rand() % 100) + 1;
}


