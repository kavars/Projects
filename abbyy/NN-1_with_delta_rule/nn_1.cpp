#include "processingFunctions.h"

int main() {

	int testWidth;
	int testHeight;
	std::vector<int> test = decodePicture("misc/ENG001.png", testWidth, testHeight);

	int count = 0;


	
	for(std::vector<int>::const_iterator iter = test.begin(); iter != test.end(); ++iter)
	{
		std::cout << *iter;
		++count;
		if(count == testWidth)
		{
			std::cout << std::endl;
			count = 0;
		}
	}

	return 0;

}