#include <CUnit/Basic.h>
#include <CUnit/CUnit.h>

/* Modify these two lines according to the project */
#include <bill.h>
#define PROJECT_NAME    "ElectricityBillingSystem"

/* Prototypes for all the test functions */
void test1_bill(void);
void test2_bill(void);
void test3_bill(void);
void test4_bill(void);
void test5_bill(void);
void test6_bill(void);
void test7_bill(void);


/* Start of the application test */
int main() {
/* Note: Do not edit START*/
  /*Initialize and setup the Test Framework */
  if (CUE_SUCCESS != CU_initialize_registry())
    return CU_get_error();
  CU_pSuite suite = CU_add_suite(PROJECT_NAME, 0, 0);
/* Note: Do not edit END */


  /* Add your test functions in this format for testing*/
  CU_add_test(suite, "bill", test1_bill);
  CU_add_test(suite, "bill", test2_bill);
  CU_add_test(suite, "bill", test3_bill);
  CU_add_test(suite, "bill", test4_bill);
  CU_add_test(suite, "bill", test5_bill);
  CU_add_test(suite, "bill", test6_bill);
  CU_add_test(suite, "bill", test7_bill);



/* Note: Do not edit START*/
  /* Setup Test Framework to output the result to Screen */
  CU_basic_set_mode(CU_BRM_VERBOSE);

  /* run the unit test framework*/
  CU_basic_run_tests();

  /* Cleaning the Resources used by Unit test framework */
  CU_cleanup_registry();
/* Note: Do not edit END */
  return 0;
}

/* Write all the test functions */
void test1_bill(void) {
  CU_ASSERT(24 == bill(8));

  /* Dummy fail*/
  CU_ASSERT(12 == bill(8));
}

void test2_bill(void) {
  CU_ASSERT(175 == bill(25));

  /* Dummy fail*/
  CU_ASSERT(345 == bill(26));
}

void test3_bill(void) {
  CU_ASSERT(357 == bill(42));

  /* Dummy fail*/
  CU_ASSERT(341 == bill(44));
}

void test4_bill(void) {
  CU_ASSERT(800 == bill(80));

  /* Dummy fail*/
  CU_ASSERT(764 == bill(92));
}

void test5_bill(void) {
  CU_ASSERT(2134 == bill(194));

  /* Dummy fail*/
  CU_ASSERT(1345 == bill(200));
}

void test6_bill(void) {
  CU_ASSERT(4272 == bill(356));

  /* Dummy fail*/
  CU_ASSERT(4222 == bill(360));
}

void test7_bill(void) {
  CU_ASSERT(7059 == bill(543));

  /* Dummy fail*/
  CU_ASSERT(5674 == bill(580));
}
