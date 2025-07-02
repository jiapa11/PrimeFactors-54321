#include "gmock/gmock.h"
#include "prime-factors.cpp"

TEST(PrimeFactors, PrimeTest) {
    EXPECT_EQ(1, 1);
}

int main(void) {
    ::testing::InitGoogleTest();
    return RUN_ALL_TESTS();
}