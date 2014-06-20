#include <stdio.h>
#include "huh.h"

void this_actually_works(void) {
    int i = 0;
#define OH_THE_HORROR(...)                          \
    do {                                            \
        varfun *f = funs[i];                        \
        int res = f(__VA_ARGS__);                   \
        printf("res of funs[%d](%s) => %d\n",       \
            i, #__VA_ARGS__, res);                  \
    } while (0)

    i = 0;
    OH_THE_HORROR();
    i = 3;
    OH_THE_HORROR(1, 2, 3);
    i = 9;
    OH_THE_HORROR(1, 2, 3, 4, 5, 6, 7, 8, 9);

    printf("\n...yup.\n");
}
