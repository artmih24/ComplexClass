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

    /// <summary>
    /// ����������� ����� �� ��������� - 0+0j
    /// </summary>
    Complex();

    /// <summary>
    /// ����������� �����
    /// </summary>
    /// <param name="re">- ������������ ����� ������������ �����</param>
    /// <param name="im">- ������ ����� ������������ �����, �� ��������� - 0</param>
    Complex(double re, double im = 0);

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

    /// <summary>
    /// ����������-����������� �����
    /// </summary>
    /// <returns>����������-����������� �����</returns>
    Complex Conjugate();

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

    /// <summary>
    /// �������� �������� ������������� ����� � �����������
    /// </summary>
    /// <param name="d">- ������������ �����</param>
    /// <param name="z">- ����������� �����</param>
    /// <returns>����� ������������� � ������������ �����</returns>
    friend Complex operator+(double d, Complex z);

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

    /// <summary>
    /// �������� ��������� ������������ ����� �� ������������� �����
    /// </summary>
    /// <param name="d">- ������������ �����</param>
    /// <param name="z">- ����������� �����</param>
    /// <returns>�������� ������������� � ������������ �����</returns>
    friend Complex operator-(double d, Complex z);

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

    /// <summary>
    /// �������� ��������� ������������� ����� �� �����������
    /// </summary>
    /// <param name="d">- ������������ �����</param>
    /// <param name="z">- ����������� �����</param>
    /// <returns>������������ ������������ � ������������� �����</returns>
    friend Complex operator*(double d, Complex z);

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

    /// <summary>
    /// �������� ������� ������������� ����� �� �����������
    /// </summary>
    /// <param name="d">- ������������ �����</param>
    /// <param name="z">- ����������� �����</param>
    /// <returns>������� ������������� � ������������ �����</returns>
    friend Complex operator/(double d, Complex z);

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
};