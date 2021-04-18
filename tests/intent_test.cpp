#include <iostream>

#include "gtest/gtest.h"
#include "../apps/recognizer/include/intent.h"

TEST(Weather_test_case, basic_test_1)
{
    Recognizer rec_intent;
    std::stringstream sstr("What is the weather like today?");
    EXPECT_EQ("Intent: Get Weather", rec_intent.Get_Intent(sstr));
}
TEST(Weather_test_case, basic_test_Paris)
{
    Recognizer rec_intent;
    std::stringstream sstr("What is the weather like in Paris today?");
    EXPECT_EQ("Intent: Get Weather City ", rec_intent.Get_Intent(sstr));
}
TEST(Weather_test_case, basic_test_New_York)
{
    Recognizer rec_intent;
    std::stringstream sstr("What is the weather like in New York today?");
    EXPECT_EQ("Intent: Get Weather City ", rec_intent.Get_Intent(sstr));
}
TEST(Weather_test_case, advanced_test_Cairo)
{
    Recognizer rec_intent;
    std::stringstream sstr("What is the weather like in Cairo today?");
    EXPECT_EQ("Intent: Get Weather City ", rec_intent.Get_Intent(sstr));
}