//Name: Nathaniel Maxwell
//ID: 816034720

#include <stddef.h>
#include "unity.h"
#include "calc.h"



void test_is_equal()
{
	TEST_ASSERT_TRUE(is_equal(255, 255));
	TEST_ASSERT_FALSE(is_equal(10, 9));
}

void test_posnum()
{
	TEST_ASSERT_TRUE(posnum(3));
}

int main(void)
{
	UNITY_BEGIN();
	
	RUN_TEST(test_is_equal);
	RUN_TEST(test_posnum);
	UNITY_END();

	return 0;
}
