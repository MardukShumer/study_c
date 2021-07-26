#include <stdarg.h>
#include <stddef.h>
#include <setjmp.h>
#include "cmocka\include\cmocka.h"

int function_mg ();
static void test_1(void **state) {

    // вот здесь (то есть ниже) вы можете делать все что захотите (в пределах синтаксиса языка Си)

int function_mx (int a, int b, int c, int d,int mx) {

    mx=a;
    if (mx<b) mx=b;
    if (mx<c) mx=c;
    if (mx<d) mx=d;
    return mx;
}


    // все, заканчиваем... ниже ничего писать не надо
}

int main(void) {
    const struct CMUnitTest tests[] = {
        cmocka_unit_test( test_1 ),
    };
    return cmocka_run_group_tests(tests, NULL, NULL);
}
