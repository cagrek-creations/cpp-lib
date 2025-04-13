#include "Vector2.hpp"


Vector2::Vector2() : x(0), y(0) {}
Vector2::Vector2(int x, int y) : x(x), y(y) {}

Vector2 Vector2::operator+(const Vector2 right) {
    return Vector2(x + right.x, y + right.y);
}

Vector2 &Vector2::operator+=(const Vector2 right) {
    x += right.x;
    y += right.y;
    return *this;
}

Vector2 Vector2::operator-(const Vector2 right) {
    return Vector2(x - right.x, y - right.y);
}

Vector2 &Vector2::operator-=(const Vector2 right) {
    x -= right.x;
    y -= right.y;
    return *this;
}

Vector2 Vector2::operator*(const Vector2 right) {
    return Vector2(x * right.x, y * right.y);
}

Vector2 &Vector2::operator*=(const Vector2 right) {
    x *= right.x;
    y *= right.y;
    return *this;
}

Vector2 Vector2::operator/(const Vector2 right) {
    return Vector2(x / right.x, y / right.y);
}

Vector2 &Vector2::operator/=(const Vector2 right) {
    x /= right.x;
    y /= right.y;
    return *this;
}

bool operator<(const Vector2& lhs, const Vector2& rhs) {
    return ((lhs.x < rhs.x) || (lhs.x == rhs.x && lhs.y < rhs.y));
}

bool operator>(const Vector2& lhs, const Vector2& rhs) {
    return operator<(rhs, lhs);
}

bool operator==(const Vector2& lhs, const Vector2& rhs) {
    return (lhs.x == rhs.x && lhs.y == rhs.y);
}

bool operator!=(const Vector2& lhs, const Vector2& rhs) {
    return !operator==(lhs, rhs);
}

bool operator<=(const Vector2& lhs, const Vector2& rhs) {
    return !operator>(lhs, rhs);
}

bool operator>=(const Vector2& lhs, const Vector2& rhs) {
    return !operator<(lhs, rhs);
}