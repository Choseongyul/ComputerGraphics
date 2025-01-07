//#include <GL/glut.h>
//
//struct Point {
//    float x, y;
//};
//
//// 4개의 제어점 (Control Points)
//Point p0 = { -2.0f, 2.0f };
//Point p1 = { 0.0f, -3.0f };
//Point p2 = { 3.0f, 4.0f };
//Point p3 = { 7.0f, 0.0f };
//
//// Cubic Bezier 곡선 계산 함수
//Point calculateBezierPoint(float t, Point p0, Point p1, Point p2, Point p3) {
//    float u = 1.0f - t;
//    float tt = t * t;
//    float uu = u * u;
//    float uuu = uu * u;
//    float ttt = tt * t;
//
//    Point point;
//    point.x = uuu * p0.x + 3 * uu * t * p1.x + 3 * u * tt * p2.x + ttt * p3.x;
//    point.y = uuu * p0.y + 3 * uu * t * p1.y + 3 * u * tt * p2.y + ttt * p3.y;
//    return point;
//}
//
//// Bezier 곡선을 그리는 함수
//void drawBezierCurve() {
//    glBegin(GL_LINE_STRIP);
//    for (float t = 0.0f; t <= 1.0f; t += 0.01f) {
//        Point point = calculateBezierPoint(t, p0, p1, p2, p3);
//        glVertex2f(point.x, point.y);
//    }
//    glEnd();
//}
//
//// 화면을 렌더링하는 함수
//void display() {
//    glClear(GL_COLOR_BUFFER_BIT);
//    glColor3f(1.0f, 0.0f, 0.0f); // 곡선의 색상: 빨간색
//
//    drawBezierCurve();
//
//    glFlush();
//}
//
//int main(int argc, char** argv) {
//    glutInit(&argc, argv);
//    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
//    glutInitWindowSize(800, 800); // 창 크기 조정
//    glutCreateWindow("Cubic Bezier Curve");
//
//    glClearColor(1.0f, 1.0f, 1.0f, 1.0f); // 배경 색상: 흰색
//    gluOrtho2D(-3.0, 8.0, -4.0, 5.0); // 좌표계 설정 (제어점에 맞게 조정)
//
//    glutDisplayFunc(display);
//    glutMainLoop();
//    return 0;
//}
