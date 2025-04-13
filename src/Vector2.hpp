#pragma once

#include <iostream>
#include <cmath>

class Vector2 {
    public:
        int x;
        int y;

        Vector2();
        Vector2(int x, int y);

        Vector2 operator+(const Vector2 right);

        Vector2 &operator+=(const Vector2 right);

        Vector2 operator-(const Vector2 right);

        Vector2 &operator-=(const Vector2 right);
        
        Vector2 operator*(const Vector2 right);

        Vector2 &operator*=(const Vector2 right);

        Vector2 operator/(const Vector2 right);

        Vector2 &operator/=(const Vector2 right);

    private:
};

bool operator<(const Vector2& lhs, const Vector2& rhs);

bool operator>(const Vector2& lhs, const Vector2& rhs);

bool operator==(const Vector2& lhs, const Vector2& rhs);

bool operator!=(const Vector2& lhs, const Vector2& rhs);

bool operator<=(const Vector2& lhs, const Vector2& rhs);

bool operator>=(const Vector2& lhs, const Vector2& rhs);