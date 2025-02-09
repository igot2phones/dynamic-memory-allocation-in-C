#include <stdio.h>
#include <stdlib.h>

int main() {
    int n = 5;
    
    // Δέσμευση δυναμικής μνήμης για έναν πίνακα 5 ακεραίων και μετατροπή του δείκτη σε int*
    int *array = (int*)malloc(n * sizeof(int));
    if (array == NULL) {
        printf("Αποτυχία δέσμευσης μνήμης\n");
        return 1;
    }

    // Αρχικοποίηση του πίνακα
    for (int i = 0; i < n; i++) {
        array[i] = i * 10;
    }

    // Εκτύπωση των στοιχείων του πίνακα
    for (int i = 0; i < n; i++) {
        printf("array[%d] = %d\n", i, array[i]);
    }

    // Απελευθέρωση της μνήμης
    free(array);

    return 0;
}