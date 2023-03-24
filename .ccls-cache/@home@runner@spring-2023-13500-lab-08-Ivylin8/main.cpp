#include <iostream>
#include <string>
#include "funcs.h"
#include "imageio.h"

int main()
{

invert("image1.pgm");
invert_half("image1.pgm");
whiteBox ("image2.pgm");
  box ("image1.pgm");
  scale("image2.pgm");
  pixelate("image2.pgm");



}