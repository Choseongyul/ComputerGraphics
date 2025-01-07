#include <GL/glut.h>
#include <cmath>
#define M_PI 3.14159265358979323846

// ��ä���� ������
const float r = 1.0f;

// ȭ�� ũ�� ����
const int W = 800;
const int H = 800;

// �ʱ�ȭ
void init() {
    glClearColor(1.0f, 1.0f, 1.0f, 1.0f);
    glColor3f(1.0f, 0.0f, 0.0f);
}

// �׸��� �Լ�
void display() {
    glClear(GL_COLOR_BUFFER_BIT);
    glBegin(GL_TRIANGLE_FAN);
    glVertex2f(0.0f, 0.0f);

    // ���� �߰� (0������ 60������)
    for (int i = 0; i <= 60; i++) {
        float angle = i * (M_PI / 180.0f); // �������� ��ȯ

        float x = r * cos(angle);
        float y = r * sin(angle);

        glVertex2f(x, y);
    }
    glEnd();

    glFlush();
}


int main(int argc, char** argv) {
    glutInit(&argc, argv); // GLUT �ʱ�ȭ

    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB); // ���� ����, RGB ����
    glutInitWindowSize(W, H); // â ũ�� ����

    glutCreateWindow("HW2_4_a"); // â ���� ����

    init();
    glutDisplayFunc(display);

    glutMainLoop(); // �̺�Ʈ ���� ����
    return 0;
}
