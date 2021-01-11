#include <stdio.h>

int *address_of_smallest_value(int *numbers, int size) {

    int i;
    size= numbers[0];
    int *qty  = &numbers[0];

    for(i = 0; i < size; i++) {
        if (numbers[i] < size) {
            size = numbers[i];
            qty  = &numbers[i];
        }
    }
    return qty ;
}
