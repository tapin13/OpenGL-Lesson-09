#include "GL/freeglut.h"
#include "GL/gl.h"

float WinWid = 400.0;
float WinHei = 400.0;

void Draw() {
    glClear(GL_COLOR_BUFFER_BIT);
   
    glColor3f(1.0, 0.0, 0.0);
    
    glMatrixMode(GL_MODELVIEW);
    glLoadIdentity();
    glTranslatef(0.0, 10.0, 0.0);
    glutSolidSphere(5, 15, 15);
    glLoadIdentity();
    glTranslatef(10.0, 0.0, 0.0);
    glutSolidSphere(5, 15, 15);
    
    glutSwapBuffers();
}

void Initsialaize() {
    glClearColor(0.0, 0.0, 0.0, 1.0);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    glOrtho(-WinWid/2, WinWid/2, -WinHei/2, WinHei/2, -200.0, 200.0);
    glMatrixMode(GL_MODELVIEW);
}

int main(int argc, char** argv) {

    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_DOUBLE|GLUT_RGB);
    glutInitWindowSize(WinWid, WinHei);
    glutInitWindowPosition(100, 200);
    glutCreateWindow("Lesson 08");
    
    glutDisplayFunc(Draw);
    Initsialaize();
    glutMainLoop();
    
    return 0;
}