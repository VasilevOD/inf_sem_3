#include <stdio.h>

void del(char *s1, char const *s2) {
    int amount1 = 0;
    for (int i = 0; s1[i] != '\0'; i++) {
        amount1++;
    }
    
    for (int i = 0; s1[i] != '\0';) {
        int j;
        for (j = 0; s2[j] != '\0'; j++) {
            if (s1[i] == s2[j]) {
                s1[i] = s1[amount1-1];
                s1[amount1-1] = "\0";
                amount1--;
                break;
            }
        }
        if (s2[j] == 0) {
            i++;
        }
    }
}

int main () {
    char s1[100];
    char s2[100];
    char s1_letters;
    char s2_letters;
    int amount1 = 0;
    int amount2 = 0;
    
    while (s1_letters = getchar()) {
        if (s1 != '\n') {
            s1[amount1] = s1_letters;
            amount1++;
        }
        else {
            s1[amount1] = '\0';
            break;
        }
    }

    while (s2_letters = getchar()) {
        if (s2 != '\n') {
            s2[amount2] = s2_letters;
            amount2++;
        }
        else {
            s2[amount2] = '\0';
            break;
        }
    }
    del(s1, s2);
    printf("%s\n", s1);
    return 0;
}
