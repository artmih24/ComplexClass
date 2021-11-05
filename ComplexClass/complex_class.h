#pragma once
#include <cmath>
#include <string>
#include <iostream>
using namespace std;

class Complex
{
public:
    double re, im, abs, arg;

    Complex();

    Complex(double p_re, double p_im = 0);

    Complex(string complex);

    double Abs(double p_re, double p_im);

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