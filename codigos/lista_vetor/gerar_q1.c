#include <stdio.h>
#include <stdlib.h>

int main() {
    int c, n;
    
    
    for (c = 1; c <= 100; c++) {
        n = rand() % 100 + 1;
        printf("%d\n", n);
    }
    
    return 0;
}
