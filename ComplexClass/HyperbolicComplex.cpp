#include "HyperbolicComplex.h"
#define _USE_MATH_DEFINES
#include <cmath>
#include <string>
#include <iostream>
using namespace std;


HyperbolicComplex::HyperbolicComplex()
{
    this->re = 0;
    this->im = 0;
    this->abs = Abs(this->re, this->im);
    this->arg = Arg(this->re, this->im);
    this->i = "j";
}

HyperbolicComplex::HyperbolicComplex(double re, double im)
{
    this->re = re;
    this->im = im;
    this->abs = Abs(this->re, this->im);
    this->arg = Arg(this->re, this->im);
    this->i = i;
}

HyperbolicComplex::HyperbolicComplex(float re, float im)
{
    this->re = re;
    this->im = im;
    this->abs = Abs(this->re, this->im);
    this->arg = Arg(this->re, this->im);
    this->i = i;
}

HyperbolicComplex::HyperbolicComplex(int re, int im)
{
    this->re = re;
    this->im = im;
    this->abs = Abs(this->re, this->im);
    this->arg = Arg(this->re, this->im);
    this->i = i;
}

HyperbolicComplex::HyperbolicComplex(string hyperbolicComplex)
{
    string re_s, im_s;
    char* start = &hyperbolicComplex[0];
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
}

double HyperbolicComplex::Abs(double re, double im)
{
    return sqrt(re * re + im * im);
}

double HyperbolicComplex::Abs()
{
    return sqrt(this->re * this->re + this->im * this->im);
}

double HyperbolicComplex::Arg(double re, double im)
{
    if (re > 0)
        return atan(im / re);
    else
        if (im > 0)
            return M_PI + atan(im / re);
        else
            return -M_PI + atan(im / re);
}

double HyperbolicComplex::Arg()
{
    if (this->re > 0)
        return atan(this->im / this->re);
    else
        if (this->im > 0)
            return M_PI + atan(this->im / this->re);
        else
            return -M_PI + atan(this->im / this->re);
}

int HyperbolicComplex::Sgn() {
    if (this->abs == 0)
        return 0;
    else {
        HyperbolicComplex z = HyperbolicComplex(this->re, this->im);
        HyperbolicComplex abs = z / this->abs;
        double abs_d = abs.Abs();
        if (abs_d > 0)
            return 1;
        else
            return -1;
    }
}

//int HyperbolicComplex::Sgn(double re, double im) {
//    double abs = Abs(re, im);
//    if (abs == 0)
//        return 0;
//    else {
//        HyperbolicComplex z = HyperbolicComplex(re, im);
//        HyperbolicComplex abs = z / abs;
//        double abs_d = abs.Abs();
//        if (abs_d > 0)
//            return 1;
//        else
//            return -1;
//    }
//}

HyperbolicComplex HyperbolicComplex::Conjugate()
{
    return HyperbolicComplex(this->re, -this->im);
}

HyperbolicComplex HyperbolicComplex::Sqrt() {
    HyperbolicComplex z_im = HyperbolicComplex(0.0, this->im);
    int im_sgn = z_im.Sgn();
    double r_re = sqrt(this->re + this->abs / 2);
    double r_im = im_sgn * sqrt(-this->re + this->abs / 2);
    return HyperbolicComplex(r_re, r_im);
}

HyperbolicComplex operator+(HyperbolicComplex z1, HyperbolicComplex z2)
{
    return HyperbolicComplex(z1.re + z2.re, z1.im + z2.im);
}

HyperbolicComplex operator+(HyperbolicComplex z, double d)
{
    return HyperbolicComplex(z.re + d, z.im);
}

HyperbolicComplex operator+(HyperbolicComplex z, float d)
{
    return HyperbolicComplex(z.re + d, z.im);
}

HyperbolicComplex operator+(HyperbolicComplex z, int d)
{
    return HyperbolicComplex(z.re + d, z.im);
}

HyperbolicComplex operator+(double d, HyperbolicComplex z)
{
    return HyperbolicComplex(d + z.re, z.im);
}

HyperbolicComplex operator+(float d, HyperbolicComplex z)
{
    return HyperbolicComplex(d + z.re, z.im);
}

HyperbolicComplex operator+(int d, HyperbolicComplex z)
{
    return HyperbolicComplex(d + z.re, z.im);
}

HyperbolicComplex& operator+=(HyperbolicComplex& z1, HyperbolicComplex& z2)
{
    z1 = z1 + z2;
    return z1;
}

HyperbolicComplex& operator+=(HyperbolicComplex& z1, double& d)
{
    z1 = z1 + d;
    return z1;
}

HyperbolicComplex& operator+=(HyperbolicComplex& z1, float& d)
{
    z1 = z1 + d;
    return z1;
}

HyperbolicComplex& operator+=(HyperbolicComplex& z1, int& d)
{
    z1 = z1 + d;
    return z1;
}

HyperbolicComplex operator-(HyperbolicComplex z1, HyperbolicComplex z2)
{
    return HyperbolicComplex(z1.re - z2.re, z1.im - z2.im);
}

HyperbolicComplex operator-(HyperbolicComplex z, double d)
{
    return HyperbolicComplex(z.re - d, z.im);
}

HyperbolicComplex operator-(HyperbolicComplex z, float d)
{
    return HyperbolicComplex(z.re - d, z.im);
}

HyperbolicComplex operator-(HyperbolicComplex z, int d)
{
    return HyperbolicComplex(z.re - d, z.im);
}

