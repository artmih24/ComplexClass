#include "Complex.h"
#define _USE_MATH_DEFINES
#include <cmath>
#include <string>
#include <iostream>
using namespace std;


Complex::Complex()
{
    this->re = 0;
    this->im = 0;
    this->abs = Abs(this->re, this->im);
    this->arg = Arg(this->re, this->im);
    this->i = "j";
}

Complex::Complex(double re, double im, string i)
{
    this->re = re;
    this->im = im;
    this->abs = Abs(this->re, this->im);
    this->arg = Arg(this->re, this->im);
    this->i = i;
}

Complex::Complex(float re, float im, string i)
{
    this->re = re;
    this->im = im;
    this->abs = Abs(this->re, this->im);
    this->arg = Arg(this->re, this->im);
    this->i = i;
}

Complex::Complex(int re, int im, string i)
{
    this->re = re;
    this->im = im;
    this->abs = Abs(this->re, this->im);
    this->arg = Arg(this->re, this->im);
    this->i = i;
}

Complex::Complex(string complex)
{
    string re_s, im_s;
    char* start = &complex[0];
    char* end = NULL;
    this->re = strtod(start, &end);
    if (start == end)
    {
        this->re = 0;
        this->im = 0;
        this->abs = Abs(this->re, this->im);
    }
    start = end;
    end = NULL;
    this->im = strtod(start, &end);
    if (start == end)
    {
        this->re = 0;
        this->im = 0;
        this->abs = Abs(this->re, this->im);
    }
    if ((*end != 'i') && (*end != 'j'))
    {
        this->re = 0;
        this->im = 0;
        this->abs = Abs(this->re, this->im);
    }
    this->abs = Abs(this->re, this->im);
    this->arg = Arg(this->re, this->im);
    this->i = i;
    this->sgn = Sgn(this->re, this->im);
}

double Complex::Abs(double re, double im)
{
    return sqrt(re * re + im * im);
}

double Complex::Abs()
{
    return sqrt(this->re * this->re + this->im * this->im);
}

double Complex::Arg(double re, double im)
{
    if (re > 0)
        return atan(im / re);
    else
        if (im > 0)
            return M_PI + atan(im / re);
        else
            return -M_PI + atan(im / re);
}

double Complex::Arg()
{
    if (this->re > 0)
        return atan(this->im / this->re);
    else
        if (this->im > 0)
            return M_PI + atan(this->im / this->re);
        else
            return -M_PI + atan(this->im / this->re);
}

int Complex::Sgn() {
    if (this->abs == 0)
        return 0;
    else {
        Complex z = Complex(this->re, this->im);
        Complex abs = z / this->abs;
        double abs_d = abs.Abs();
        if (abs_d > 0)
            return 1;
        else
            return -1;
    }
}

int Complex::Sgn(double re, double im) {
    double abs = Abs(re, im);
    if (abs == 0)
        return 0;
    else {
        Complex z = Complex(re, im);
        Complex abs = z / abs;
        double abs_d = abs.Abs();
        if (abs_d > 0)
            return 1;
        else
            return -1;
    }
}

Complex Complex::Conjugate()
{
    return Complex(this->re, -this->im);
}

Complex Complex::Sqrt() {
    Complex z_im = Complex(0.0, this->im);
    int im_sgn = z_im.Sgn();
    double r_re = sqrt(this->re + this->abs / 2);
    double r_im = im_sgn * sqrt(-this->re + this->abs / 2);
    return Complex(r_re, r_im);
}

Complex operator+(Complex z1, Complex z2)
{
    return Complex(z1.re + z2.re, z1.im + z2.im);
}

Complex operator+(Complex z, double d)
{
    return Complex(z.re + d, z.im);
}

Complex operator+(Complex z, float d)
{
    return Complex(z.re + d, z.im);
}

Complex operator+(Complex z, int d)
{
    return Complex(z.re + d, z.im);
}

Complex operator+(double d, Complex z)
{
    return Complex(d + z.re, z.im);
}

Complex operator+(float d, Complex z)
{
    return Complex(d + z.re, z.im);
}

Complex operator+(int d, Complex z)
{
    return Complex(d + z.re, z.im);
}

Complex& operator+=(Complex& z1, Complex& z2)
{
    z1 = z1 + z2;
    return z1;
}

Complex& operator+=(Complex& z1, double& d)
{
    z1 = z1 + d;
    return z1;
}

Complex& operator+=(Complex& z1, float& d)
{
    z1 = z1 + d;
    return z1;
}

Complex& operator+=(Complex& z1, int& d)
{
    z1 = z1 + d;
    return z1;
}

Complex operator-(Complex z1, Complex z2)
{
    return Complex(z1.re - z2.re, z1.im - z2.im);
}

Complex operator-(Complex z, double d)
{
    return Complex(z.re - d, z.im);
}

Complex operator-(Complex z, float d)
{
    return Complex(z.re - d, z.im);
}

Complex operator-(Complex z, int d)
{
    return Complex(z.re - d, z.im);
}

Complex operator-(double d, Complex z)
{
    return Complex(d - z.re, z.im);
}

Complex operator-(float d, Complex z)
{
    return Complex(d - z.re, z.im);
}

Complex operator-(int d, Complex z)
{
    return Complex(d - z.re, z.im);
}

Complex& operator-=(Complex& z1, Complex& z2)
{
    z1 = z1 - z2;
    return z1;
}

