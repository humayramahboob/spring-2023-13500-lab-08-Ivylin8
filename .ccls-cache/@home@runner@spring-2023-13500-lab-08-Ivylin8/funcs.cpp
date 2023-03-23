#include <iostream>
#include <string>
#include "funcs.h"

//Task A
void invert(std::string filename){
    int height, width;
    int image[MAX_H][MAX_W];
    
    readImage(filename, image, height,width);
    for (int row = 0; row<height; row++){
        for (int col = 0; col<width; col++){
            image[row][col] = abs(image[row][col]-225);
        }
    }
    writeImage("taskA.pgm", image, height, width);
}

//task b
void invert_half(std::string input){
  int height, width;
  int image[MAX_H][MAX_W];
  readImage(input, image, height,width);
  int out[MAX_H] [MAX_W];
  
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
void whiteBox(std::string input){
  int height, width;
  int image[MAX_H][MAX_W];
  readImage(input, image, height,width);
 int out[MAX_H] [MAX_W];

for (int row = 0; row < height; row++){
  for (int col = 0; col < width; col++){
    out [row][col] = 225;
  }
}
writeImage ("taskB.pgm",out,height,width);
  }

//Task C
void box(std::string input){
  int height, width;
  int image[MAX_H][MAX_W];
  readImage(input, image, height,width);
 int out[MAX_H] [MAX_W];

for (int row = 0; row < height; row++){
  for (int col = 0; col < width; col++){
    if (col >= height/d)&&(row<=height*3/4)&&col>=width/4)&&(col<=width*3/4))
				image[row][col] = 255;
  }
}
writeImage ("taskC.pgm",out,height,width);
}

//Task D
void frame(std::string input){
  int height, width;
  int image[MAX_H][MAX_W];
  readImage(input, image, height,width);
 int out[MAX_H] [MAX_W];

for (int row = height /4; row < height * 3/4; row++){
  for (int col = width /4; col < width *3.4; col++){
    if (row == height / 4 || row == height * 3/4 - 1 || col == width / 4 || col == width * 3/4 - 1)){
      image[row][col]=225;
    }
  }
}
writeImage ("taskD.pgm",out,height,width);
}

