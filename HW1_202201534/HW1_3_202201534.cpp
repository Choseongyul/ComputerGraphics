#include <GL/glut.h>
#include <cmath>

#define M_PI 3.14159265358979323846

const int n = 12; // 경계 점의 개수
const float radius = 1.0f;


void display() {
    glClear(GL_COLOR_BUFFER_BIT);

    // 디스크 삼각형 그리기
    glColor3f(1.0f, 1.0f, 1.0f);
    glPolygonMode(GL_FRONT_AND_BACK, GL_LINE);
    glBegin(GL_TRIANGLES);
    for (int i = 0; i < n; i++) {
        float angle1 = 2 * M_PI * i / n;
        float angle2 = 2 * M_PI * (i + 1) / n;
        glVertex2f(1.0f, 0.0f);
        glVertex2f(radius * cos(angle1), radius * sin(angle1));
        glVertex2f(radius * cos(angle2), radius * sin(angle2));
    }
    glEnd();

    glFlush();
}

void setup() {
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    glOrtho(-2.0, 2.0, -2.0, 2.0, -1.0, 1.0);
}

int main(int argc, char** argv) {
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
    glutInitWindowSize(500, 500);
    glutCreateWindow("Computer Graphics HW1_3");
    setup();
    glutDisplayFunc(display);
    glutMainLoop();
    return 0;
}
