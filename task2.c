#include <stdarg.h>
#include <stddef.h>
#include <setjmp.h>
#include "cmocka\include\cmocka.h"

static void test_1(void **state) {

    // вот здесь (то есть ниже) вы можете делать все что захотите (в пределах синтаксиса языка Си)

int function_H (int a, int b, int c, int d,int H) {

    H=0;
    if (a>=2000) H=H+1;
    if (b>=2000) H=H+1;
    if (c>=2000) H=H+1;
    if (d>=2000) H=H+1;
    if (H>=3) H=1 ;  else H=0;
    return H;
}


    // все, заканчиваем... ниже ничего писать не надо
}

int main(void) {
    const struct CMUnitTest tests[] = {
        cmocka_unit_test( test_1 ),
    };
    return cmocka_run_group_tests(tests, NULL, NULL);
}
