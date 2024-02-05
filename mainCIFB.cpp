#include <gtest/gtest.h>
#include "count_if_followed_by.h"

class YourCodeTest : public ::testing::Test {
protected:
    void SetUp() override {}
    void TearDown() override {}
};

TEST_F(YourCodeTest, CountIfFollowedByTest1) {
    char input[] = "abbcababca";
    char a = 'a';
    char b = 'b';
    int len = sizeof(input) - 1;
    int expected_count = 3;
    int result = count_if_followed_by(input, len, a, b);
    EXPECT_EQ(result, expected_count);
}

TEST_F(YourCodeTest, CountIfFollowedByTest2) {
    char input[] = "abb";
    char a = 'a';
    char b = 'b';
    int len = sizeof(input) - 1;
    int expected_count = 1;
    int result = count_if_followed_by(input, len, a, b);
    EXPECT_EQ(result, expected_count);
}

TEST_F(YourCodeTest, CountIfFollowedByTest3) {
    char input[] = "abcabcabc";
    char a = 'a';
    char b = 'c';
    int len = sizeof(input) - 1;
    int expected_count = 3;
    int result = count_if_followed_by(input, len, a, b);
    EXPECT_EQ(result, expected_count);
}

int main(int argc, char **argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
