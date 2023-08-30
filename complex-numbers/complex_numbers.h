#if !defined(COMPLEX_NUMBERS_H)
#define COMPLEX_NUMBERS_H

namespace complex_numbers {

class Complex {
    double r, i;
    public:
    Complex (double, double);
    double real() const;
    double imag() const;
    double abs() const;
    Complex conj() const;
    Complex exp() const;
    
};

Complex operator +(const Complex &lhs, const Complex &rhs);
Complex operator -(const Complex &lhs, const Complex &rhs);
Complex operator /(const Complex &lhs, const Complex &rhs);
Complex operator *(const Complex &lhs, const Complex &rhs);


}  // namespace complex_numbers

#endif  // COMPLEX_NUMBERS_H
