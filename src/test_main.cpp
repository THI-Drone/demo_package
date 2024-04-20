#include <gtest/gtest.h>

#include "main.hpp"

// Test fixture class
class ExampleTest : public ::testing::Test {
   protected:
    void testCapitalize(int input) {
        char result[32] = exampleFunction(input);
        EXPECT_EQ(result, "This is an example function.");
    }
};

// Run all the tests
int main(int argc, char* argv[]) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}