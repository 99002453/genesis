#include "pch.cpp"
#include<gtest/gtest.h>

TEST(customer, ParameterizedConstructor) {
    customer a1(1001, "Lippman", 5000.0);
    EXPECT_EQ(5000, a1.getbalance());
}
int main(int argc, char **argv) 
    {
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
    }