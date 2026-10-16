#include <stdio.h>

int main() {
    char str[100] ;
    int count = 0;
    int i = 0;
    int j = 0;
    scanf("%[^\n]s", str);

   for (i = 0; str[i] != '\0'; i++) {
        if (str[i] == ' ') {
            j=1;
        }
        else if (j == 1) {
            count++;
            j = 0;
        }
    }

    printf("Number of words: %d\n", count + 1);
    return 0;
}