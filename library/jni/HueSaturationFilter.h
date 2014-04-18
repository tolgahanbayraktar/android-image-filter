/*
 * HueSaturationFilter.h
 *
 *  Created on: 2014-4-17
 *      Author: ragnarok
 */

#ifndef HUESATURATIONFILTER_H_
#define HUESATURATIONFILTER_H_

#include "ImageFilter.h"
#include "ColorTranslator.h"

class HueSaturationFilter : public ImageFilter {
public:
	HueSaturationFilter(int *pixels, int width, int height);
	~HueSaturationFilter();
	int* procImage();
	int* setHue(double hue);
	int* setSaturation(double saturation);
private:
//	HSI* originPixelsHSI;
//	bool isInitOriginHSI;
};




#endif /* HUESATURATIONFILTER_H_ */
