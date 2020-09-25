#include "pch.cpp"

TEST(a, b)
{
		Mytime a1;
		Mytime b(0, 0, 0);
		EXPECT_EQ(true, a1 == b);
		a1++;
		Mytime c(0, 1, 0);
		a1.display();
		EXPECT_EQ(false, a1 == c);
}
int main(int argc, char **argv) 
    {
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
    }
