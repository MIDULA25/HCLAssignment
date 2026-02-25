#include <stdio.h>
#include <string.h>

int main() {

    int strsSize;

    printf("Enter number of strings: ");
    scanf("%d", &strsSize);

    char strs[strsSize][201];
    for (int i = 0; i < strsSize; i++) {
        printf("Enter string %d: ", i + 1);
        scanf("%s", strs[i]);
    }
    int count = 0;
    while (1) {
        int firstLen = strlen(strs[0]);
        if (count >= firstLen)
            break;
        char ch = strs[0][firstLen - 1 - count];
        int allMatch = 1;
        for (int i = 1; i < strsSize; i++) {
            int len = strlen(strs[i]);
            if (count >= len) {
                allMatch = 0;
                break;
            }
            if (strs[i][len - 1 - count] != ch) {
                allMatch = 0;
                break;
            }
        }
        if (allMatch == 1)
            count++;
        else
            break;
    }
    printf("Common suffix: ");
    int start = strlen(strs[0]) - count;
    for (int i = start; i < strlen(strs[0]); i++) {
        printf("%c", strs[0][i]);
    }
    printf("\n");
    return 0;
}