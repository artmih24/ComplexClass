#pragma once
#define _USE_MATH_DEFINES
#include <cmath>
#include <string>
#include <iostream>
using namespace std;


/// <summary>
/// Комплексное число
/// </summary>
class Complex
{
public:
    /// <summary>
    /// Вещественная часть комплексного числа
    /// </summary>
    double re;

    /// <summary>
    /// Мнимая часть комплексного числа
    /// </summary>
    double im;

    /// <summary>
    /// Модуль комплексного числа
    /// </summary>
    double abs;

    /// <summary>
    /// Аргумент комплексного числа
    /// </summary>
    double arg;

    string i;

    int sgn;

    /// <summary>
    /// Комплексное число по умолчанию - 0+0j
    /// </summary>
    Complex();

    /// <summary>
    /// Комплексное число
    /// </summary>
    /// <param name="re">- вещественная часть комплексного числа</param>
    /// <param name="im">- мнимая часть комплексного числа, по умолчанию - 0</param>
    Complex(double re, double im = 0, string i = "j");

    Complex(float re, float im = 0, string i = "j");

    Complex(int re, int im = 0, string i = "j");

    /// <summary>
    /// Комплексное число
    /// </summary>
    /// <param name="complex">- строка, содержащая запись комплесного числа</param>
    Complex(string complex);

    /// <summary>
    /// Модуль комплексного числа
    /// </summary>
    /// <param name="re">- вещественная часть комплексного числа</param>
    /// <param name="im">- мнимая часть комплексного числа</param>
    /// <returns>Модуль комплексного числа</returns>
    double Abs(double re, double im);

    /// <summary>
    /// Модуль комплексного числа
    /// </summary>
    /// <returns>Модуль комплексного числа</returns>
    double Abs();

    double Arg(double re, double im);

    double Arg();

    int Sgn();

    int Sgn(double re, double im);

    /// <summary>
    /// Комплексно-сопряженное число
    /// </summary>
    /// <returns>Комплексно-сопряженное число</returns>
    Complex Conjugate();

    Complex Sqrt();

    /// <summary>
    /// Оператор сложения комплексных чисел
    /// </summary>
    /// <param name="z1">- комплексное число</param>
    /// <param name="z2">- комплексное число</param>
    /// <returns>Сумма комплексных чисел</returns>
    friend Complex operator+(Complex z1, Complex z2);

    /// <summary>
    /// Оператор сложения комплексного числа с вещественным
    /// </summary>
    /// <param name="z">- комплексное число</param>
    /// <param name="d">- вещественное число</param>
    /// <returns>Сумма комплексного и вещественного чисел</returns>
    friend Complex operator+(Complex z, double d);

    friend Complex operator+(Complex z, float d);

    friend Complex operator+(Complex z, int d);

    /// <summary>
    /// Оператор сложения вещественного числа с комплексным
    /// </summary>
    /// <param name="d">- вещественное число</param>
    /// <param name="z">- комплексное число</param>
    /// <returns>Сумма вещественного и комплексного чисел</returns>
    friend Complex operator+(double d, Complex z);

    friend Complex operator+(float d, Complex z);

    friend Complex operator+(int d, Complex z);

    friend Complex& operator+=(Complex& z1, Complex& z2);

    friend Complex& operator+=(Complex& z1, double& d);

    friend Complex& operator+=(Complex& z1, float& d);

    friend Complex& operator+=(Complex& z1, int& d);

    /// <summary>
    /// Оператор вычитания комплексных чисел
    /// </summary>
    /// <param name="z1">- комплексное число</param>
    /// <param name="z2">- комплексное число</param>
    /// <returns>Разность комплексных чисел</returns>
    friend Complex operator-(Complex z1, Complex z2);

    /// <summary>
    /// Оператор вычитания вещественного числа из комплексного числа
    /// </summary>
    /// <param name="z">- комплексное число</param>
    /// <param name="d">- вещественное число</param>
    /// <returns>Разность комплексного и вещественного чисел</returns>
    friend Complex operator-(Complex z, double d);

    friend Complex operator-(Complex z, float d);

