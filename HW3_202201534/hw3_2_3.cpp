//#include <GL/glut.h>
//#include <iostream>
//
//struct Point {
//    float x, y;
//};
//
//// 4개의 원래 제어점
//Point p0 = { -2.0f, 2.0f };
//Point p1 = { 0.0f, -3.0f };
//Point p2 = { 3.0f, 4.0f };
//Point p3 = { 7.0f, 0.0f };
//
//// Affine Transformation 적용 함수
//Point applyAffineTransform(Point p, float scaleX, float scaleY, float translateX, float translateY) {
//    Point result;
//    result.x = p.x * scaleX + translateX; // 스케일링과 평행 이동 적용
//    result.y = p.y * scaleY + translateY;
//    return result;
//}
//
//// Cubic Bezier 계산 함수
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
//void drawBezierCurve(Point p0, Point p1, Point p2, Point p3) {
//    glBegin(GL_LINE_STRIP);
//    for (float t = 0.0f; t <= 1.0f; t += 0.01f) {
//        Point point = calculateBezierPoint(t, p0, p1, p2, p3);
//        glVertex2f(point.x, point.y);
//    }
//    glEnd();
//}
//
//// 화면 렌더링 함수
//void display() {
//    glClear(GL_COLOR_BUFFER_BIT);
//
//    // 원래 제어점으로 그린 Bezier Curve
//    glColor3f(1.0f, 0.0f, 0.0f); // 원래 곡선: 빨간색
//    drawBezierCurve(p0, p1, p2, p3);
//
//    // 제어점에 Affine Transformation 적용
//    float scaleX = 1.0f, scaleY = 2.0f;         // 스케일링
//    float translateX = 2.0f, translateY = 3.0f; // 평행 이동
//    Point newP0 = applyAffineTransform(p0, scaleX, scaleY, translateX, translateY);
//    Point newP1 = applyAffineTransform(p1, scaleX, scaleY, translateX, translateY);
//    Point newP2 = applyAffineTransform(p2, scaleX, scaleY, translateX, translateY);
//    Point newP3 = applyAffineTransform(p3, scaleX, scaleY, translateX, translateY);
//
//    // 변환된 제어점으로 그린 Bezier Curve
//    glColor3f(0.0f, 0.0f, 1.0f); // 변환된 곡선: 파란색
//    drawBezierCurve(newP0, newP1, newP2, newP3);
//
//    glFlush();
//}
//
//int main(int argc, char** argv) {
//    glutInit(&argc, argv);
//    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
//    glutInitWindowSize(800, 800);
//    glutCreateWindow("Affine Transformed Control Points");
//
//    glClearColor(1.0f, 1.0f, 1.0f, 1.0f); // 배경 색상: 흰색
//    gluOrtho2D(-5.0, 15.0, -5.0, 15.0);   // 좌표계 설정 (변환 적용 범위에 맞춤)
//
//    glutDisplayFunc(display);
//    glutMainLoop();
//    return 0;
//}
