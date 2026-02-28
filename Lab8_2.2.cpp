#include <stdio.h>

#define N_STUDENT 8
#define N_QUESTION 10

int checkscore(char std[]);
int countNo1correct(char ans[][N_QUESTION], int n);

int main() {
    char ans[N_STUDENT][N_QUESTION] = {
        {'A','B','A','C','C','D','E','E','A','D'}, //7
        {'D','B','A','B','C','A','E','E','A','D'}, //6
        {'E','D','D','A','C','B','E','E','A','D'}, //5
        {'C','B','A','E','D','C','E','E','A','D'}, //4
        {'A','B','D','C','C','D','E','E','A','D'}, //8
        {'B','B','E','C','C','D','E','E','A','D'}, //7
        {'B','B','A','C','C','D','E','E','A','D'}, //7
        {'E','B','E','C','C','D','E','E','A','D'}  //7
    };

    printf("===== SCORE =====\n");
    for (int i = 0; i < N_STUDENT; i++) {
        printf("std %d => %d\n", i + 1, checkscore(ans[i]));
    }

    printf("\nNo.1 correct = %d students\n", countNo1correct(ans, N_STUDENT));

    return 0;
}


int checkscore(char std[]) {
    char key[N_QUESTION] = {'D','B','D','C','C','D','A','E','A','D'};
    int score = 0;

    for (int i = 0; i < N_QUESTION; i++) {
        if (std[i] == key[i]) {
            score++;
        }
    }
    return score;
}

int countNo1correct(char ans[][N_QUESTION], int n) {
    char keyNo1 = 'D';   
    int count = 0;

    for (int i = 0; i < n; i++) {
        if (ans[i][0] == keyNo1) {
            count++;
        }
    }
    return count;
}


