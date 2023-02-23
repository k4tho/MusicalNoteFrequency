#ifndef FREQUENCYCALCULATOR
#define FREQUENCYCALCULATOR

#include <cmath>

class FrequencyCalculator {
	public:
		FrequencyCalculator();
		~FrequencyCalculator();
		double CalculateFrequency(double octaveNumber, double halfStep);
};

#endif