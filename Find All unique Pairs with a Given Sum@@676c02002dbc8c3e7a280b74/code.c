#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int a[n];
    
    // Read the array elements
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
    
    int k;
    scanf("%d", &k);
    
    // Use a nested loop to find all pairs with the sum equal to k
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (a[i] + a[j] == k) {
                // Print the pair only if it adds up to k
                printf("%d %d\n", a[i], a[j]);
            }
        }
    }
    
    return 0;
}
