#ifndef WAVELENGTH
#define WAVELENGTH

#include <cmath>

class WaveLengthCalculator {
	public:
		WaveLengthCalculator();
		~WaveLengthCalculator();
		double CalculateWaveLength(double frequency);
	private:
		double ConvertToCm(double frequency);
	};

#endif
