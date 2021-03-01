#ifndef __EuropeanOption_H
#define __EuropeanOption_H

class EuropeanOption
{
private:
	double K;
	double S;
	double r;
	double T;
	double sigma;

	void init();
	void copy(const EuropeanOption& rhs);

public:
	EuropeanOption();
	EuropeanOption(const EuropeanOption& rhs);
	EuropeanOption(double _K, double _S, double _r, double _T, double _sigma);
	virtual ~EuropeanOption();

	EuropeanOption& operator=(const EuropeanOption& rhs);

	double get_K() const;
	double get_S() const;
	double get_r() const;
	double get_T() const;
	double get_sigma() const;
};


#endif