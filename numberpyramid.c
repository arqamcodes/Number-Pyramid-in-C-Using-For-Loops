#include <stdio.h>

int main() {
    int rows = 6;
	int i,j,l,k;
	
    // Outer loop for number of rows
    for ( i = 1; i <= rows; i++) {

        // Inner loop for spaces before numbers
        for ( j = 1; j <= rows - i; j++) {
            printf(" ");
        }

        // Inner loop for ascending numbers
        for ( k = 1; k <= i; k++) {
            printf("%d", k);
        }

        // Inner loop for descending numbers
        for ( l = i - 1; l >= 1; l--) {
            printf("%d", l);
        }

        // Move to the next line after each row
        printf("\n");
    }

return 0;

}
