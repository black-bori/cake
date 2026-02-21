#include "eltwise.hpp"

namespace cake {
namespace primitive {

void EltWise::Add(float src1, float src2, float* dst) {
    *dst = src1 + src2;
}

void EltWise::Sub(float src1, float src2, float* dst) {
    *dst = src1 - src2;
}

void EltWise::Mul(float src1, float src2, float* dst) {
    *dst = src1 * src2;
}

void EltWise::Div(float src1, float src2, float* dst) {
    *dst = src1 / src2;
}

} // namespace primitive
} // namespace cake