HyperbolicComplex operator-(double d, HyperbolicComplex z)
{
    return HyperbolicComplex(d - z.re, z.im);
}

HyperbolicComplex operator-(float d, HyperbolicComplex z)
{
    return HyperbolicComplex(d - z.re, z.im);
}

HyperbolicComplex operator-(int d, HyperbolicComplex z)
{
    return HyperbolicComplex(d - z.re, z.im);
}

HyperbolicComplex& operator-=(HyperbolicComplex& z1, HyperbolicComplex& z2)
{
    z1 = z1 - z2;
    return z1;
}

HyperbolicComplex& operator-=(HyperbolicComplex& z1, double& d)
{
    z1 = z1 - d;
    return z1;
}

HyperbolicComplex& operator-=(HyperbolicComplex& z1, float& d)
{
    z1 = z1 - d;
    return z1;
}

HyperbolicComplex& operator-=(HyperbolicComplex& z1, int& d)
{
    z1 = z1 - d;
    return z1;
}

HyperbolicComplex operator*(HyperbolicComplex z1, HyperbolicComplex z2)
{
    return HyperbolicComplex(z1.re * z2.re + z1.im * z2.im, z1.re * z2.im + z1.im * z2.re);
}

HyperbolicComplex operator*(HyperbolicComplex z, double d)
{
    return HyperbolicComplex(z.re * d, z.im * d);
}

HyperbolicComplex operator*(HyperbolicComplex z, float d)
{
    return HyperbolicComplex(z.re * d, z.im * d);
}

HyperbolicComplex operator*(HyperbolicComplex z, int d)
{
    return HyperbolicComplex(z.re * d, z.im * d);
}

HyperbolicComplex operator*(double d, HyperbolicComplex z)
{
    return HyperbolicComplex(z.re * d, z.im * d);
}

HyperbolicComplex operator*(float d, HyperbolicComplex z)
{
    return HyperbolicComplex(z.re * d, z.im * d);
}

HyperbolicComplex operator*(int d, HyperbolicComplex z)
{
    return HyperbolicComplex(z.re * d, z.im * d);
}

HyperbolicComplex& operator*=(HyperbolicComplex& z1, HyperbolicComplex& z2)
{
    z1 = z1 * z2;
    return z1;
}

HyperbolicComplex& operator*=(HyperbolicComplex& z1, double& d)
{
    z1 = z1 * d;
    return z1;
}

HyperbolicComplex& operator*=(HyperbolicComplex& z1, float& d)
{
    z1 = z1 * d;
    return z1;
}

HyperbolicComplex& operator*=(HyperbolicComplex& z1, int& d)
{
    z1 = z1 * d;
    return z1;
}

HyperbolicComplex operator/(HyperbolicComplex z1, HyperbolicComplex z2)
{
    double resRe = (z1.re * z2.re - z1.im * z2.im) / (z2.re * z2.re - z2.im * z2.im);
    double resIm = (z2.re * z1.im - z1.re * z2.im) / (z2.re * z2.re - z2.im * z2.im);
    return HyperbolicComplex(resRe, resIm);
}

HyperbolicComplex operator/(HyperbolicComplex z, double d)
{
    return HyperbolicComplex(z.re / d, z.im / d);
}

HyperbolicComplex operator/(HyperbolicComplex z, float d)
{
    return HyperbolicComplex(z.re / d, z.im / d);
}

HyperbolicComplex operator/(HyperbolicComplex z, int d)
{
    return HyperbolicComplex(z.re / d, z.im / d);
}

HyperbolicComplex operator/(double d, HyperbolicComplex z)
{
    HyperbolicComplex zz = HyperbolicComplex(d);
    double resRe = (zz.re * z.re + zz.im * z.im) / (z.re * z.re + z.im * z.im);
    double resIm = (z.re * zz.im - zz.re * z.im) / (z.re * z.re + z.im * z.im);
    return HyperbolicComplex(resRe, resIm);
}

HyperbolicComplex operator/(float d, HyperbolicComplex z)
{
    HyperbolicComplex zz = HyperbolicComplex(d);
    double resRe = (zz.re * z.re + zz.im * z.im) / (z.re * z.re + z.im * z.im);
    double resIm = (z.re * zz.im - zz.re * z.im) / (z.re * z.re + z.im * z.im);
    return HyperbolicComplex(resRe, resIm);
}

HyperbolicComplex operator/(int d, HyperbolicComplex z)
{
    HyperbolicComplex zz = HyperbolicComplex(d);
    double resRe = (zz.re * z.re + zz.im * z.im) / (z.re * z.re + z.im * z.im);
    double resIm = (z.re * zz.im - zz.re * z.im) / (z.re * z.re + z.im * z.im);
    return HyperbolicComplex(resRe, resIm);
}

HyperbolicComplex& operator/=(HyperbolicComplex& z1, HyperbolicComplex& z2)
{
    z1 = z1 / z2;
    return z1;
}

HyperbolicComplex& operator/=(HyperbolicComplex& z1, double& d)
{
    z1 = z1 / d;
    return z1;
}

HyperbolicComplex& operator/=(HyperbolicComplex& z1, float& d)
{
    z1 = z1 / d;
    return z1;
}

HyperbolicComplex& operator/=(HyperbolicComplex& z1, int& d)
{
    z1 = z1 / d;
    return z1;
}

HyperbolicComplex HyperbolicComplex::operator-() const {
    return HyperbolicComplex(-this->re, -this->im);
}

ostream& operator<<(ostream& out, HyperbolicComplex z)
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

string HyperbolicComplex::ToString()
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