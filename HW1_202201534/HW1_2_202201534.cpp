#include <GL/glew.h>
#include <GL/freeglut.h>

void drawScene(void) {
	glClear(GL_COLOR_BUFFER_BIT);

	////original
	//glColor3f(0, 0, 0);
	//glBegin(GL_POLYGON);
	//glVertex3f(20, 20, 0);
	//glVertex3f(80, 20, 0);
	//glVertex3f(80, 80, 0);
	//glVertex3f(20, 80, 0);
	//glEnd();

	//Lab code1
	/*glBegin(GL_POLYGON);
	glColor3f(0, 0, 0);
	glVertex3f(20, 20, 0);
	glVertex3f(50, 20, 0);
	glVertex3f(80, 50, 0);
	glVertex3f(80, 80, 0);
	glColor3f(1, 0, 0);
	glVertex3f(20, 80, 0);
	glEnd();*/

	//Lab code2
	glBegin(GL_POLYGON);
	glColor3f(0, 0, 0);
	glVertex3f(50, 20, 0);
	glVertex3f(80, 50, 0);
	glVertex3f(80, 80, 0);
	glColor3f(1, 0, 0);
	glVertex3f(20, 80, 0);
	glColor3f(0, 0, 0);
	glVertex3f(20, 20, 0);
	glEnd();

	glFlush();
}

void setup(void) {
	glClearColor(1, 1, 1, 0);
}

void resize(int w, int h) {
	glViewport(0, 0, w, h);
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	glOrtho(0, 100, 0, 100, -1, 1);

	glMatrixMode(GL_MODELVIEW);
	glLoadIdentity();
}

void keyInput(unsigned char key, int x, int y) {
	switch (key) {
	case 27:
		exit(0);
		break;

	default:
		break;
	}
}

int main(int argc, char** argv) {
	glutInit(&argc, argv);

	glutInitContextVersion(4, 3);
	glutInitContextProfile(GLUT_COMPATIBILITY_PROFILE);

	glutInitDisplayMode(GLUT_SINGLE | GLUT_RGBA);

	glutInitWindowSize(500, 500);
	glutInitWindowPosition(100, 100);

	glutCreateWindow("sqaure.cpp");

	glutDisplayFunc(drawScene);
	glutReshapeFunc(resize);
	glutKeyboardFunc(keyInput);

	glewExperimental = GL_TRUE;
	glewInit();

	setup();

	glutMainLoop();

	
}