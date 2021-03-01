#ifndef _EuropeanOption_CPP
#define _EuropeanOption_CPP

#include "EuropeanOption.h"
#include <cmath>

void EuropeanOption::init()
{
	S = 50;
	K = 60, 
	r = 0.05;
	T = 1;
	sigma = 0.15;
}

void EuropeanOption::copy(const EuropeanOption& rhs)
{
	S = rhs.get_S();
	K = rhs.get_K();
	r = rhs.get_r();
	T = rhs.get_T();
	sigma = rhs.get_sigma();
}

EuropeanOption::EuropeanOption()
{
	init();
}

EuropeanOption::EuropeanOption(const EuropeanOption& rhs)
{
	copy(rhs);
}

EuropeanOption::EuropeanOption(double _K, double _S, double _r, double _T, double _sigma)
{
	K = _K;
	S = _S;
	r = _r;
	T = _T;
	sigma = _sigma;
}

EuropeanOption& EuropeanOption::operator=(const EuropeanOption& rhs)
{
	if (this == &rhs)
	{
		return *this;
	}
	copy(rhs);
	return *this;
}

EuropeanOption::~EuropeanOption(){}

double EuropeanOption::get_T() const {return T;}
double EuropeanOption::get_S() const {return S;}
double EuropeanOption::get_r() const {return r;}
double EuropeanOption::get_K() const {return K;}
double EuropeanOption::get_sigma() const {return sigma;}


#endif

















