#pragma once
#define _USE_MATH_DEFINES
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
    /// <summary>
    /// ������������ ����� ������������ �����
    /// </summary>
    double re;

    /// <summary>
    /// ������ ����� ������������ �����
    /// </summary>
    double im;

    /// <summary>
    /// ������ ������������ �����
    /// </summary>
    double abs;

    /// <summary>
    /// �������� ������������ �����
    /// </summary>
    double arg;

    string i;

    int sgn;

    /// <summary>
    /// ����������� ����� �� ��������� - 0+0j
    /// </summary>
    Complex();

    /// <summary>
    /// ����������� �����
    /// </summary>
    /// <param name="re">- ������������ ����� ������������ �����</param>
    /// <param name="im">- ������ ����� ������������ �����, �� ��������� - 0</param>
    Complex(double re, double im = 0, string i = "j");

    Complex(float re, float im = 0, string i = "j");

    Complex(int re, int im = 0, string i = "j");

    /// <summary>
    /// ����������� �����
    /// </summary>
    /// <param name="complex">- ������, ���������� ������ ����������� �����</param>
    Complex(string complex);

    /// <summary>
    /// ������ ������������ �����
    /// </summary>
    /// <param name="re">- ������������ ����� ������������ �����</param>
    /// <param name="im">- ������ ����� ������������ �����</param>
    /// <returns>������ ������������ �����</returns>
    double Abs(double re, double im);

    /// <summary>
    /// ������ ������������ �����
    /// </summary>
    /// <returns>������ ������������ �����</returns>
    double Abs();

    double Arg(double re, double im);

    double Arg();

    int Sgn();

    int Sgn(double re, double im);

    /// <summary>
    /// ����������-����������� �����
    /// </summary>
    /// <returns>����������-����������� �����</returns>
    Complex Conjugate();

    Complex Sqrt();

    /// <summary>
    /// �������� �������� ����������� �����
    /// </summary>
    /// <param name="z1">- ����������� �����</param>
    /// <param name="z2">- ����������� �����</param>
    /// <returns>����� ����������� �����</returns>
    friend Complex operator+(Complex z1, Complex z2);

    /// <summary>
    /// �������� �������� ������������ ����� � ������������
    /// </summary>
    /// <param name="z">- ����������� �����</param>
    /// <param name="d">- ������������ �����</param>
    /// <returns>����� ������������ � ������������� �����</returns>
    friend Complex operator+(Complex z, double d);

    friend Complex operator+(Complex z, float d);

    friend Complex operator+(Complex z, int d);

    /// <summary>
    /// �������� �������� ������������� ����� � �����������
    /// </summary>
    /// <param name="d">- ������������ �����</param>
    /// <param name="z">- ����������� �����</param>
    /// <returns>����� ������������� � ������������ �����</returns>
    friend Complex operator+(double d, Complex z);

    friend Complex operator+(float d, Complex z);

    friend Complex operator+(int d, Complex z);

    friend Complex& operator+=(Complex& z1, Complex& z2);

    friend Complex& operator+=(Complex& z1, double& d);

    friend Complex& operator+=(Complex& z1, float& d);

    friend Complex& operator+=(Complex& z1, int& d);

    /// <summary>
    /// �������� ��������� ����������� �����
    /// </summary>
    /// <param name="z1">- ����������� �����</param>
    /// <param name="z2">- ����������� �����</param>
    /// <returns>�������� ����������� �����</returns>
    friend Complex operator-(Complex z1, Complex z2);

    /// <summary>
    /// �������� ��������� ������������� ����� �� ������������ �����
    /// </summary>
    /// <param name="z">- ����������� �����</param>
    /// <param name="d">- ������������ �����</param>
    /// <returns>�������� ������������ � ������������� �����</returns>
    friend Complex operator-(Complex z, double d);

    friend Complex operator-(Complex z, float d);

    friend Complex operator-(Complex z, int d);

    /// <summary>
    /// �������� ��������� ������������ ����� �� ������������� �����
    /// </summary>
    /// <param name="d">- ������������ �����</param>
    /// <param name="z">- ����������� �����</param>
    /// <returns>�������� ������������� � ������������ �����</returns>
    friend Complex operator-(double d, Complex z);

    friend Complex operator-(float d, Complex z);

    friend Complex operator-(int d, Complex z);

    friend Complex& operator-=(Complex& z1, Complex& z2);

    friend Complex& operator-=(Complex& z1, double& d);

    friend Complex& operator-=(Complex& z1, float& d);

    friend Complex& operator-=(Complex& z1, int& d);

    /// <summary>
    /// �������� ��������� ����������� �����
    /// </summary>
    /// <param name="z1">- ����������� �����</param>
    /// <param name="z2">- ����������� �����</param>
    /// <returns></returns>
    friend Complex operator*(Complex z1, Complex z2);

    /// <summary>
    /// �������� ��������� ������������ ����� �� ������������
    /// </summary>
    /// <param name="z">- ����������� �����</param>
    /// <param name="d">- ������������ �����</param>
    /// <returns>������������ ������������ � ������������� �����</returns>
    friend Complex operator*(Complex z, double d);

    friend Complex operator*(Complex z, float d);

    friend Complex operator*(Complex z, int d);

    /// <summary>
    /// �������� ��������� ������������� ����� �� �����������
    /// </summary>
    /// <param name="d">- ������������ �����</param>
    /// <param name="z">- ����������� �����</param>
    /// <returns>������������ ������������ � ������������� �����</returns>
    friend Complex operator*(double d, Complex z);

    friend Complex operator*(float d, Complex z);

    friend Complex operator*(int d, Complex z);

    friend Complex& operator*=(Complex& z1, Complex& z2);

    friend Complex& operator*=(Complex& z1, double& d);

    friend Complex& operator*=(Complex& z1, float& d);

    friend Complex& operator*=(Complex& z1, int& d);

    /// <summary>
    /// �������� ������� ����������� �����
    /// </summary>
    /// <param name="z1">- ����������� �����</param>
    /// <param name="z2">- ����������� �����</param>
    /// <returns>������� ����������� �����</returns>
    friend Complex operator/(Complex z1, Complex z2);

    /// <summary>
    /// �������� ������� ������������ ����� �� ������������
    /// </summary>
    /// <param name="z">- ����������� �����</param>
    /// <param name="d">- ������������ �����</param>
    /// <returns>������� ������������ � ������������� �����</returns>
    friend Complex operator/(Complex z, double d);

    friend Complex operator/(Complex z, float d);

    friend Complex operator/(Complex z, int d);

    /// <summary>
    /// �������� ������� ������������� ����� �� �����������
    /// </summary>
    /// <param name="d">- ������������ �����</param>
    /// <param name="z">- ����������� �����</param>
    /// <returns>������� ������������� � ������������ �����</returns>
    friend Complex operator/(double d, Complex z);

    friend Complex operator/(float d, Complex z);

    friend Complex operator/(int d, Complex z);

    friend Complex& operator/=(Complex& z1, Complex& z2);

    friend Complex& operator/=(Complex& z1, double& d);

    friend Complex& operator/=(Complex& z1, float& d);

    friend Complex& operator/=(Complex& z1, int& d);

    Complex operator-() const;

    /// <summary>
    /// �������� ������ ������������ ����� � �������
    /// </summary>
    /// <param name="out">- ����� ������ � �������</param>
    /// <param name="z">- ����������� �����</param>
    /// <returns>����� ������������ ����� � �������</returns>
    friend ostream& operator<<(ostream& out, Complex z);

    /// <summary>
    /// �������������� ������������ ����� � ������, ���������� ��� ������
    /// </summary>
    /// <returns>������, ���������� ������ ������������ �����</returns>
    string ToString();
    string ToStringTrig();
    string ToStringExp();
    string ToStringExp2();
    string ToStringExp3();
};