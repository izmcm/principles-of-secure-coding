#include <stdio.h>
#include "fqlib.h"

int main() {
    int element;
    QUEUE* queue;
    
    qmanage(&queue, 1, 5);

    qmanage(&queue, 0, 5);
    qmanage(&queue, 0, 5);

    return 0;
}