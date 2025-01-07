#include <iostream>
#include <glm/glm.hpp>
#include <glm/gtc/matrix_transform.hpp>
#include <glm/gtc/type_ptr.hpp>

using namespace std;

void board(const string& idx, const glm::vec3& v3) {
	cout
		<< idx
		<< "\n| " << v3.x
		<< "\n| " << v3.y
		<< "\n| " << v3.z
		<< "\n| "
		;
}

int main() {
	glm::vec3 point(1, 2, 0);
	glm::mat4 rotMat = glm::rotate(glm::mat4(1.0f), glm::radians(45.0f), glm::vec3(1, 0, 0));

	glm::vec4 rotPoint = rotMat * glm::vec4(point, 1.0f);

	board("", point);
	board("after", glm::vec3(rotPoint));

	return 0;
}