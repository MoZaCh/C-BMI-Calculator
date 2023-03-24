#include "BMICalculator.h"

/*
* Body Mass Index (BMI) Calculator
* 
* @param height - Takes height as double
* @param weight - Takes weight as double
* @return bmi - The given BMI for the values provided
*/
double BMICalculator(double height, double weight)
{
	double bmi = weight / (pow(height, 2));

	return bmi;
}