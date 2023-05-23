#include <stdio.h>
#include <stdlib.h>

#include "../src/sll.h"
#include "check.h"

START_TEST(test_struct_node_initialization)
{
    // initialization
    node tail = { .value = 13, .next = NULL };
    node head = { .value = 12, .next = &tail };

    // check tail
    ck_assert_int_eq(tail.value, 13);
    ck_assert_ptr_null(tail.next);

    // check head
    ck_assert_int_eq(head.value, 12);
    ck_assert_ptr_nonnull(head.next);
}
END_TEST

Suite *sll_testsuite(void)
{
    Suite *s;
    TCase *tc_core;

    s = suite_create("Sll");

    /* Core test case  */
    tc_core = tcase_create("Core");

    tcase_add_test(tc_core, test_struct_node_initialization);

    suite_add_tcase(s, tc_core);

    return s;
}

int main(void)
{
    int number_failed;
    Suite *s;
    SRunner *sr;

    s  = sll_testsuite();
    sr = srunner_create(s);

    /* Enable tab logging  */
    srunner_set_tap(sr, "-" /* filename  */);

    srunner_run_all(sr, CK_VERBOSE);

    number_failed = srunner_ntests_failed(sr);
    srunner_free(sr);

    return (number_failed == 0) ? EXIT_SUCCESS : EXIT_FAILURE;
}
