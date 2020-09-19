#include <CUnit/Basic.h>
#include <CUnit/CUnit.h>

/* Modify these two lines according to the project */
#include <calculator_operations.h>
#define PROJECT_NAME    "Calculator"

/* Prototypes for all the test functions */
void test_add(void);
void test_subtract(void);
void test_multiply(void);
void test_divide(void);
void test_module(void);
void test_not(void);
void test_and(void);
void test_or(void);
void test_nand(void);
void test_nor(void);
void test_xor(void);
void test_xnor(void);

/* Start of the application test */
int main() {
/* Note: Do not edit START*/
  /*Initialize and setup the Test Framework */
  if (CUE_SUCCESS != CU_initialize_registry())
    return CU_get_error();
  CU_pSuite suite = CU_add_suite(PROJECT_NAME, 0, 0);
/* Note: Do not edit END */
  
  
  /* Add your test functions in this format for testing*/
  CU_add_test(suite, "add", test_add);
  CU_add_test(suite, "subtract", test_subtract);
  CU_add_test(suite, "multiply", test_multiply);
  CU_add_test(suite, "divide", test_divide);
  CU_add_test(suite, "module", test_module);
  CU_add_test(suite, "not", test_not);
  CU_add_test(suite, "and", test_and);
  CU_add_test(suite, "or", test_or);
  CU_add_test(suite, "nand", test_nand);
  CU_add_test(suite, "nor", test_nor);
  CU_add_test(suite, "xor", test_xor);
  CU_add_test(suite, "xnor", test_xnor);
  
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
void test_add(void) {
  CU_ASSERT(30 == add(10, 20));
  
  /* Dummy fail*/
  CU_ASSERT(1500 == add(750, 7500));
}

void test_subtract(void) {
  CU_ASSERT(-3 == subtract(0, 3));
  
  /* Dummy fail*/
  CU_ASSERT(1 == subtract(1000, 900));
}

void test_multiply(void) {
  CU_ASSERT(0 == multiply(1, 0));
  
  /* Dummy fail*/
  CU_ASSERT(2 == multiply(2, 5));
}

void test_divide(void) {
  CU_ASSERT(0 == divide(1, 0));
  
  /* Dummy fail*/
  CU_ASSERT(3 == divide(2, 2));
}

void test_module(void) {
  CU_ASSERT(0 == module(2, 2));
  
  /* Dummy fail*/
  CU_ASSERT(3 == module(3, 2));
}

void test_not(void) {
  CU_ASSERT(0 == not(1));
  
  /* Dummy fail*/
  CU_ASSERT(1== not(1));
}
void test_and(void) {
  CU_ASSERT(1 == and(1, 1));
  
  /* Dummy fail*/
  CU_ASSERT(1 == and(1, 0));
}

void test_or(void) {
  CU_ASSERT(1 == or(1, 1));
  
  /* Dummy fail*/
  CU_ASSERT(1 == or(0, 0));
}

void test_nand(void) {
  CU_ASSERT(0 == nand(1, 1));
  
  /* Dummy fail*/
  CU_ASSERT(0 == nand(1, 0));
}

void test_nor(void) {
  CU_ASSERT(0 == nor(1, 1));
  
  /* Dummy fail*/
  CU_ASSERT(0 == nor(0, 0));
}

void test_xor(void) {
  CU_ASSERT(1 == xor(0, 1));
  
  /* Dummy fail*/
  CU_ASSERT(1 == xor(0, 0));
}

void test_xnor(void) {
  CU_ASSERT(0 == xnor(0, 1));
  
  /* Dummy fail*/
  CU_ASSERT(0 == xnor(0, 0));
}