Complex& operator-=(Complex& z1, double& d)
{
    z1 = z1 - d;
    return z1;
}

Complex& operator-=(Complex& z1, float& d)
{
    z1 = z1 - d;
    return z1;
}

Complex& operator-=(Complex& z1, int& d)
{
    z1 = z1 - d;
    return z1;
}

Complex operator*(Complex z1, Complex z2)
{
    return Complex(z1.re * z2.re - z1.im * z2.im, z1.re * z2.im + z1.im * z2.re);
}

Complex operator*(Complex z, double d)
{
    return Complex(z.re * d, z.im * d);
}

Complex operator*(Complex z, float d)
{
    return Complex(z.re * d, z.im * d);
}

Complex operator*(Complex z, int d)
{
    return Complex(z.re * d, z.im * d);
}

Complex operator*(double d, Complex z)
{
    return Complex(z.re * d, z.im * d);
}

Complex operator*(float d, Complex z)
{
    return Complex(z.re * d, z.im * d);
}

Complex operator*(int d, Complex z)
{
    return Complex(z.re * d, z.im * d);
}

Complex& operator*=(Complex& z1, Complex& z2)
{
    z1 = z1 * z2;
    return z1;
}

Complex& operator*=(Complex& z1, double& d)
{
    z1 = z1 * d;
    return z1;
}

Complex& operator*=(Complex& z1, float& d)
{
    z1 = z1 * d;
    return z1;
}

Complex& operator*=(Complex& z1, int& d)
{
    z1 = z1 * d;
    return z1;
}

Complex operator/(Complex z1, Complex z2)
{
    double resRe = (z1.re * z2.re + z1.im * z2.im) / (z2.re * z2.re + z2.im * z2.im);
    double resIm = (z2.re * z1.im - z1.re * z2.im) / (z2.re * z2.re + z2.im * z2.im);
    return Complex(resRe, resIm);
}

Complex operator/(Complex z, double d)
{
    return Complex(z.re / d, z.im / d);
}

Complex operator/(Complex z, float d)
{
    return Complex(z.re / d, z.im / d);
}

Complex operator/(Complex z, int d)
{
    return Complex(z.re / d, z.im / d);
}

Complex operator/(double d, Complex z)
{
    Complex zz = Complex(d);
    double resRe = (zz.re * z.re + zz.im * z.im) / (z.re * z.re + z.im * z.im);
    double resIm = (z.re * zz.im - zz.re * z.im) / (z.re * z.re + z.im * z.im);
    return Complex(resRe, resIm);
}

Complex operator/(float d, Complex z)
{
    Complex zz = Complex(d);
    double resRe = (zz.re * z.re + zz.im * z.im) / (z.re * z.re + z.im * z.im);
    double resIm = (z.re * zz.im - zz.re * z.im) / (z.re * z.re + z.im * z.im);
    return Complex(resRe, resIm);
}

Complex operator/(int d, Complex z)
{
    Complex zz = Complex(d);
    double resRe = (zz.re * z.re + zz.im * z.im) / (z.re * z.re + z.im * z.im);
    double resIm = (z.re * zz.im - zz.re * z.im) / (z.re * z.re + z.im * z.im);
    return Complex(resRe, resIm);
}

Complex& operator/=(Complex& z1, Complex& z2)
{
    z1 = z1 / z2;
    return z1;
}

Complex& operator/=(Complex& z1, double& d)
{
    z1 = z1 / d;
    return z1;
}

Complex& operator/=(Complex& z1, float& d)
{
    z1 = z1 / d;
    return z1;
}

Complex& operator/=(Complex& z1, int& d)
{
    z1 = z1 / d;
    return z1;
}

Complex Complex::operator-() const {
    return Complex(-this->re, -this->im);
}

ostream& operator<<(ostream& out, Complex z)
{
    if ((z.re != 0) && (z.im != 0))
    {
        if (z.im >= 0)
            out << z.re << '+' << z.im << 'j';
        else // if (z.im < 0)
            out << z.re << z.im << 'j';
    }
    else
    {
        if (z.re != 0)
            out << z.re;
        else
        {
            if (z.im != 0)
                out << z.im << 'j';
            else
                out << 0;
        }
    }
    return out;
}

string Complex::ToString()
{
    if ((this->re != 0) && (this->im != 0))
    {
        if (this->im >= 0)
            return to_string(this->re) + '+' + to_string(this->im) + 'j';
        else // if (im < 0)
            return to_string(this->re) + to_string(this->im) + 'j';
    }
    else
    {
        if (this->re != 0)
            return to_string(this->re);
        else
        {
            if (this->im != 0)
                return to_string(this->im) + 'j';
            else
                return to_string(0);
        }
    }
}

string Complex::ToStringTrig()
{
    return to_string(this->abs) + " * (cos(" + to_string(this->arg) + ") + " + i + " * sin(" + to_string(this->arg) + "))";
}

string Complex::ToStringExp()
{
    return to_string(this->abs) + " * e ^ ("  + i + " * " + to_string(this->arg) + ")";
}

string Complex::ToStringExp2()
{
    return to_string(this->abs) + " * exp(" + i + " * " + to_string(this->arg) + ")";
}

string Complex::ToStringExp3()
{
    return to_string(this->abs) + " ∠ " + to_string(this->arg);
}