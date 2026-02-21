#pragma once

namespace cake {
namespace primitive {

class EltWise {
public:
    EltWise() = default;
    ~EltWise() = default;

    void Add(float src1, float src2, float* dst);
    void Sub(float src1, float src2, float* dst);
    void Mul(float src1, float src2, float* dst);
    void Div(float src1, float src2, float* dst);
};

} // namespace primitive
} // namespace cake