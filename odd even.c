#include <stdio.h>

int main() {
    FILE *even_file, *odd_file;

    
    even_file = fopen("even.txt", "w");
    odd_file = fopen("odd.txt", "w");

    if (even_file == NULL || odd_file == NULL) {
        printf("Error opening files.\n");
        return 0;
    }

    for (int i = 50; i <= 70; i++) {
        if (i % 2 == 0) {
            fprintf(even_file, "%d ", i);
        } else {
            fprintf(odd_file, "%d ", i);
        }
    }

    

    return 0;
}