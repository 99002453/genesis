#include "pch.cpp"
#include<iostream>
#include "gtest/gtest.h"
TEST(Point, distanceTest) {
    Point a1(4,3);
    EXPECT_EQ(5, a1.distancefromorigin());

}
TEST(Point, isorigin) {
    Point a1(2,5);
    EXPECT_EQ(false, a1.isorigin());
}
int main(int argc, char **argv) 
    {
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
    }

