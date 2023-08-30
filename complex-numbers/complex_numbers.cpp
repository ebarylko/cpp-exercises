#include "complex_numbers.h"
#include <cmath>
using namespace std;
namespace complex_numbers {

Complex::Complex (double r, double i) {
    this->r = r;
    this->i = i;
}

double Complex::real() const {
    return r;
}

double Complex::imag() const {
    return i;
}

double Complex::abs() const {
    double a = pow(r, 2), b = pow(i, 2);
    double c = a + b;
    return sqrt(c);
}

Complex Complex::conj() const {
    return Complex(r, -i);
}

Complex Complex::exp() const {
    double a = ::exp(r); 
    return Complex(a * cos(i), a * sin(i));
}

Complex operator +(const Complex &lhs, const Complex &rhs) {
    double new_r = lhs.real() + rhs.real();
    double new_i = lhs.imag() + rhs.imag();
    return Complex(new_r, new_i);
}

Complex operator -(const Complex &lhs, const Complex &rhs) {
    double new_r = lhs.real() - rhs.real();
    double new_i = lhs.imag() - rhs.imag();
    return Complex(new_r, new_i);
}


Complex operator *(const Complex &lhs, const Complex &rhs) {
    double a = lhs.real(), b = lhs.imag(), c = rhs.real(), d = rhs.imag();
    double new_r = (a * c) - (b * d);
    double new_i = (b * c) + (a * d);
    return Complex(new_r, new_i);
}

Complex operator /(const Complex &lhs, const Complex &rhs) {
    double a = lhs.real(), b = lhs.imag(), c = rhs.real(), d = rhs.imag();
    double divisor = pow(rhs.abs(), 2);
    double new_r = ((a * c) + (b * d)) / divisor;
    double new_i = ((b * c) - (a * d)) / divisor;
    return Complex(new_r, new_i);
}

}  // namespace complex_numbers
