#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char str[1000];
    int freq[26] = {0}; 
    fgets(str, sizeof(str), stdin); 
    str[strcspn(str, "\n")] = '\0';
    int l = strlen(str);
    for (int i = 0; i < l; i++) {
        if (isalpha(str[i])) { 
            freq[tolower(str[i]) - 'a']++; 
        }
    }
    int a=freq[0];
    int d;
    for (int j = 1; j < 26; j++) {
        if (a<freq[j]) { 
            a=freq[j];
            d=j;
        }
    }

    printf("%c",97+d);
    return 0;
}
