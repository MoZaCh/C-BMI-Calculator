#include "BMICalculator.h"


double BMICalculator(double height, double weight)
{
	double bmi = weight / (pow(height, 2));

	return bmi;
}