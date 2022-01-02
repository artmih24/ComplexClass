#include "ParabolicComplex.h"
#define _USE_MATH_DEFINES
#include <cmath>
#include <string>
#include <iostream>
using namespace std;


ParabolicComplex::ParabolicComplex()
{
    this->re = 0;
    this->im = 0;
    this->abs = Abs(this->re, this->im);
    this->arg = Arg(this->re, this->im);
    this->i = "j";
}

ParabolicComplex::ParabolicComplex(double re, double im)
{
    this->re = re;
    this->im = im;
    this->abs = Abs(this->re, this->im);
    this->arg = Arg(this->re, this->im);
    this->i = i;
}

ParabolicComplex::ParabolicComplex(float re, float im)
{
    this->re = re;
    this->im = im;
    this->abs = Abs(this->re, this->im);
    this->arg = Arg(this->re, this->im);
    this->i = i;
}

ParabolicComplex::ParabolicComplex(int re, int im)
{
    this->re = re;
    this->im = im;
    this->abs = Abs(this->re, this->im);
    this->arg = Arg(this->re, this->im);
    this->i = i;
}

ParabolicComplex::ParabolicComplex(string parabolicComplex)
{
    string re_s, im_s;
    char* start = &parabolicComplex[0];
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

double ParabolicComplex::Abs(double re, double im)
{
    return sqrt(re * re + im * im);
}

double ParabolicComplex::Abs()
{
    return sqrt(this->re * this->re + this->im * this->im);
}

double ParabolicComplex::Arg(double re, double im)
{
    if (re > 0)
        return atan(im / re);
    else
        if (im > 0)
            return M_PI + atan(im / re);
        else
            return -M_PI + atan(im / re);
}

double ParabolicComplex::Arg()
{
    if (this->re > 0)
        return atan(this->im / this->re);
    else
        if (this->im > 0)
            return M_PI + atan(this->im / this->re);
        else
            return -M_PI + atan(this->im / this->re);
}

int ParabolicComplex::Sgn() {
    if (this->abs == 0)
        return 0;
    else {
        ParabolicComplex z = ParabolicComplex(this->re, this->im);
        ParabolicComplex abs = z / this->abs;
        double abs_d = abs.Abs();
        if (abs_d > 0)
            return 1;
        else
            return -1;
    }
}

//int ParabolicComplex::Sgn(double re, double im) {
//    double abs = Abs(re, im);
//    if (abs == 0)
//        return 0;
//    else {
//        ParabolicComplex z = ParabolicComplex(re, im);
//        ParabolicComplex abs = z / abs;
//        double abs_d = abs.Abs();
//        if (abs_d > 0)
//            return 1;
//        else
//            return -1;
//    }
//}

ParabolicComplex ParabolicComplex::Conjugate()
{
    return ParabolicComplex(this->re, -this->im);
}

ParabolicComplex ParabolicComplex::Sqrt() {
    ParabolicComplex z_im = ParabolicComplex(0.0, this->im);
    int im_sgn = z_im.Sgn();
    double r_re = sqrt(this->re + this->abs / 2);
    double r_im = im_sgn * sqrt(-this->re + this->abs / 2);
    return ParabolicComplex(r_re, r_im);
}

ParabolicComplex operator+(ParabolicComplex z1, ParabolicComplex z2)
{
    return ParabolicComplex(z1.re + z2.re, z1.im + z2.im);
}

ParabolicComplex operator+(ParabolicComplex z, double d)
{
    return ParabolicComplex(z.re + d, z.im);
}

ParabolicComplex operator+(ParabolicComplex z, float d)
{
    return ParabolicComplex(z.re + d, z.im);
}

ParabolicComplex operator+(ParabolicComplex z, int d)
{
    return ParabolicComplex(z.re + d, z.im);
}

ParabolicComplex operator+(double d, ParabolicComplex z)
{
    return ParabolicComplex(d + z.re, z.im);
}

ParabolicComplex operator+(float d, ParabolicComplex z)
{
    return ParabolicComplex(d + z.re, z.im);
}

ParabolicComplex operator+(int d, ParabolicComplex z)
{
    return ParabolicComplex(d + z.re, z.im);
}

ParabolicComplex& operator+=(ParabolicComplex& z1, ParabolicComplex& z2)
{
    z1 = z1 + z2;
    return z1;
}

ParabolicComplex& operator+=(ParabolicComplex& z1, double& d)
{
    z1 = z1 + d;
    return z1;
}

ParabolicComplex& operator+=(ParabolicComplex& z1, float& d)
{
    z1 = z1 + d;
    return z1;
}

ParabolicComplex& operator+=(ParabolicComplex& z1, int& d)
{
    z1 = z1 + d;
    return z1;
}

ParabolicComplex operator-(ParabolicComplex z1, ParabolicComplex z2)
{
    return ParabolicComplex(z1.re - z2.re, z1.im - z2.im);
}

ParabolicComplex operator-(ParabolicComplex z, double d)
{
    return ParabolicComplex(z.re - d, z.im);
}

ParabolicComplex operator-(ParabolicComplex z, float d)
{
    return ParabolicComplex(z.re - d, z.im);
}

ParabolicComplex operator-(ParabolicComplex z, int d)
{
    return ParabolicComplex(z.re - d, z.im);
}

ParabolicComplex operator-(double d, ParabolicComplex z)
{
    return ParabolicComplex(d - z.re, z.im);
}

ParabolicComplex operator-(float d, ParabolicComplex z)
{
    return ParabolicComplex(d - z.re, z.im);
}

ParabolicComplex operator-(int d, ParabolicComplex z)
{
    return ParabolicComplex(d - z.re, z.im);
}

ParabolicComplex& operator-=(ParabolicComplex& z1, ParabolicComplex& z2)
{
    z1 = z1 - z2;
    return z1;
}

ParabolicComplex& operator-=(ParabolicComplex& z1, double& d)
{
    z1 = z1 - d;
    return z1;
}

ParabolicComplex& operator-=(ParabolicComplex& z1, float& d)
{
    z1 = z1 - d;
    return z1;
}

ParabolicComplex& operator-=(ParabolicComplex& z1, int& d)
{
    z1 = z1 - d;
    return z1;
}

ParabolicComplex operator*(ParabolicComplex z1, ParabolicComplex z2)
{
    return ParabolicComplex(z1.re * z2.re, z1.re * z2.im + z1.im * z2.re);
}

ParabolicComplex operator*(ParabolicComplex z, double d)
{
    return ParabolicComplex(z.re * d, z.im * d);
}

ParabolicComplex operator*(ParabolicComplex z, float d)
{
    return ParabolicComplex(z.re * d, z.im * d);
}

ParabolicComplex operator*(ParabolicComplex z, int d)
{
    return ParabolicComplex(z.re * d, z.im * d);
}

ParabolicComplex operator*(double d, ParabolicComplex z)
{
    return ParabolicComplex(z.re * d, z.im * d);
}

ParabolicComplex operator*(float d, ParabolicComplex z)
{
    return ParabolicComplex(z.re * d, z.im * d);
}

ParabolicComplex operator*(int d, ParabolicComplex z)
{
    return ParabolicComplex(z.re * d, z.im * d);
}

ParabolicComplex& operator*=(ParabolicComplex& z1, ParabolicComplex& z2)
{
    z1 = z1 * z2;
    return z1;
}

ParabolicComplex& operator*=(ParabolicComplex& z1, double& d)
{
    z1 = z1 * d;
    return z1;
}

ParabolicComplex& operator*=(ParabolicComplex& z1, float& d)
{
    z1 = z1 * d;
    return z1;
}

ParabolicComplex& operator*=(ParabolicComplex& z1, int& d)
{
    z1 = z1 * d;
    return z1;
}

ParabolicComplex operator/(ParabolicComplex z1, ParabolicComplex z2)
{
    double resRe = (z1.re / z2.re);
    double resIm = (z2.re * z1.im + z1.re * z2.im) / (z2.re * z2.re);
    return ParabolicComplex(resRe, resIm);
}

ParabolicComplex operator/(ParabolicComplex z, double d)
{
    return ParabolicComplex(z.re / d, z.im / d);
}

ParabolicComplex operator/(ParabolicComplex z, float d)
{
    return ParabolicComplex(z.re / d, z.im / d);
}

ParabolicComplex operator/(ParabolicComplex z, int d)
{
    return ParabolicComplex(z.re / d, z.im / d);
}

ParabolicComplex operator/(double d, ParabolicComplex z)
{
    ParabolicComplex zz = ParabolicComplex(d);
    double resRe = (zz.re / z.re);
    double resIm = (z.re * zz.im + zz.re * z.im) / (z.re * z.re);
    return ParabolicComplex(resRe, resIm);
}

ParabolicComplex operator/(float d, ParabolicComplex z)
{
    ParabolicComplex zz = ParabolicComplex(d);
    double resRe = (zz.re / z.re);
    double resIm = (z.re * zz.im + zz.re * z.im) / (z.re * z.re);
    return ParabolicComplex(resRe, resIm);
}

ParabolicComplex operator/(int d, ParabolicComplex z)
{
    ParabolicComplex zz = ParabolicComplex(d);
    double resRe = (zz.re / z.re);
    double resIm = (z.re * zz.im + zz.re * z.im) / (z.re * z.re);
    return ParabolicComplex(resRe, resIm);
}

ParabolicComplex& operator/=(ParabolicComplex& z1, ParabolicComplex& z2)
{
    z1 = z1 / z2;
    return z1;
}

ParabolicComplex& operator/=(ParabolicComplex& z1, double& d)
{
    z1 = z1 / d;
    return z1;
}

ParabolicComplex& operator/=(ParabolicComplex& z1, float& d)
{
    z1 = z1 / d;
    return z1;
}

ParabolicComplex& operator/=(ParabolicComplex& z1, int& d)
{
    z1 = z1 / d;
    return z1;
}

ParabolicComplex ParabolicComplex::operator-() const {
    return ParabolicComplex(-this->re, -this->im);
}

ostream& operator<<(ostream& out, ParabolicComplex z)
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

string ParabolicComplex::ToString()
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