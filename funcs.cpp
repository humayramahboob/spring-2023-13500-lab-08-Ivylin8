#include <iostream>
#include <string>
#include "funcs.h"
#include "imageio.h"

// CHANGES MADE BY HUMAYRA: Change the function name, and tried minimizing the lines of code necessary.

//Task A
//void invert(std::string filename){
//    int height, width;
void invert(int image[MAX_H][MAX_W], int& height, int& width) {
//	int image[MAX_H][MAX_W];
    
 //   readImage(filename, image, height,width);
    for (int row = 0; row<height; row++){
        for (int col = 0; col<width; col++){
            image[row][col] = abs(image[row][col]-225);
        }
    }
    writeImage("taskA.pgm", image, height, width);
}


//task b

/*void invert_half(std::string input){
  int height, width;
  int image[MAX_H][MAX_W];
  readImage(input, image, height,width);
  */ 
void invert_half(int image[MAX_H][MAX_W], int& height, int &width) {
	int out[MAX_H][MAX_W];
	
	for (int row = 0; row < height; row ++){
		for (int col = 0; col < width; col++){
			if (col >= width/2){
				out[row][col] = image[row][col];
			}
		}
	}
writeImage ("taskB.pgm",out,height,width);
}
  
//Task C
/*void box(std::string input){
  int height, width;
  int image[MAX_H][MAX_W];
  readImage(input, image, height,width);
*/
void box(int image[MAX_H][MAX_W], int &height, int &width) {
	int out[MAX_H] [MAX_W];
	for (int row = 0; row < height; row++){
		for (int col = 0; col < width; col++){
			if ((col >= height/4)&&(row<=height*3/4)&&(col>=width/4)&&(col<=width*3/4)) {
				image[row][col] = 255;
			}
		}
	}
	writeImage ("taskC.pgm",out,height,width);
}

//Task D
/* void frame(std::string input){
  int height, width;
  int image[MAX_H][MAX_W];
  readImage(input, image, height,width);
 */
void frame(int image[MAX_H][MAX_W], int &height, int &width) {
	int out[MAX_H] [MAX_W];
	for (int row = height /4; row < height * 3/4; row++){
		for (int col = width /4; col < width *3.4; col++){
			if (row == height / 4 || row == height * 3/4 - 1 || col == width / 4 || col == width * 3/4 - 1){
				image[row][col]=225;
			}
		}
	}
	writeImage("taskD.pgm",out,height,width);
}


//Task E
/*void scale(std::string input){
  int height, width;
  int image[MAX_H][MAX_W];
  int output[MAX_H][MAX_W];
  readImage(input, image, height,width);
  */
void scale(int image[MAX_H][MAX_W], int &height, int &width) {
	int output[MAX_H] [MAX_W];
	for (int row = 0; row < height; row++){
		for (int col = 0; col < width; col++){
			output[row * 2][col * 2] = image[row][col];
			output[row * 2][col * 2 + 1] = image[row][col];
			output[row * 2 + 1][col * 2] = image[row][col];
			output[row * 2 + 1][col * 2 + 1] = image[row][col];
		}
	}
	height *= 2;
	width *= 2;
	writeImage ("taskE.pgm",output,height,width);
}

//Task F
/*void pixelate(std::string input) {
  int height, width;
  int image[MAX_H][MAX_W];
  readImage(input, image, height, width);
*/
void pixelate(int image[MAX_H][MAX_W], int &height, int &width) {
	const int PIXEL_SIZE = 2;
	for (int row = 0; row < height; row += PIXEL_SIZE) {
		for (int col = 0; col < width; col += PIXEL_SIZE) {
			int sum = 0;
			for (int i = row; i < row + PIXEL_SIZE; i++) {
				for (int j = col; j < col + PIXEL_SIZE; j++) {
					sum += image[i][j];
				}
			}
			int avg = sum / (PIXEL_SIZE * PIXEL_SIZE); 
			for (int i = row; i < row + PIXEL_SIZE; i++) {
				for (int j = col; j < col + PIXEL_SIZE; j++) {
					image[i][j] = avg; 
				}
			}
		}
	}
	writeImage("taskF.pgm", image, height, width); 
}


