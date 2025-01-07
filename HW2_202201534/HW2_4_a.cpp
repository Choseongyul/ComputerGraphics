#include <GL/glut.h>
#include <cmath>
#define M_PI 3.14159265358979323846

// 부채꼴의 반지름
const float r = 1.0f;

// 화면 크기 설정
const int W = 800;
const int H = 800;

// 초기화
void init() {
    glClearColor(1.0f, 1.0f, 1.0f, 1.0f);
    glColor3f(1.0f, 0.0f, 0.0f);
}

// 그리기 함수
void display() {
    glClear(GL_COLOR_BUFFER_BIT);
    glBegin(GL_TRIANGLE_FAN);
    glVertex2f(0.0f, 0.0f);

    // 정점 추가 (0도부터 60도까지)
    for (int i = 0; i <= 60; i++) {
        float angle = i * (M_PI / 180.0f); // 라디안으로 변환

        float x = r * cos(angle);
        float y = r * sin(angle);

        glVertex2f(x, y);
    }
    glEnd();

    glFlush();
}


int main(int argc, char** argv) {
    glutInit(&argc, argv); // GLUT 초기화

    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB); // 단일 버퍼, RGB 색상
    glutInitWindowSize(W, H); // 창 크기 설정

    glutCreateWindow("HW2_4_a"); // 창 제목 설정

    init();
    glutDisplayFunc(display);

    glutMainLoop(); // 이벤트 루프 진입
    return 0;
}
