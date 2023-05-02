#include <iostream>
#include <string>
#include <fstream>
#include <string>
#include "funcs.h"
#include "imageio.h"

int main()
{
	int image[MAX_H][MAX_W];
	int height = 0;
	int width = 0;
	std::string input("image1.pgm");
	readImage(input,image,height,width);
	
	invert(image,height,width);
	invert_half(image,height,width);
	box(image,height,width);
	frame(image,height,width);
	scale(image,height,width);
	pixelate(image,height,width);
	return 0;

}