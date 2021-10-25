#include <stdio.h>
#include "fqlib.h"

int main() {
    int element;
    QUEUE* queue;
    
    qmanage(&queue, 1, 5);

    for(int i = 0; i < 5; i++) {
        int element_to_add = 10 + 10*i;
        put_on_queue(queue, element_to_add);
    }

    printf("before change queue size\n");
    for(int i = 0; i < 5; i++) {
        take_off_queue(queue, &element);
        printf("%d\n", element);
    }

    queue->size = 3;

    printf("\nafter change queue size\n");
    for(int i = 0; i < 5; i++) {
        take_off_queue(queue, &element);
        printf("%d\n", element);
    }

    return 0;
}