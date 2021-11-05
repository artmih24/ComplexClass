#pragma once
#include <cmath>
#include <string>
#include <iostream>
using namespace std;

/// <summary>
/// Комплексное число
/// </summary>
class Complex
{
public:
    double re, im, abs, arg;

    /// <summary>
    /// Комплексное число по умолчанию
    /// </summary>
    Complex();

    /// <summary>
    /// Комплексное число
    /// </summary>
    /// <param name="p_re">- вещественная часть</param>
    /// <param name="p_im">- мнимая часть, по умолчанию - 0</param>
    Complex(double re, double im = 0);

    /// <summary>
    /// Комплексное число
    /// </summary>
    /// <param name="complex">- строка, содержащая запись комплесного числа</param>
    Complex(string complex);

    double Abs(double re, double im);

    double Abs();

    Complex Conjugate();

    friend Complex operator+(Complex z1, Complex z2);

    friend Complex operator+(Complex z, double d);

    friend Complex operator+(double d, Complex z);

    friend Complex operator-(Complex z1, Complex z2);

    friend Complex operator-(Complex z, double d);

    friend Complex operator-(double d, Complex z);

    friend Complex operator*(Complex z1, Complex z2);

    friend Complex operator*(Complex z, double d);

    friend Complex operator*(double d, Complex z);

    friend Complex operator/(Complex z1, Complex z2);

    friend Complex operator/(Complex z, double d);

    friend Complex operator/(double d, Complex z);

    friend ostream& operator<<(ostream& out, Complex z);

    string ToString();
};