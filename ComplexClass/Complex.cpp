#include "Complex.h"
#include <cmath>
#include <string>
#include <iostream>
using namespace std;

Complex::Complex()
{
    this->re = 0;
    this->im = 0;
    this->abs = Abs(this->re, this->im);
}

Complex::Complex(double re, double im)
{
    this->re = re;
    this->im = im;
    this->abs = Abs(this->re, this->im);
}

Complex::Complex(float re, float im)
{
    this->re = re;
    this->im = im;
    this->abs = Abs(this->re, this->im);
}

Complex::Complex(int re, int im)
{
    this->re = re;
    this->im = im;
    this->abs = Abs(this->re, this->im);
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
}

double Complex::Abs(double re, double im)
{
    return sqrt(re * re + im * im);
}

double Complex::Abs()
{
    return sqrt(this->re * this->re + this->im * this->im);
}

Complex Complex::Conjugate()
{
    return Complex(this->re, -this->im);
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