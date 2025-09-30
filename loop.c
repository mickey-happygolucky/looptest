#include <stdio.h>

static int st_num;


int get_st_num(void) {
        return st_num;
}

int loop_func(int num) {
        int i = 0;
        for (i = 0; i < num; i++) {
                printf("i = %d, st_num = %d\n", i, st_num);
                if (i % 2) {
                        printf("%d is odd\n", i);
                } else {
                        printf("%d is even\n", i);
                }
                st_num = i;
        }
        return num - i;
}
