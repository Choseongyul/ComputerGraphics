//#include <iostream>
//#include <glm/glm.hpp>
//#include <glm/gtc/matrix_transform.hpp>
//#include <glm/gtc/constants.hpp>
//
//int main() {
//    // 초기 점 P의 위치
//    glm::vec4 point(1.0f, 2.0f, 3.0f, 1.0f);  // Homogeneous Coordinates 사용
//
//    // 1. x축 기준 반시계 방향 90도 회전
//    glm::mat4 rotate_x_90 = glm::rotate(glm::mat4(1.0f), glm::radians(90.0f), glm::vec3(1.0f, 0.0f, 0.0f));
//
//    // 2. x축 방향으로 +2, y축 방향으로 +1 translate
//    glm::mat4 translate = glm::translate(glm::mat4(1.0f), glm::vec3(2.0f, 1.0f, 0.0f));
//
//    // 3. 원점 기준으로 x축 방향으로 1배, y축 방향으로 +2배, z축 방향으로 +2배 scaling
//    glm::mat4 scale = glm::scale(glm::mat4(1.0f), glm::vec3(1.0f, 2.0f, 2.0f));
//
//    // 복합 변환 행렬 생성 (순서대로 곱해주기)
//    glm::mat4 transform = translate * scale * rotate_x_90;
//
//    // 최종 위치 계산
//    glm::vec4 transformed_point = transform * point;
//
//    // 결과 출력
//    std::cout << "최종 변환 후 위치: ("
//        << transformed_point.x << ", "
//        << transformed_point.y << ", "
//        << transformed_point.z << ")" << std::endl;
//
//    return 0;
//}
