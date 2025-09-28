#include <stdio.h>

int loop_func(int num) {
        int i = 0;
        for (i = 0; i < num; i++) {
                printf("i = %d\n", i);
                if (i % 2) {
                        printf("%d is odd\n");
                } else {
                        printf("%d is even\n");
                }
        }
        return num - i;
}
