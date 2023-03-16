#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int rastgeleSec(int set[], int boyut) {
    int index = rand() % boyut;
    int secilen = set[index];
    return secilen;
}

int main() {
    int set[] = {2, 4, 6, 8};
    srand(time(0));
    int secilen = rastgeleSec(set, 4);
    printf("%d\n", secilen);
    
    
    int set1[] = {3, 5, 7, 9, 11};
    srand(time(0));
    int secilen2 = rastgeleSec(set1, 5);
    printf("%d\n", secilen2);
    
    
    int set2[] = {6, 10, 14, 18, 22};
    srand(time(0));
    int secilen3 = rastgeleSec(set2, 5);
    printf("%d\n", secilen3);
    
    
    return 0;
}