    friend Complex operator-(Complex z, int d);

    /// <summary>
    /// Оператор вычитания комплексного числа из вещественного числа
    /// </summary>
    /// <param name="d">- вещественное число</param>
    /// <param name="z">- комплексное число</param>
    /// <returns>Разность вещественного и комплексного чисел</returns>
    friend Complex operator-(double d, Complex z);

    friend Complex operator-(float d, Complex z);

    friend Complex operator-(int d, Complex z);

    friend Complex& operator-=(Complex& z1, Complex& z2);

    friend Complex& operator-=(Complex& z1, double& d);

    friend Complex& operator-=(Complex& z1, float& d);

    friend Complex& operator-=(Complex& z1, int& d);

    /// <summary>
    /// Оператор умножения комплексных чисел
    /// </summary>
    /// <param name="z1">- комплексное число</param>
    /// <param name="z2">- комплексное число</param>
    /// <returns></returns>
    friend Complex operator*(Complex z1, Complex z2);

    /// <summary>
    /// Оператор умножения комплексного числа на вещественное
    /// </summary>
    /// <param name="z">- комплексное число</param>
    /// <param name="d">- вещественное число</param>
    /// <returns>Произведение комплексного и вещественного чисел</returns>
    friend Complex operator*(Complex z, double d);

    friend Complex operator*(Complex z, float d);

    friend Complex operator*(Complex z, int d);

    /// <summary>
    /// Оператор умножения вещественного числа на комплексное
    /// </summary>
    /// <param name="d">- вещественное число</param>
    /// <param name="z">- комплексное число</param>
    /// <returns>Произведение комплексного и вещественного чисел</returns>
    friend Complex operator*(double d, Complex z);

    friend Complex operator*(float d, Complex z);

    friend Complex operator*(int d, Complex z);

    friend Complex& operator*=(Complex& z1, Complex& z2);

    friend Complex& operator*=(Complex& z1, double& d);

    friend Complex& operator*=(Complex& z1, float& d);

    friend Complex& operator*=(Complex& z1, int& d);

    /// <summary>
    /// Оператор деления комплексных чисел
    /// </summary>
    /// <param name="z1">- комплексное число</param>
    /// <param name="z2">- комплексное число</param>
    /// <returns>Частное комплексных чисел</returns>
    friend Complex operator/(Complex z1, Complex z2);

    /// <summary>
    /// Оператор деления комплексного числа на вещественное
    /// </summary>
    /// <param name="z">- комплексное число</param>
    /// <param name="d">- вещественное число</param>
    /// <returns>Частное комплексного и вещественного чисел</returns>
    friend Complex operator/(Complex z, double d);

    friend Complex operator/(Complex z, float d);

    friend Complex operator/(Complex z, int d);

    /// <summary>
    /// Оператор деления вещественного числа на комплексное
    /// </summary>
    /// <param name="d">- вещественное число</param>
    /// <param name="z">- комплексное число</param>
    /// <returns>Частное вещественного и комплексного чисел</returns>
    friend Complex operator/(double d, Complex z);

    friend Complex operator/(float d, Complex z);

    friend Complex operator/(int d, Complex z);

    friend Complex& operator/=(Complex& z1, Complex& z2);

    friend Complex& operator/=(Complex& z1, double& d);

    friend Complex& operator/=(Complex& z1, float& d);

    friend Complex& operator/=(Complex& z1, int& d);

    Complex operator-() const;

    /// <summary>
    /// Оператор вывода комплексного числа в консоль
    /// </summary>
    /// <param name="out">- поток вывода в консоль</param>
    /// <param name="z">- комплексное число</param>
    /// <returns>Вывод комплексного числа в консоль</returns>
    friend ostream& operator<<(ostream& out, Complex z);

    /// <summary>
    /// Преобразование комплексного числа в строку, содержащую его запись
    /// </summary>
    /// <returns>Строка, содержащая запись комплексного числа</returns>
    string ToString();
    string ToStringTrig();
    string ToStringExp();
    string ToStringExp2();
    string ToStringExp3();
};