// .hpp      a C++ header file that contains declarations (interfaces)

#pragma once

namespace dotty {

    struct Vector3 {
        float x{0.0f};
        float y{0.0f};
        float z{0.0f};
    };

    float length (const Vector3& v);                // calculate vector length (magnitude)
    Vector3 normalize(const Vector3& v);            // shrink vector so its length is exactly 1.0
    float dot(const Vector3& a, const Vector3& b);  // dot product

} // namespace dotty