#pragma once
#include <cmath>
#include <string>
#include <iostream>
using namespace std;

/// <summary>
/// ����������� �����
/// </summary>
class Complex
{
public:
    double re, im, abs, arg;

    /// <summary>
    /// ����������� ����� �� ���������
    /// </summary>
    Complex();

    /// <summary>
    /// ����������� �����
    /// </summary>
    /// <param name="p_re">- ������������ �����</param>
    /// <param name="p_im">- ������ �����, �� ��������� - 0</param>
    Complex(double re, double im = 0);

    /// <summary>
    /// ����������� �����
    /// </summary>
    /// <param name="complex">- ������, ���������� ������ ����������� �����</param>
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