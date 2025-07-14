#include <stdio.h>
#include <string.h>
#include <ctype.h>
void caesar(char str[], int shift) {
    int i = 0;
    char ch;
    while (str[i] != '\0') {
        ch = str[i];
        if (isalpha(ch)) {
            if (isupper(ch)) {
                ch = ((ch - 'A' + shift) % 26) + 'A';
            } else {
                ch = ((ch - 'a' + shift) % 26) + 'a';
            }
        }
        str[i] = ch;
        i++;
    }
    printf("Encrypted string: %s\n", str);
}

int main() {
    int n;
    printf("Enter the shift value: ");
    scanf("%d", &n);
    
    char str[100];
    printf("Enter a string: ");
    scanf("%s", str);
    
    caesar(str, n);
    
    return 0;
}
