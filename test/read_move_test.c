#include <libchessviz/read_move.h>

#include <ctest.h>

int symbol3[5] = {0,0,0,0,0};
int symbol4[5] = {0,0,0,0,0};



CTEST(read, test0)
{
    ASSERT_EQUAL(0, read_move(symbol3, "e2-e4"));
}

CTEST(read, test1)
{
    ASSERT_EQUAL(1, read_move(symbol4, "a2-3 "));
}

CTEST(read, test2)
{
    ASSERT_EQUAL(1, read_move(symbol3, "zzzzz"));
}

CTEST(read, test3)
{
    ASSERT_EQUAL(0, read_move(symbol4, "e2-a4"));
}

CTEST(read, test4)
{
    ASSERT_EQUAL(1, read_move(symbol3, "e2-ad"));
}
