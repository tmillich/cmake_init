#include <gtest/gtest.h>

class HelloWorldTest : public testing::Test {
   protected:
    void SetUp() override {}

    void TearDown() override {}

   private:
};

// Demonstrate some basic assertions.
TEST_F(HelloWorldTest, BasicAssertions) {
    // Expect two strings not to be equal.
    EXPECT_STRNE("hello", "world");
    // Expect equality.
    EXPECT_EQ(7 * 6, 42);
}