#include "unity.h"
#include "factorial.h"

/* Required by the unity test framework */
void setUp(){}
/* Required by the unity test framework */
void tearDown(){}

void test_factorial_positive_num(void)
{
    long result = 1;
    TEST_ASSERT_EQUAL(SUCCESS, find_factorial(10,&result));
    TEST_ASSERT_EQUAL(3628800, result);
}
void test_factorial_negative_num(void)
{
    long result = 1;
    TEST_ASSERT_EQUAL(SUCCESS, find_factorial(10,&result));
}
int main(void)
{
/* Initiate the Unity Test Framework */
  UNITY_BEGIN();
  
  RUN_TEST(test_factorial_positive_num);
  /* Close the Unity Test Framework */
  return UNITY_END();
}