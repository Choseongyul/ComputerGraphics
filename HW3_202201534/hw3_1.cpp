//#include <iostream>
//#include <glm/glm.hpp>
//#include <glm/gtc/matrix_transform.hpp>
//#include <glm/gtc/constants.hpp>
//
//int main() {
//    // �ʱ� �� P�� ��ġ
//    glm::vec4 point(1.0f, 2.0f, 3.0f, 1.0f);  // Homogeneous Coordinates ���
//
//    // 1. x�� ���� �ݽð� ���� 90�� ȸ��
//    glm::mat4 rotate_x_90 = glm::rotate(glm::mat4(1.0f), glm::radians(90.0f), glm::vec3(1.0f, 0.0f, 0.0f));
//
//    // 2. x�� �������� +2, y�� �������� +1 translate
//    glm::mat4 translate = glm::translate(glm::mat4(1.0f), glm::vec3(2.0f, 1.0f, 0.0f));
//
//    // 3. ���� �������� x�� �������� 1��, y�� �������� +2��, z�� �������� +2�� scaling
//    glm::mat4 scale = glm::scale(glm::mat4(1.0f), glm::vec3(1.0f, 2.0f, 2.0f));
//
//    // ���� ��ȯ ��� ���� (������� �����ֱ�)
//    glm::mat4 transform = translate * scale * rotate_x_90;
//
//    // ���� ��ġ ���
//    glm::vec4 transformed_point = transform * point;
//
//    // ��� ���
//    std::cout << "���� ��ȯ �� ��ġ: ("
//        << transformed_point.x << ", "
//        << transformed_point.y << ", "
//        << transformed_point.z << ")" << std::endl;
//
//    return 0;
//}
