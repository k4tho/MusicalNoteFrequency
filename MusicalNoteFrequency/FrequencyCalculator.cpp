#include "FrequencyCalculator.h"

FrequencyCalculator::FrequencyCalculator() {
}

FrequencyCalculator::~FrequencyCalculator() {
}

double FrequencyCalculator::CalculateFrequency(double octaveNumber, double halfStep) {
	double noteFrequency;

	noteFrequency = 16.35 * (pow(2, octaveNumber)) * pow((pow(2.0, 1.0 / 12.0)), halfStep);

	return noteFrequency;
}