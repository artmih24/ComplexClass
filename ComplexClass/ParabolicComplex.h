#pragma once
#define _USE_MATH_DEFINES
#include <cmath>
#include <string>
#include <iostream>
using namespace std;

class ParabolicComplex
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
    ParabolicComplex();


    /// <summary>
    /// ����������� �����
    /// </summary>
    /// <param name="re">- ������������ ����� ������������ �����</param>
    /// <param name="im">- ������ ����� ������������ �����, �� ��������� - 0</param>
    ParabolicComplex(double re, double im = 0);

    ParabolicComplex(float re, float im = 0);

    ParabolicComplex(int re, int im = 0);

    /// <summary>
    /// ����������� �����
    /// </summary>
    /// <param name="complex">- ������, ���������� ������ ����������� �����</param>
    ParabolicComplex(string parabolicComplex);

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

    //int Sgn(double re, double im);

    /// <summary>
    /// ����������-����������� �����
    /// </summary>
    /// <returns>����������-����������� �����</returns>
    ParabolicComplex Conjugate();

    ParabolicComplex Sqrt();

    /// <summary>
    /// �������� �������� ����������� �����
    /// </summary>
    /// <param name="z1">- ����������� �����</param>
    /// <param name="z2">- ����������� �����</param>
    /// <returns>����� ����������� �����</returns>
    friend ParabolicComplex operator+(ParabolicComplex z1, ParabolicComplex z2);

    /// <summary>
    /// �������� �������� ������������ ����� � ������������
    /// </summary>
    /// <param name="z">- ����������� �����</param>
    /// <param name="d">- ������������ �����</param>
    /// <returns>����� ������������ � ������������� �����</returns>
    friend ParabolicComplex operator+(ParabolicComplex z, double d);

    friend ParabolicComplex operator+(ParabolicComplex z, float d);

    friend ParabolicComplex operator+(ParabolicComplex z, int d);

    /// <summary>
    /// �������� �������� ������������� ����� � �����������
    /// </summary>
    /// <param name="d">- ������������ �����</param>
    /// <param name="z">- ����������� �����</param>
    /// <returns>����� ������������� � ������������ �����</returns>
    friend ParabolicComplex operator+(double d, ParabolicComplex z);

    friend ParabolicComplex operator+(float d, ParabolicComplex z);

    friend ParabolicComplex operator+(int d, ParabolicComplex z);

    friend ParabolicComplex& operator+=(ParabolicComplex& z1, ParabolicComplex& z2);

    friend ParabolicComplex& operator+=(ParabolicComplex& z1, double& d);

    friend ParabolicComplex& operator+=(ParabolicComplex& z1, float& d);

    friend ParabolicComplex& operator+=(ParabolicComplex& z1, int& d);

    /// <summary>
    /// �������� ��������� ����������� �����
    /// </summary>
    /// <param name="z1">- ����������� �����</param>
    /// <param name="z2">- ����������� �����</param>
    /// <returns>�������� ����������� �����</returns>
    friend ParabolicComplex operator-(ParabolicComplex z1, ParabolicComplex z2);

    /// <summary>
    /// �������� ��������� ������������� ����� �� ������������ �����
    /// </summary>
    /// <param name="z">- ����������� �����</param>
    /// <param name="d">- ������������ �����</param>
    /// <returns>�������� ������������ � ������������� �����</returns>
    friend ParabolicComplex operator-(ParabolicComplex z, double d);

    friend ParabolicComplex operator-(ParabolicComplex z, float d);

    friend ParabolicComplex operator-(ParabolicComplex z, int d);

    /// <summary>
    /// �������� ��������� ������������ ����� �� ������������� �����
    /// </summary>
    /// <param name="d">- ������������ �����</param>
    /// <param name="z">- ����������� �����</param>
    /// <returns>�������� ������������� � ������������ �����</returns>
    friend ParabolicComplex operator-(double d, ParabolicComplex z);

    friend ParabolicComplex operator-(float d, ParabolicComplex z);

    friend ParabolicComplex operator-(int d, ParabolicComplex z);

    friend ParabolicComplex& operator-=(ParabolicComplex& z1, ParabolicComplex& z2);

    friend ParabolicComplex& operator-=(ParabolicComplex& z1, double& d);

    friend ParabolicComplex& operator-=(ParabolicComplex& z1, float& d);

    friend ParabolicComplex& operator-=(ParabolicComplex& z1, int& d);

    /// <summary>
    /// �������� ��������� ����������� �����
    /// </summary>
    /// <param name="z1">- ����������� �����</param>
    /// <param name="z2">- ����������� �����</param>
    /// <returns></returns>
    friend ParabolicComplex operator*(ParabolicComplex z1, ParabolicComplex z2);

    /// <summary>
    /// �������� ��������� ������������ ����� �� ������������
    /// </summary>
    /// <param name="z">- ����������� �����</param>
    /// <param name="d">- ������������ �����</param>
    /// <returns>������������ ������������ � ������������� �����</returns>
    friend ParabolicComplex operator*(ParabolicComplex z, double d);

    friend ParabolicComplex operator*(ParabolicComplex z, float d);

    friend ParabolicComplex operator*(ParabolicComplex z, int d);

    /// <summary>
    /// �������� ��������� ������������� ����� �� �����������
    /// </summary>
    /// <param name="d">- ������������ �����</param>
    /// <param name="z">- ����������� �����</param>
    /// <returns>������������ ������������ � ������������� �����</returns>
    friend ParabolicComplex operator*(double d, ParabolicComplex z);

    friend ParabolicComplex operator*(float d, ParabolicComplex z);

    friend ParabolicComplex operator*(int d, ParabolicComplex z);

    friend ParabolicComplex& operator*=(ParabolicComplex& z1, ParabolicComplex& z2);

    friend ParabolicComplex& operator*=(ParabolicComplex& z1, double& d);

    friend ParabolicComplex& operator*=(ParabolicComplex& z1, float& d);

    friend ParabolicComplex& operator*=(ParabolicComplex& z1, int& d);

    /// <summary>
    /// �������� ������� ����������� �����
    /// </summary>
    /// <param name="z1">- ����������� �����</param>
    /// <param name="z2">- ����������� �����</param>
    /// <returns>������� ����������� �����</returns>
    friend ParabolicComplex operator/(ParabolicComplex z1, ParabolicComplex z2);

    /// <summary>
    /// �������� ������� ������������ ����� �� ������������
    /// </summary>
    /// <param name="z">- ����������� �����</param>
    /// <param name="d">- ������������ �����</param>
    /// <returns>������� ������������ � ������������� �����</returns>
    friend ParabolicComplex operator/(ParabolicComplex z, double d);

    friend ParabolicComplex operator/(ParabolicComplex z, float d);

    friend ParabolicComplex operator/(ParabolicComplex z, int d);

    /// <summary>
    /// �������� ������� ������������� ����� �� �����������
    /// </summary>
    /// <param name="d">- ������������ �����</param>
    /// <param name="z">- ����������� �����</param>
    /// <returns>������� ������������� � ������������ �����</returns>
    friend ParabolicComplex operator/(double d, ParabolicComplex z);

    friend ParabolicComplex operator/(float d, ParabolicComplex z);

    friend ParabolicComplex operator/(int d, ParabolicComplex z);

    friend ParabolicComplex& operator/=(ParabolicComplex& z1, ParabolicComplex& z2);

    friend ParabolicComplex& operator/=(ParabolicComplex& z1, double& d);

    friend ParabolicComplex& operator/=(ParabolicComplex& z1, float& d);

    friend ParabolicComplex& operator/=(ParabolicComplex& z1, int& d);

    ParabolicComplex operator-() const;

    /// <summary>
    /// �������� ������ ������������ ����� � �������
    /// </summary>
    /// <param name="out">- ����� ������ � �������</param>
    /// <param name="z">- ����������� �����</param>
    /// <returns>����� ������������ ����� � �������</returns>
    friend ostream& operator<<(ostream& out, ParabolicComplex z);

    /// <summary>
    /// �������������� ������������ ����� � ������, ���������� ��� ������
    /// </summary>
    /// <returns>������, ���������� ������ ������������ �����</returns>
    string ToString();
};

