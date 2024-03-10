#include <unity.h>
#include <logic.h>

void test_logic_add(void)
{
    TEST_ASSERT_EQUAL(5, add(2,3));
    TEST_ASSERT_NOT_EQUAL(5, add(2,2));
}

void test_logic_subtract(void)
{
    TEST_ASSERT_EQUAL(5, subtract(10,5));
    TEST_ASSERT_NOT_EQUAL(4, subtract(10,5));
}

void test_logic_multiply(void)
{
    TEST_ASSERT_EQUAL(10, multiply(2,5));
    TEST_ASSERT_NOT_EQUAL(4, multiply(10,5));
}

void test_logic_divide(void)
{
    TEST_ASSERT_EQUAL(5.0, divide(10,2));
    TEST_ASSERT_EQUAL(-1.0, divide(10,0));
}

void setUp(void)
{
}

void tearDown(void)
{
}

int main(void)
{
    UNITY_BEGIN();
    RUN_TEST(test_logic_add);
    RUN_TEST(test_logic_subtract);
    RUN_TEST(test_logic_multiply);
    RUN_TEST(test_logic_divide);
    return UNITY_END();
}

