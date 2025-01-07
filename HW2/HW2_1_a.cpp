#include <iostream>
#include <glm/glm.hpp>
#include <glm/gtc/matrix_transform.hpp>

using namespace std;

// draw matrix
void board(const string& idx, const glm::mat4& mat) {
	cout << idx << '\n';
	for (int row = 0; row < 4; ++row) {
		cout << "| ";
		for (int col = 0; col < 4; ++col) {
			cout << mat[col][row] << '\t';
		}
		cout << '\n';
	}
	cout << '\n';
}

void v4(const string& tag, const glm::vec4& v4) {
	cout
		<< tag
		<< "\n| " << v4.x
		<< "\n| " << v4.y
		<< "\n| " << v4.z
		<< "\n| " << v4.w
		<< "\n";
}


int main() {
	glm::vec4 v{ 1,2,3,1 };
	glm::mat4 M{
		1, 0, 0, 0,
		0, 1, 0, 0,
		0, 0, 1, 0,
		0, 0, -10, 1
	};

	v4("v", v);
	board("M", M);
	v4("Mv", M * v);

	return 0;
}