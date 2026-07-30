/*Count vowels and consonants*/

#include <stdio.h>

int main() {
    char str[200];
    int i, vow = 0, cons = 0;

    printf("Enter feedback: ");
    fgets(str, sizeof(str), stdin);

    for (i = 0; str[i] != '\0'; i++) {
        if ((str[i] >= 'a' && str[i] <= 'z') ||
            (str[i] >= 'A' && str[i] <= 'Z')) {

            if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' ||
                str[i] == 'o' || str[i] == 'u' ||
                str[i] == 'A' || str[i] == 'E' || str[i] == 'I' ||
                str[i] == 'O' || str[i] == 'U') {
                vow++;
            } else {
                cons++;
            }
            }
            }
   printf("Vowels = %d\n", vow);
    printf("Consonants = %d\n", cons);

    return 0;
}
