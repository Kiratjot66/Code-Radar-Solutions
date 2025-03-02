#include <stdio.h>
int main() {
    int N, i, stars;
    scanf("%d", &N);
    
    stars = (N * (N + 1)) / 2;  // Total number of '*' to be printed
    int row = N, count = 0;  // Track row count and printed stars per row

    for (i = 0; i < stars + N; i++) {  // Total iterations (including newlines)
        if (count < row) {  
            printf("* ");
            count++;  // Increase star count in the current row
        } else {  
            printf("\n");
            row--;    // Move to the next row (fewer stars)
            count = 0; // Reset count for the next row
        }
    }
    
    return 0;
}
