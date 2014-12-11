#include "project.h"

UT_TEST(20_decimal_flags)
{
	UT_PRINTF_ASSERT("%ld\n", LONG_MAX);
	UT_PRINTF_ASSERT("%lld\n", LLONG_MAX);
	UT_PRINTF_ASSERT("%hd\n", SHRT_MAX);
	UT_PRINTF_ASSERT("%hd\n", 's');
	UT_PRINTF_ASSERT("%hhd\n", 'A');
	UT_PRINTF_ASSERT("%hhd\n", '|');
	UT_PRINTF_ASSERT("%jd\n", LLONG_MAX);
	UT_PRINTF_ASSERT("%zd\n", LONG_MAX);
	UT_PRINTF_ASSERT("%li\n", LONG_MAX);
	UT_PRINTF_ASSERT("%lli\n", LLONG_MAX);
	UT_PRINTF_ASSERT("%hi\n", SHRT_MAX);
	UT_PRINTF_ASSERT("%hhi\n", '@');
	UT_PRINTF_ASSERT("%hhi\n", 127);
	UT_PRINTF_ASSERT("%ji\n", LLONG_MAX);
	UT_PRINTF_ASSERT("%zi\n", LONG_MAX);
}
