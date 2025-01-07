#include <GL/glut.h>
#include <cmath>
#include <vector>
#define M_PI 3.1415926535897

const float r = 1.0f;
const int W = 600;
const int H = 600;

void init() {
    glClearColor(1.0f, 1.0f, 1.0f, 1.0f);
}

void display() {
    glClear(GL_COLOR_BUFFER_BIT);

    for (int i = 0; i < 6; ++i) {
        glColor3f(1 - 0.2 * i, 0.2 * i, 0.3 * i);
        glPushMatrix();
        glRotatef(i * 60, 0, 0, 1);

        glBegin(GL_TRIANGLE_FAN);
        glVertex2f(0.0f, 0.0f);

        for (int j = 0; j <= 60; j++) {
            float angle = j * (M_PI / 180.0f);
            float x = r * cos(angle);
            float y = r * sin(angle);
            glVertex2f(x, y);
        }
        glEnd();

        glPopMatrix();
    }

    glFlush();
}

int main(int argc, char** argv) {
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
    glutInitWindowSize(W, H);
    glutCreateWindow("HW2_4(b)");

    init();
    glutDisplayFunc(display);

    glutMainLoop();
    return 0;
}
