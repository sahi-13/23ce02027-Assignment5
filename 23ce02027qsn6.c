#include <stdio.h>

int main() {
    int i, j, n, flag = 0, count = 0;
    char k[100], a[100];
    
    printf("Enter the limit of characters: ");
    scanf("%d", &n);
    
    printf("Enter the characters: ");
    for (i = 0; i < n; i++) {
        scanf(" %c", &a[i]);  
    }

    printf("Enter a word: ");
    scanf("%99s", k); 

    for (i = 0; k[i] != '\0'; i++) {
        flag = 1; 
        for (j = 0; j < n; j++) {
            if (a[j] == k[i]) {
                flag = 0;  
                break;
            }
        }
        if (flag == 1) {
            break;  
        }
    }

    if (flag == 0) {
        printf("Can match\n");
    } else {
        printf("Can't match\n");
    }

    return 0;
}
