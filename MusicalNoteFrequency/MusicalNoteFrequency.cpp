#include "FrequencyCalculator.h"
#include "WaveLengthCalculator.h"

#include <iostream>

int main() {
	WaveLengthCalculator waveLengthCalculator;
	FrequencyCalculator frequencyCalculator;

	double frequency;
	double waveLength;

	std::cout << "Reference Speed: 16.35 Hz" << std::endl;
	std::cout << "Speed of Sound: 345 m/s" << std::endl;

	frequency = frequencyCalculator.CalculateFrequency(0, 0);
	waveLength = waveLengthCalculator.CalculateWaveLength(frequency);
	std::cout << "Note: C0; nu: 0; k: 0; frequency: " << frequency << " Hz; wavelength: " << waveLength << " cm" << std::endl;

	frequency = frequencyCalculator.CalculateFrequency(0, 1);
	waveLength = waveLengthCalculator.CalculateWaveLength(frequency);
	std::cout << "Note: C#0; nu: 0; k: 1; frequency: " << frequency << " Hz; wavelength: " << waveLength << " cm" << std::endl;

	frequency = frequencyCalculator.CalculateFrequency(0, 2);
	waveLength = waveLengthCalculator.CalculateWaveLength(frequency);
	std::cout << "Note: D0; nu: 0; k: 2; frequency: " << frequency << " Hz; wavelength: " << waveLength << " cm" << std::endl;

	frequency = frequencyCalculator.CalculateFrequency(4, 0);
	waveLength = waveLengthCalculator.CalculateWaveLength(frequency);
	std::cout << "Note: C4; nu: 4; k: 0; frequency: " << frequency << " Hz; wavelength: " << waveLength << " cm" << std::endl;

	frequency = frequencyCalculator.CalculateFrequency(7, 3);
	waveLength = waveLengthCalculator.CalculateWaveLength(frequency);
	std::cout << "Note: D#7; nu: 7; k: 3; frequency: " << frequency << " Hz; wavelength: " << waveLength << " cm" << std::endl;

	frequency = frequencyCalculator.CalculateFrequency(8, 0);
	waveLength = waveLengthCalculator.CalculateWaveLength(frequency);
	std::cout << "Note: C8; nu: 8; k: 0; frequency: " << frequency << " Hz; wavelength: " << waveLength << " cm" << std::endl;
	return 0;
}
