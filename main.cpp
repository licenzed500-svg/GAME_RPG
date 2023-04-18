#include <GLFW/glfw3.h>
#include <GLUT/GLUT.h>
#include "Swordsman.h"
#include "Knight.h"

void renderScene(void) {
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
    
    double cnvCoordX(double x);
    double cnvCoordY(double y);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    glOrtho(0.0f, 1600, 900, 0.0f, 0.0f, 1.0f);
    //drawSwordsman();
    drawKnight();
    
    glutSwapBuffers();
}


int main(int argc, char* argv[])
{
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_DEPTH | GLUT_DOUBLE | GLUT_RGBA);
    glutInitWindowPosition(100,100);
    glutInitWindowSize(1152,648);
    glutCreateWindow("OpenGL Start Application");
    glutDisplayFunc(renderScene);
    glutMainLoop();
    return 0;
}
