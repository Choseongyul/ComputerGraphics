#include <GL/glut.h>

// 초기화 함수
void init() {
    glClearColor(0,0,0,0);

    // 투영 행렬 설정 (2D 좌표계를 사용할 것이므로 Orthographic Projection 설정)
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();

    // 2D Orthographic Projection 설정 (좌표계: 왼쪽 0 ~ 오른쪽 100, 아래 0 ~ 위 100)
    glOrtho(0.0, 100.0, 0.0, 100.0, -1.0, 1.0);

    glDisable(GL_CULL_FACE);
    glPolygonMode(GL_FRONT_AND_BACK, GL_LINE);
}

// 도형 그리기 함수
void drawShape() {
    glClear(GL_COLOR_BUFFER_BIT);  // 화면 지우기

    // 삼각형 스트립 시작
    glBegin(GL_TRIANGLE_STRIP);

    // 첫 번째 그룹
    glColor3f(1.0f, 1.0f, 1.0f);
    glVertex3f(10, 50, 0);  
    glVertex3f(10, 60, 0);
    glVertex3f(20, 50, 0); // 첫 번째 삼각형
    glVertex3f(30, 60, 0);  // 두 번째 삼각형

    // 두 번째 그룹
    glColor3f(1.0f, 1.0f, 1.0f);
    glVertex3f(20, 10, 0);  // 세 번째 삼각형
    glVertex3f(30, 20, 0); // 네 번째 삼각형
    glVertex3f(50, 10, 0); // 다섯 번째 삼각형
    glVertex3f(40, 20, 0);  // 여섯 번째 삼각형

    // 세 번째 그룹
    glColor3f(1.0f, 1.0f, 1.0f);
    glVertex3f(50, 50, 0);  // 일곱 번째 삼각형
    glVertex3f(40, 60, 0); // 여덟 번째 삼각형
    glVertex3f(60, 50, 0); // 아홉 번째 삼각형
    glVertex3f(60, 60, 0);  // 열 번째 삼각형

    glEnd();

    glFlush();
}

// 메인 함수
int main(int argc, char** argv) {
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
    glutInitWindowSize(500, 500);
    glutCreateWindow("ComputerGraphics Lab1_1");

    init();  // 초기화 함수 호출

    glutDisplayFunc(drawShape);
    glutMainLoop();

    return 0;
}
