#include <cmath>
#include <string>
#include <iostream>
#include "Complex.h"
using namespace std;

class Complex
{
public:
    double re, im, abs, arg;

    Complex()
    {
        re = 0;
        im = 0;
        abs = Abs(re, im);
    }

    Complex(double p_re, double p_im = 0)
    {
        re = p_re;
        im = p_im;
        abs = Abs(re, im);
    }

    Complex(string complex)
    {
        string re_s, im_s;
        char* start = &complex[0];
        char* end = NULL;
        re = strtod(start, &end);
        if (start == end)
        {
            re = 0;
            im = 0;
            abs = Abs(re, im);
        }
        start = end;
        end = NULL;
        im = strtod(start, &end);
        if (start == end)
        {
            re = 0;
            im = 0;
            abs = Abs(re, im);
        }
        if ((*end != 'i') && (*end != 'j'))
        {
            re = 0;
            im = 0;
            abs = Abs(re, im);
        }
        abs = Abs(re, im);
    }

    double Abs(double p_re, double p_im)
    {
        return sqrt(p_re * p_re + p_im * p_im);
    }

    double Abs()
    {
        return sqrt(re * re + im * im);
    }

    Complex Conjugate()
    {
        return Complex(re, -im);
    }

    friend Complex operator+(Complex z1, Complex z2)
    {
        return Complex(z1.re + z2.re, z1.im + z2.im);
    }

    friend Complex operator+(Complex z, double d)
    {
        return Complex(z.re + d, z.im);
    }

    friend Complex operator+(double d, Complex z)
    {
        return Complex(d + z.re, z.im);
    }

    friend Complex operator-(Complex z1, Complex z2)
    {
        return Complex(z1.re - z2.re, z1.im - z2.im);
    }

    friend Complex operator-(Complex z, double d)
    {
        return Complex(z.re - d, z.im);
    }

    friend Complex operator-(double d, Complex z)
    {
        return Complex(d - z.re, z.im);
    }

    friend Complex operator*(Complex z1, Complex z2)
    {
        return Complex(z1.re * z2.re - z1.im * z2.im, z1.re * z2.im + z1.im * z2.re);
    }

    friend Complex operator*(Complex z, double d)
    {
        return Complex(z.re * d, z.im * d);
    }

    friend Complex operator*(double d, Complex z)
    {
        return Complex(z.re * d, z.im * d);
    }

    friend Complex operator/(Complex z1, Complex z2)
    {
        double resRe = (z1.re * z2.re + z1.im * z2.im) / (z2.re * z2.re + z2.im * z2.im);
        double resIm = (z2.re * z1.im - z1.re * z2.im) / (z2.re * z2.re + z2.im * z2.im);
        return Complex(resRe, resIm);
    }

    friend Complex operator/(Complex z, double d)
    {
        return Complex(z.re / d, z.im / d);
    }

    friend Complex operator/(double d, Complex z)
    {
        Complex zz = Complex(d);
        double resRe = (zz.re * z.re + zz.im * z.im) / (z.re * z.re + z.im * z.im);
        double resIm = (z.re * zz.im - zz.re * z.im) / (z.re * z.re + z.im * z.im);
        return Complex(resRe, resIm);
    }

    friend ostream& operator<<(ostream& out, Complex z)
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

    string ToString()
    {
        if ((re != 0) && (im != 0))
        {
            if (im >= 0)
                return to_string(re) + '+' + to_string(im) + 'j';
            else // if (im < 0)
                return to_string(re) + to_string(im) + 'j';
        }
        else
        {
            if (re != 0)
                return to_string(re);
            else
            {
                if (im != 0)
                    return to_string(im) + 'j';
                else
                    return to_string(0);
            }
        }
    }
};