#include <stdlib.h>  

int main() {  
    // Desmeush gia 1 int  
    int* ptr = (int*) malloc(sizeof(int));  

    *ptr = 5;  // Bazoume timh  
    free(ptr); // Apodesmeush  
    return 0;  
}  

