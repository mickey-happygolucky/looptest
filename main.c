#include <stdio.h>
extern int get_st_num(void);
extern int loop_func(int num);

int main(void) {
        int var = 10;
        int ret;

        ret = get_st_num();
        printf("get_st_num returned %d L:%d\n", ret, __LINE__);
        ret = loop_func(var);
        printf("loop_func returned %d\n", ret);
        ret = get_st_num();
        printf("get_st_num returned %d L:%d\n", ret, __LINE__);
        return 0;
}
