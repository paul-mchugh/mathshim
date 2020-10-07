#include "math.h"

float __pow_finite(float x, float y)
{
	return pow(x,y);
}

float __powf_finite(float x, float y)
{
	return pow(x,y);
}

float __log10_finite(float x, float y)
{
	return log10(x);
}

float __log10f_finite(float x, float y)
{
	return log10(x);
}

float __log_finite(double x)
{
	return log(x);
}

float __logf_finite(double x)
{
	return log(x);
}

float __exp_finite(double x)
{
	return exp(x);
}

float __expf_finite(double x)
{
	return exp(x);
}
