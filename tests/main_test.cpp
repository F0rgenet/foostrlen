#include <gtest/gtest.h>
#include "functions.h"


TEST(FooStrLenTest, NullPointer) {
    EXPECT_EQ(fooStrLen(nullptr), 0);
}

TEST(FooStrLenTest, EmptyString) {
    EXPECT_EQ(fooStrLen(""), 0);
}

TEST(FooStrLenTest, SingleCharacter) {
    EXPECT_EQ(fooStrLen("a"), 1);
}

TEST(FooStrLenTest, RegularString) {
    EXPECT_EQ(fooStrLen("Hello, world!"), 13);
}

TEST(FooStrLenTest, StringWithSpaces) {
    EXPECT_EQ(fooStrLen("Hello, world! How are you?"), 26);
}

TEST(FooStrLenTest, StringWithSpecialCharacters) {
    EXPECT_EQ(fooStrLen("!@#$%^&*()_+"), 12);
}

int main(int argc, char **argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}