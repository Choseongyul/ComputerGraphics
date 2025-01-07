#include <windows.h>
#include <GL/gl.h>
#include <GL/glu.h>
#include <GL/glut.h>
#include <fstream>
#include <cmath>
#define M_PI 3.141592653589

const int NUM_DINO = 12; // °ø·æÀÇ °³¼ö
const float R = 500.0f;  // ¿øÀÇ ¹ÝÁö¸§

void drawPolyLineFile(const char* fileName) {
    std::ifstream inStream;
    inStream.open(fileName);
    if (inStream.fail())
        return;

    GLint numPolys, numLines, x, y;
    inStream >> numPolys;
    for (int j = 0; j < numPolys; j++) {
        inStream >> numLines;
        glBegin(GL_LINE_STRIP); // draw the next polyline
        for (int i = 0; i < numLines; i++) {
            inStream >> x >> y; // next x, y
            glVertex2i(x, y);
        }
        glEnd();
    }
    glFlush();
}

void setWindow(float left, float right, int bottom, int top) {
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    gluOrtho2D(-2000, 2000, -3000, 1000);
}

void render() {
    glClear(GL_COLOR_BUFFER_BIT);
    setWindow(-1000.0, 800.0, -1400.0, 700.0);

    for (int i = 0; i < NUM_DINO; i++) {
        float x = R * cos(60); // x ÁÂÇ¥
        float y = R * sin(60); // y ÁÂÇ¥  

        glTranslatef(-x, y, 0);
        glRotatef(-30, 0, 0, 1);
        // °ø·æ ±×¸®±â
        drawPolyLineFile("dino.dat");
    }

    glFlush();
}

int main(int argc, char** argv) {
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
    glutInitWindowSize(640, 480);
    glutInitWindowPosition(0, 0);
    glutCreateWindow("HW2 No.3");
    glutDisplayFunc(render);
    glutMainLoop();
    return 0;
}