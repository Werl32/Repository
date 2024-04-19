#include "pch.h"
#include "C:\Users\User\source\repos\Google_Test_Projects\App_Increase\App_Increase.cpp"
#include <iostream>
#include <vector>
TEST(TestCaseName, TestName) {
	vector<int> v{1,4,5,3,7};
	EXPECT_EQ(6, Increase(v, 5));
}