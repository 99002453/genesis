#include "pch.cpp"


TEST(Currency_values, DefaultConstructor)
{
	Currency c(20,95);
	Currency c1(11);
	EXPECT_EQ(1, c1.rupees());
	EXPECT_EQ(20,c.rupees());
	Currency c2(10, 99);
	c2++;
	EXPECT_EQ(100, c2.paise());
}
int main(int argc, char **argv) 
    {
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
    }
