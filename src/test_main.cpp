#include <gtest/gtest.h>

#include "main.hpp"

// Test fixture class
class ExampleTest : public ::testing::Test {
   protected:
    void testCapitalize(int input) {
        char expected[32] = "This is an example function.";
        char result[32] = exampleFunction(input);
        EXPECT_EQ(result, expected);
    }
};

// Run all the tests
int main(int argc, char* argv[]) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}