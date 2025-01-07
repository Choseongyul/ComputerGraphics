//#include <iostream>
//
//// 브레스넘 알고리즘 코드
//void MidpointLine(int x1, int y1, int x2, int y2) {
//    int dx, dy;
//    int incrE, incrNE;
//    int D;
//    int x, y;
//
//    dx = x2 - x1;
//    dy = y2 - y1;
//
//    D = 2 * dy - dx;
//
//    incrE = 2 * dy;
//    incrNE = 2 * (dy - dx);
//
//    x = x1;
//    y = y1;
//
//    std::cout << "D = " << D << " (Initial)" << std::endl;
//
//    while (x < x2) {
//        if (D <= 0) {
//            D += incrE;
//            x++;
//        }
//        else {
//            D += incrNE;
//            x++;
//            y++;
//        }
//        std::cout << "D = " << D << " (x = " << x << ", y = " << y << ")" << std::endl;
//    }
//}
//
//int main() {
//    MidpointLine(0, 0, 9, 4);
//    return 0;
//}
