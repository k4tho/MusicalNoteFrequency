#include "WaveLengthCalculator.h"

WaveLengthCalculator::WaveLengthCalculator() {
}

WaveLengthCalculator::~WaveLengthCalculator() {
}

double WaveLengthCalculator::CalculateWaveLength(double frequency) {
	double waveLength;

	waveLength = 345.0 / frequency;
	waveLength = ConvertToCm(waveLength);

	return waveLength;
}

double WaveLengthCalculator::ConvertToCm(double frequency) {
	return frequency * 100;
}