#include <gtest/gtest.h>
#include "eltwise.hpp"

using namespace cake::primitive;

TEST(EltWiseTest, Add) {
    EltWise eltwise;
    float dst = 0.0f;
    eltwise.Add(2.0f, 3.0f, &dst);
    EXPECT_FLOAT_EQ(dst, 5.0f);
}

TEST(EltWiseTest, Sub) {
    EltWise eltwise;
    float dst = 0.0f;
    eltwise.Sub(5.0f, 3.0f, &dst);
    EXPECT_FLOAT_EQ(dst, 2.0f);
}

TEST(EltWiseTest, Mul) {
    EltWise eltwise;
    float dst = 0.0f;
    eltwise.Mul(2.0f, 3.0f, &dst);
    EXPECT_FLOAT_EQ(dst, 6.0f);
}

TEST(EltWiseTest, Div) {
    EltWise eltwise;
    float dst = 0.0f;
    eltwise.Div(6.0f, 2.0f, &dst);
    EXPECT_FLOAT_EQ(dst, 3.0f);
}
