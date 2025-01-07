//#include <iostream>
//#include <glm/glm.hpp>
//#include <glm/gtx/normalize_dot.hpp>
//#include <vector>
//#include <map>
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
//
//    // 외적 계산 및 정규화
//    return glm::normalize(glm::cross(u1, u2));
//}
//
//int main() {
//    // 육면체의 Vertex 정의
//    std::vector<glm::vec3> vertices = {
//        glm::vec3(-1.2, 1, -1.2),  // Vertex 0
//        glm::vec3(1.2, 1, -1.2),   // Vertex 1
//        glm::vec3(1.2, 1, 1.2),    // Vertex 2
//        glm::vec3(-1.2, 1, 1.2),   // Vertex 3
//        glm::vec3(-1, -1, -1),     // Vertex 4
//        glm::vec3(1, -1, -1),      // Vertex 5
//        glm::vec3(1, -1, 1),       // Vertex 6
//        glm::vec3(-1, -1, 1)       // Vertex 7
//    };
//
//    // 육면체의 6개의 Face 정의
//    std::vector<Face> faces = {
//        // Top Side
//        {vertices[0], vertices[1], vertices[2]},
//        {vertices[0], vertices[2], vertices[3]},
//        // Left Side
//        {vertices[0], vertices[4], vertices[7]},
//        {vertices[0], vertices[7], vertices[3]},
//        // Right Side
//        {vertices[1], vertices[2], vertices[6]},
//        {vertices[1], vertices[6], vertices[5]},
//        // Front Side
//        {vertices[3], vertices[7], vertices[6]},
//        {vertices[3], vertices[6], vertices[2]},
//        // Back Side
//        {vertices[0], vertices[1], vertices[5]},
//        {vertices[0], vertices[5], vertices[4]},
//        // Bottom Side
//        {vertices[4], vertices[5], vertices[6]},
//        {vertices[4], vertices[6], vertices[7]}
//    };
//
//
//    std::map<int, glm::vec3> vertexNormals;
//
//    for (size_t i = 0; i < vertices.size(); ++i) {
//        vertexNormals[i] = glm::vec3(0.0f, 0.0f, 0.0f);
//    }
//
//
//    for (const auto& face : faces) {
//        // Face의 Normal Vector 계산
//        glm::vec3 faceNormal = calculateNormal(face.v1, face.v2, face.v3);
//
//        // Vertex에 Face의 Normal Vector를 추가
//        for (size_t i = 0; i < vertices.size(); ++i) {
//            if (vertices[i] == face.v1 || vertices[i] == face.v2 || vertices[i] == face.v3) {
//                vertexNormals[i] += faceNormal;
//            }
//        }
//    }
//
//    // 각 Vertex의 Normal Vector 정규화
//    for (size_t i = 0; i < vertices.size(); ++i) {
//        vertexNormals[i] = glm::normalize(vertexNormals[i]);
//    }
//
//    // 결과 출력
//    for (size_t i = 0; i < vertices.size(); ++i) {
//        std::cout << "Vertex " << i << " Normal Vector: ("
//            << vertexNormals[i].x << ", "
//            << vertexNormals[i].y << ", "
//            << vertexNormals[i].z << ")" << std::endl;
//    }
//
//    return 0;
//}
