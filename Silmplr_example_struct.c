#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// dhliwsh tou struct gia tainies
struct movie {
    int code;          // kodikos tainias
    char title[50];    // titlos tainias
    int year;          // xronia
};

int main() {
    // dhlwsh pointer se struct movie
    struct movie *N;

    // Dinamikos xwros gia ena struct movie
    N = (struct movie*) malloc(sizeof(struct movie));
    if (N == NULL) { // elegxos epityxias desmeysis mnimis
        printf("Memory allocation failed\n");
        return 1;
    }
    // Eisagwgi dedomenwn tainias
            printf("Enter code: ");
            scanf("%d", &N.code);
            printf("Enter title: ");
            fgets(N.title, 50, stdin);
            printf("Enter year: ");
            scanf("%d", &N.year);
            printf("Movie inserted successfully\n");
            

    // Ektipwsi dedomenwn tainias
    printf("Movie Code: %d\n", N->code);
    printf("Movie Title: %s\n", N->title);
    printf("Movie Year: %d\n", N->year);

    // Apodesmeusi mnimis
    free(N);

    return 0;
}
