#include <string>
#include "imageio.h"

/* ORIGINAL CODE:
void invert (std::string);
void invert_half(std::string input);
void whiteBox(std::string input);
void box(std::string input);
void scale(std::string input);
void pixelate(std::string input);
*/

// Changes made by Humayra
void invert(int image[MAX_H][MAX_W], int &height, int &width);
void invert_half(int image[MAX_H][MAX_W], int &height, int &width);
void box(int image[MAX_H][MAX_W], int &height, int &width);
void frame(int image[MAX_H][MAX_W], int &height, int &width);
void scale(int image[MAX_H][MAX_W], int &height, int &width);
void pixelate(int image[MAX_H][MAX_W], int &height, int &width);