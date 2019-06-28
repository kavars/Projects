#ifndef __PROCESSINGFUNCTIONS_H__
#define __PROCESSINGFUNCTIONS_H__

#include <iostream>
#include <string>
#include <fstream>
#include <vector>
#include <cstdlib>
#include <ctime>
#include <cmath>

#include "lib/lodepng.h"

std::vector<int> decodePicture(const char* filename, int &testWidth, int &testHeight);

#endif //__PROCESSINGFUNCTIONS_H__