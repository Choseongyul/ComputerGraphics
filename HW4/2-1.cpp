//#include <iostream>
//#include <glm/glm.hpp>
//#include <glm/gtx/normalize_dot.hpp>
//#include <vector>
//
//
//struct Face {
//    glm::vec3 v1, v2, v3;
//};
//
//
//glm::vec3 calculateNormal(const glm::vec3& v1, const glm::vec3& v2, const glm::vec3& v3) {
//    glm::vec3 u1 = v2 - v1; 
//    glm::vec3 u2 = v3 - v1; 
//    return glm::normalize(glm::cross(u1, u2));
//}
//
//int main() {
//    std::vector<Face> faces = {
//        // Top Side
//        {glm::vec3(-1.2, 1, -1.2), glm::vec3(1.2, 1, -1.2), glm::vec3(1.2, 1, 1.2)},
//        // Bottom Side
//        {glm::vec3(-1, -1, -1), glm::vec3(1, -1, 1), glm::vec3(1, -1, -1)},
//        // Left Side
//        {glm::vec3(-1.2, 1, -1.2), glm::vec3(-1, -1, -1), glm::vec3(-1, -1, 1)},
//        // Right Side
//        {glm::vec3(1.2, 1, -1.2), glm::vec3(1, -1, -1), glm::vec3(1, -1, 1)},
//        // Back Side
//        {glm::vec3(-1.2, 1, -1.2), glm::vec3(1.2, 1, -1.2), glm::vec3(1, -1, -1)},
//        // Front Side
//        {glm::vec3(-1.2, 1, 1.2), glm::vec3(1, -1, 1), glm::vec3(-1, -1, 1)}
//    };
//
//    // 각 Face의 Normal Vector 계산 및 출력
//    for (size_t i = 0; i < faces.size(); ++i) {
//        Face face = faces[i];
//        glm::vec3 normal = calculateNormal(face.v1, face.v2, face.v3);
//
//        if ((i == 0 && normal.y < 0) || (i == 1 && normal.y > 0)) {
//            normal = -normal;
//        }
//
//        std::cout << "Face " << i + 1 << " Normal Vector: ("
//            << normal.x << ", " << normal.y << ", " << normal.z << ")" << std::endl;
//    }
//
//    return 0;
//}
