#include "processingFunctions.h"

//decode picture func
std::vector<int> decodePicture(const char* filename, int &testWidth, int &testHeight) {
	std::vector<unsigned char> image; //the raw pixels
	unsigned width, height;

	//decode
	unsigned error = lodepng::decode(image, width, height, filename);

	testWidth = width;
	testHeight = height;
	
	//if there's an error, display it
	if(error) std::cout << "decoder error " << error << ": " << lodepng_error_text(error) << std::endl;

	std::vector<int> intImage;

	for(std::vector<unsigned char>::iterator iter = image.begin(); iter != image.end(); ++iter)
	{
		intImage.push_back(*iter);
	}

	std::vector<int> bitImg;

	for(std::vector<int>::iterator iter = intImage.begin(); iter != intImage.end();)
	{
		if(*iter == 0 && *(iter+1) == 0 && *(iter+2) == 0)
		{
			bitImg.push_back(1);
		}
		else
		{
			bitImg.push_back(0);
		}
		
		iter = iter+4;
	}

	return bitImg;
}