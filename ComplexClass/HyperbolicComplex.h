#pragma once
#define _USE_MATH_DEFINES
#include <cmath>
#include <string>
#include <iostream>
using namespace std;

class HyperbolicComplex
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
    HyperbolicComplex();


    /// <summary>
    /// ����������� �����
    /// </summary>
    /// <param name="re">- ������������ ����� ������������ �����</param>
    /// <param name="im">- ������ ����� ������������ �����, �� ��������� - 0</param>
    HyperbolicComplex(double re, double im = 0);

    HyperbolicComplex(float re, float im = 0);

    HyperbolicComplex(int re, int im = 0);

    /// <summary>
    /// ����������� �����
    /// </summary>
    /// <param name="complex">- ������, ���������� ������ ����������� �����</param>
    HyperbolicComplex(string hyperbolicComplex);

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
    HyperbolicComplex Conjugate();

    HyperbolicComplex Sqrt();

    /// <summary>
    /// �������� �������� ����������� �����
    /// </summary>
    /// <param name="z1">- ����������� �����</param>
    /// <param name="z2">- ����������� �����</param>
    /// <returns>����� ����������� �����</returns>
    friend HyperbolicComplex operator+(HyperbolicComplex z1, HyperbolicComplex z2);

    /// <summary>
    /// �������� �������� ������������ ����� � ������������
    /// </summary>
    /// <param name="z">- ����������� �����</param>
    /// <param name="d">- ������������ �����</param>
    /// <returns>����� ������������ � ������������� �����</returns>
    friend HyperbolicComplex operator+(HyperbolicComplex z, double d);

    friend HyperbolicComplex operator+(HyperbolicComplex z, float d);

    friend HyperbolicComplex operator+(HyperbolicComplex z, int d);

    /// <summary>
    /// �������� �������� ������������� ����� � �����������
    /// </summary>
    /// <param name="d">- ������������ �����</param>
    /// <param name="z">- ����������� �����</param>
    /// <returns>����� ������������� � ������������ �����</returns>
    friend HyperbolicComplex operator+(double d, HyperbolicComplex z);

    friend HyperbolicComplex operator+(float d, HyperbolicComplex z);

    friend HyperbolicComplex operator+(int d, HyperbolicComplex z);

    friend HyperbolicComplex& operator+=(HyperbolicComplex& z1, HyperbolicComplex& z2);

    friend HyperbolicComplex& operator+=(HyperbolicComplex& z1, double& d);

    friend HyperbolicComplex& operator+=(HyperbolicComplex& z1, float& d);

    friend HyperbolicComplex& operator+=(HyperbolicComplex& z1, int& d);

    /// <summary>
    /// �������� ��������� ����������� �����
    /// </summary>
    /// <param name="z1">- ����������� �����</param>
    /// <param name="z2">- ����������� �����</param>
    /// <returns>�������� ����������� �����</returns>
    friend HyperbolicComplex operator-(HyperbolicComplex z1, HyperbolicComplex z2);

    /// <summary>
    /// �������� ��������� ������������� ����� �� ������������ �����
    /// </summary>
    /// <param name="z">- ����������� �����</param>
    /// <param name="d">- ������������ �����</param>
    /// <returns>�������� ������������ � ������������� �����</returns>
    friend HyperbolicComplex operator-(HyperbolicComplex z, double d);

    friend HyperbolicComplex operator-(HyperbolicComplex z, float d);

    friend HyperbolicComplex operator-(HyperbolicComplex z, int d);

    /// <summary>
    /// �������� ��������� ������������ ����� �� ������������� �����
    /// </summary>
    /// <param name="d">- ������������ �����</param>
    /// <param name="z">- ����������� �����</param>
    /// <returns>�������� ������������� � ������������ �����</returns>
    friend HyperbolicComplex operator-(double d, HyperbolicComplex z);

    friend HyperbolicComplex operator-(float d, HyperbolicComplex z);

    friend HyperbolicComplex operator-(int d, HyperbolicComplex z);

    friend HyperbolicComplex& operator-=(HyperbolicComplex& z1, HyperbolicComplex& z2);

    friend HyperbolicComplex& operator-=(HyperbolicComplex& z1, double& d);

    friend HyperbolicComplex& operator-=(HyperbolicComplex& z1, float& d);

    friend HyperbolicComplex& operator-=(HyperbolicComplex& z1, int& d);

    /// <summary>
    /// �������� ��������� ����������� �����
    /// </summary>
    /// <param name="z1">- ����������� �����</param>
    /// <param name="z2">- ����������� �����</param>
    /// <returns></returns>
    friend HyperbolicComplex operator*(HyperbolicComplex z1, HyperbolicComplex z2);

    /// <summary>
    /// �������� ��������� ������������ ����� �� ������������
    /// </summary>
    /// <param name="z">- ����������� �����</param>
    /// <param name="d">- ������������ �����</param>
    /// <returns>������������ ������������ � ������������� �����</returns>
    friend HyperbolicComplex operator*(HyperbolicComplex z, double d);

    friend HyperbolicComplex operator*(HyperbolicComplex z, float d);

    friend HyperbolicComplex operator*(HyperbolicComplex z, int d);

    /// <summary>
    /// �������� ��������� ������������� ����� �� �����������
    /// </summary>
    /// <param name="d">- ������������ �����</param>
    /// <param name="z">- ����������� �����</param>
    /// <returns>������������ ������������ � ������������� �����</returns>
    friend HyperbolicComplex operator*(double d, HyperbolicComplex z);

    friend HyperbolicComplex operator*(float d, HyperbolicComplex z);

    friend HyperbolicComplex operator*(int d, HyperbolicComplex z);

    friend HyperbolicComplex& operator*=(HyperbolicComplex& z1, HyperbolicComplex& z2);

    friend HyperbolicComplex& operator*=(HyperbolicComplex& z1, double& d);

    friend HyperbolicComplex& operator*=(HyperbolicComplex& z1, float& d);

    friend HyperbolicComplex& operator*=(HyperbolicComplex& z1, int& d);

    /// <summary>
    /// �������� ������� ����������� �����
    /// </summary>
    /// <param name="z1">- ����������� �����</param>
    /// <param name="z2">- ����������� �����</param>
    /// <returns>������� ����������� �����</returns>
    friend HyperbolicComplex operator/(HyperbolicComplex z1, HyperbolicComplex z2);

    /// <summary>
    /// �������� ������� ������������ ����� �� ������������
    /// </summary>
    /// <param name="z">- ����������� �����</param>
    /// <param name="d">- ������������ �����</param>
    /// <returns>������� ������������ � ������������� �����</returns>
    friend HyperbolicComplex operator/(HyperbolicComplex z, double d);

    friend HyperbolicComplex operator/(HyperbolicComplex z, float d);

    friend HyperbolicComplex operator/(HyperbolicComplex z, int d);

    /// <summary>
    /// �������� ������� ������������� ����� �� �����������
    /// </summary>
    /// <param name="d">- ������������ �����</param>
    /// <param name="z">- ����������� �����</param>
    /// <returns>������� ������������� � ������������ �����</returns>
    friend HyperbolicComplex operator/(double d, HyperbolicComplex z);

    friend HyperbolicComplex operator/(float d, HyperbolicComplex z);

    friend HyperbolicComplex operator/(int d, HyperbolicComplex z);

    friend HyperbolicComplex& operator/=(HyperbolicComplex& z1, HyperbolicComplex& z2);

    friend HyperbolicComplex& operator/=(HyperbolicComplex& z1, double& d);

    friend HyperbolicComplex& operator/=(HyperbolicComplex& z1, float& d);

    friend HyperbolicComplex& operator/=(HyperbolicComplex& z1, int& d);

    HyperbolicComplex operator-() const;

    /// <summary>
    /// �������� ������ ������������ ����� � �������
    /// </summary>
    /// <param name="out">- ����� ������ � �������</param>
    /// <param name="z">- ����������� �����</param>
    /// <returns>����� ������������ ����� � �������</returns>
    friend ostream& operator<<(ostream& out, HyperbolicComplex z);

    /// <summary>
    /// �������������� ������������ ����� � ������, ���������� ��� ������
    /// </summary>
    /// <returns>������, ���������� ������ ������������ �����</returns>
    string ToString();
};

