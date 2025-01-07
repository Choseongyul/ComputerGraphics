#include <GL/glut.h>

// �ʱ�ȭ �Լ�
void init() {
    glClearColor(0,0,0,0);

    // ���� ��� ���� (2D ��ǥ�踦 ����� ���̹Ƿ� Orthographic Projection ����)
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();

    // 2D Orthographic Projection ���� (��ǥ��: ���� 0 ~ ������ 200, �Ʒ� 0 ~ �� 200)
    glOrtho(0.0, 200.0, 0.0, 200.0, -1.0, 1.0);

    glDisable(GL_CULL_FACE);
    glPolygonMode(GL_FRONT_AND_BACK, GL_LINE);
}

// ���� �׸��� �Լ�
void drawShape() {
    glClear(GL_COLOR_BUFFER_BIT);  // ȭ�� �����

    // �ﰢ�� ��Ʈ�� ����
    glBegin(GL_TRIANGLE_STRIP);

    
    glColor3f(1.0f, 1.0f, 1.0f);
    glVertex3f(75, 10, 0);
    glVertex3f(90, 30, 0);
    glVertex3f(140, 10, 0); // 1

    glVertex3f(120, 30, 0);
    glVertex3f(90, 30, 0);
    glVertex3f(140, 10, 0); // 2

    glVertex3f(120, 30, 0);
    glVertex3f(140, 80, 0);
    glVertex3f(140, 10, 0); // 3

    glVertex3f(120, 30, 0);
    glVertex3f(140, 80, 0);
    glVertex3f(120, 60, 0); // 4

    glVertex3f(90, 60, 0);
    glVertex3f(140, 80, 0);
    glVertex3f(120, 60, 0); // 5

    glVertex3f(90, 60, 0);
    glVertex3f(140, 80, 0);
    glVertex3f(75, 80, 0); // 6

    glVertex3f(75, 80, 0); 
    glVertex3f(90, 60, 0);
    glVertex3f(60, 60, 0); // 7

    glVertex3f(60, 60, 0);
    glVertex3f(60, 30, 0);
    glVertex3f(90, 60, 0); // 8

    glVertex3f(90, 60, 0);
    glVertex3f(60, 30, 0);
    glVertex3f(90, 30, 0); // 9

    glVertex3f(75, 10, 0);
    glVertex3f(60, 30, 0);
    glVertex3f(10, 10, 0); // 10

    glVertex3f(60, 30, 0);
    glVertex3f(30, 30, 0);
    glVertex3f(10, 10, 0); // 11

    glVertex3f(10, 10, 0);
    glVertex3f(30, 30, 0);
    glVertex3f(30, 60, 0); // 12

    glVertex3f(10, 10, 0);
    glVertex3f(30, 60, 0);
    glVertex3f(10, 80, 0); // 13

    glVertex3f(10, 80, 0);
    glVertex3f(30, 60, 0);
    glVertex3f(60, 60, 0); // 14

    glVertex3f(10, 80, 0);
    glVertex3f(60, 60, 0);
    glVertex3f(75, 80, 0); // 15

    glEnd();

    glFlush();
}

// ���� �Լ�
int main(int argc, char** argv) {
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
    glutInitWindowSize(500, 500);
    glutCreateWindow("ComputerGraphics Lab1_4");

    init();  // �ʱ�ȭ �Լ� ȣ��

    glutDisplayFunc(drawShape);
    glutMainLoop();

    return 0;
}
