#ifndef QUATERNION_H
#define QUATERNION_H

struct Vector
{
    double i, j, k;
};

class Quaternion
{
public:
    double re, im_i, im_j, im_k, scalar, abs;
    Vector vector;

    Quaternion();

    Quaternion(double re, double im_i = 0, double im_j = 0, double im_k = 0);
    Quaternion(float re, float im_i = 0, float im_j = 0, float im_k = 0);
    Quaternion(int re, int im_i = 0, int im_j = 0, int im_k = 0);
    Quaternion Conjugate();
    double Abs();
    double Abs(double re, double im_i, double im_j, double im_k);
    double Arg(double re, double abs);
};

#endif