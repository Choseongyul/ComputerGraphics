#include <GL/glut.h>

// 초기화 함수
void init() {
    glClearColor(0,0,0,0);

    // 투영 행렬 설정 (2D 좌표계를 사용할 것이므로 Orthographic Projection 설정)
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();

    // 2D Orthographic Projection 설정 (좌표계: 왼쪽 0 ~ 오른쪽 200, 아래 0 ~ 위 200)
    glOrtho(0.0, 200.0, 0.0, 200.0, -1.0, 1.0);

    glDisable(GL_CULL_FACE);
    glPolygonMode(GL_FRONT_AND_BACK, GL_LINE);
}

// 도형 그리기 함수
void drawShape() {
    glClear(GL_COLOR_BUFFER_BIT);  // 화면 지우기

    // 삼각형 스트립 시작
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

// 메인 함수
int main(int argc, char** argv) {
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
    glutInitWindowSize(500, 500);
    glutCreateWindow("ComputerGraphics Lab1_4");

    init();  // 초기화 함수 호출

    glutDisplayFunc(drawShape);
    glutMainLoop();

    return 0;
}
