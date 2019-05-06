//CMT using code from below sources and Craig Coleman. Final work released under GNU GPLv3+
// https://www.khronos.org/registry/OpenGL-Refpages/gl2.1/xhtml/glOrtho.xml
// g++ plotDB.cpp -lglut -lGL -o plotDB.o

#include <iostream>
#include <cmath>
#include <stdio.h>
#include "GL/glut.h"
#include "GL/gl.h"
using namespace std;

void plot2Dpoint(float x,float y, float red, float green, float blue){
  glColor3f(red, green, blue);
    glVertex2f(x, y);
}

//plotter function

void plotf() {
  // Coleman Block
  float x,y;
  float h,k;

  float red = 1.0,green = 0 ,blue = 0.0;
  glClearColor(0.4, 0.4, 0.4, 1.0);
  glClear(GL_COLOR_BUFFER_BIT);
  glColor3f(1.0, 1.0, 1.0);
  glOrtho(-400.0, 400.0, -400.0, 400.0, -400.0, 400.0);
  h = -1.0; k = -1.0;
  glPointSize(3.0);
  glBegin(GL_POINTS);// points

//x axis
  for (x = -400; x < 400; x++ ){
    plot2Dpoint(x, 0, 1, 1, 1);
  }
//y axis
  for (y = -400; y < 400; y++ ){
    plot2Dpoint(0, y, 1, 1, 1);
  }

//function
for (x = -400; x<400; x = x + pow(3, -6)){
   y = ((0.333 * pow(x, 3)) + pow(x, 2));
  plot2Dpoint((x*10), (y*10), 1,0,0);
  //cout<<x<<"\t"<<y<<"\n";
}

//derivative
for (x =-400; x<400; x = x+ pow(3, -6)){
  y = (9 *pow(x, 2)) + (2 *x);
  plot2Dpoint((x*10),(y*10), 0,0,1);
}
  //end block from Coleman
  glEnd();//end points
  glutSwapBuffers();
}


int main(int argc, char **argv)
{
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_DOUBLE);
    glutInitWindowSize(800, 800);
    glutInitWindowPosition(100, 100);
    glutCreateWindow("OpenGL -800x800");
    glutDisplayFunc(plotf);
    //glutDisplayFunc(fnDisplay);
    //glutReshapeFunc(fnReshape);
    glutMainLoop();
    return 0;
}
