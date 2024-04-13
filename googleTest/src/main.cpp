//使用google test进行单元测试
#include <gtest/gtest.h>
#include <iostream>
#include "MockUser.h"
int add(int a, int b) {
	return a + b;
}

TEST(testCase1, should_3_when_1_add_2) {
	EXPECT_EQ(3, add(1, 2));
}

TEST(testCase2, test) {
	MockUser user;
	EXPECT_CALL(user, get_name()).Times(testing::AtLeast(3)).
	WillOnce(testing::Return("one")).
	WillOnce(testing::Return("two")).
	WillRepeatedly(testing::Return("other"));

	std::cout << user.get_name() << std::endl;
	std::cout << user.get_name() << std::endl;
	std::cout << user.get_name() << std::endl;
	std::cout << user.get_name() << std::endl;
	std::cout << user.get_name() << std::endl;
	std::cout << user.get_name() << std::endl;
}

int main(int argc, char **argv) {
	std::cout << "hello world" << std::endl;
	testing::InitGoogleTest(&argc, argv);
	return RUN_ALL_TESTS();
}