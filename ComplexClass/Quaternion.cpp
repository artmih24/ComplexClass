#include "Quaternion.h"
#include "Complex.h"

Quaternion::Quaternion() {
	this->re = 0;
	this->im_i = 0;
	this->im_j = 0;
	this->im_k = 0;
	this->scalar = this->re;
	this->vector = { this->im_i, this->im_j, this->im_k };
	this->abs = Abs(this->re, this->im_i, this->im_j, this->im_k);
}

Quaternion::Quaternion(double re, double im_i, double im_j, double im_k) {
	this->re = re;
	this->im_i = im_i;
	this->im_j = im_j;
	this->im_k = im_k;
	this->scalar = this->re;
	this->vector = { this->im_i, this->im_j, this->im_k };
	this->abs = Abs(this->re, this->im_i, this->im_j, this->im_k);
}

Quaternion::Quaternion(float re, float im_i, float im_j, float im_k) {
	this->re = re;
	this->im_i = im_i;
	this->im_j = im_j;
	this->im_k = im_k;
	this->scalar = this->re;
	this->vector = { this->im_i, this->im_j, this->im_k };
	this->abs = Abs(this->re, this->im_i, this->im_j, this->im_k);
}

Quaternion::Quaternion(int re, int im_i, int im_j, int im_k) {
	this->re = re;
	this->im_i = im_i;
	this->im_j = im_j;
	this->im_k = im_k;
	this->scalar = this->re;
	this->vector = { this->im_i, this->im_j, this->im_k };
	this->abs = Abs(this->re, this->im_i, this->im_j, this->im_k);
}

Quaternion Quaternion::Conjugate() {
	return Quaternion(this->re, this->im_i, this->im_j, this->im_k);
}

double Quaternion::Abs() {
	return sqrt(this->re * this->re + this->im_i * this->im_i + this->im_j * this->im_j + this->im_k * this->im_k);
}

double Quaternion::Abs(double re, double im_i, double im_j, double im_k) {
	return sqrt(re * re + im_i * im_i + im_j * im_j + im_k * im_k);
}

double Quaternion::Arg(double re, double abs) {
	return acos(re / abs);
}

//int Quaternion::Sgn() {
//	if (this->abs == 0)
//		return 0;
//	else
//		if ((Quaternion(this->re, this->im_i, this->im_j, this->im_k) / this->abs).Abs() > 0)
//			return 1;
//		else
//			return -1;