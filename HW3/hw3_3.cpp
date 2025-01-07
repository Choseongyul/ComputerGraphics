//#include <cmath>
//#include <cstdlib>
//#include <iostream>
//#include <GL/glew.h>
//#include <GL/freeglut.h>
//
//// Globals.
//static int isAnimate = 0;          
//static int animationPeriod = 20;   
//static float h = 0.3f;             
//static float g = 0.05f;            
//static float yPos = 0.0f;          
//static float xPos = 8.0f;          
//static float xVel = h;             
//static float yVel = 0.0f;          
//static float dampening = 0.9f;     
//static char theStringBuffer[10];   
//static long font = (long)GLUT_BITMAP_8_BY_13; 
//
//
//void writeBitmapString(void* font, const char* string)
//{
//    const char* c;
//    for (c = string; *c != '\0'; c++) glutBitmapCharacter(font, *c);
//}
//
//
//void floatToString(char* destStr, int precision, float val)
//{
//    sprintf_s(destStr, 10, "%.*f", precision, val); // Use sprintf_s for safety
//}
//
//
//void writeData(void)
//{
//    glColor3f(0.0f, 0.0f, 0.0f);
//
//    floatToString(theStringBuffer, 4, h);
//    glRasterPos3f(-4.5f, 4.5f, -5.1f);
//    writeBitmapString((void*)font, "Horizontal velocity: ");
//    writeBitmapString((void*)font, theStringBuffer);
//
//    floatToString(theStringBuffer, 4, g);
//    glRasterPos3f(-4.5f, 3.5f, -5.1f);
//    writeBitmapString((void*)font, "Gravitation: ");
//    writeBitmapString((void*)font, theStringBuffer);
//}
//
//
//void drawScene(void)
//{
//    glClear(GL_COLOR_BUFFER_BIT);
//    glLoadIdentity();
//
//    
//    gluLookAt(0.0f, 0.0f, 50.0f, 0.0f, 0.0f, 0.0f, 0.0f, 1.0f, 0.0f);
//
//    writeData();
//
//    
//    glColor3f(0.5f, 0.5f, 0.5f);
//    glBegin(GL_POLYGON);
//    glVertex3f(-20.0f, -15.0f, 0.0f);
//    glVertex3f(15.0f, -15.0f, 0.0f);
//    glVertex3f(15.0f, -14.0f, 0.0f);
//    glVertex3f(-20.0f, -14.0f, 0.0f);
//    glEnd();
//
//    
//    glColor3f(0.5f, 0.5f, 0.5f);
//    glBegin(GL_POLYGON);
//    glVertex3f(14.0f, -15.0f, 0.0f);
//    glVertex3f(14.0f, 15.0f, 0.0f);
//    glVertex3f(15.0f, 15.0f, 0.0f);
//    glVertex3f(15.0f, -15.0f, 0.0f);
//    glEnd();
//
//    
//    glPushMatrix();
//    glTranslatef(xPos, yPos, 0.0f);
//    glColor3f(0.0f, 0.0f, 1.0f);
//    glutWireSphere(1.0, 10, 10);
//    glPopMatrix();
//
//    glutSwapBuffers();
//}
//
//
//void animate(int value)
//{
//    if (isAnimate)
//    {
//
//        xPos += xVel;
//        yPos += yVel;
//
//
//        yVel -= g;
//
//
//        if (xPos > 13.0f)
//        {
//            xPos = 13.0f;
//            xVel = -xVel;
//        }
//
//        // Collision with ground (y = -14).
//        if (yPos < -14.0f)
//        {
//            yPos = -14.0f;
//            yVel = -yVel; 
//            yVel *= dampening; 
//        }
//
//        glutPostRedisplay();
//        glutTimerFunc(animationPeriod, animate, 1);
//    }
//}
//
//
//void setup(void)
//{
//    glClearColor(1.0f, 1.0f, 1.0f, 0.0f);
//}
//
//
//void resize(int w, int h)
//{
//    glViewport(0, 0, w, h);
//    glMatrixMode(GL_PROJECTION);
//    glLoadIdentity();
//    glOrtho(-20.0f, 20.0f, -20.0f, 20.0f, 5.0f, 100.0f); 
//
//    glMatrixMode(GL_MODELVIEW);
//}
//
//
//void keyInput(unsigned char key, int x, int y)
//{
//    switch (key)
//    {
//    case 27:
//        exit(0);
//        break;
//    case ' ':
//        if (isAnimate) isAnimate = 0;
//        else
//        {
//            isAnimate = 1;
//            animate(1);
//        }
//        break;
//    case 'r':
//        isAnimate = 0;
//        xPos = 8.0f;
//        yPos = 0.0f;
//        xVel = h;
//        yVel = 0.0f;
//        glutPostRedisplay();
//        break;
//    default:
//        break;
//    }
//}
//
//
//void specialKeyInput(int key, int x, int y)
//{
//    if (key == GLUT_KEY_RIGHT) h += 0.05f;
//    if (key == GLUT_KEY_LEFT) if (h > 0.1f) h -= 0.05f;
//    if (key == GLUT_KEY_PAGE_UP) g += 0.01f;
//    if (key == GLUT_KEY_PAGE_DOWN) if (g > 0.01f) g -= 0.01f;
//
//    xVel = h;
//    glutPostRedisplay();
//}
//
//
//void printInteraction(void)
//{
//    std::cout << "Interaction:" << std::endl;
//    std::cout << "Press space to toggle between animation on and off." << std::endl
//        << "Press right/left arrow keys to increase/decrease the horizontal velocity." << std::endl
//        << "Press page up/down keys to increase/decrease gravitational acceleration." << std::endl
//        << "Press r to reset." << std::endl;
//}
//
//
//int main(int argc, char** argv)
//{
//    printInteraction();
//    glutInit(&argc, argv);
//
//    glutInitContextVersion(4, 3);
//    glutInitContextProfile(GLUT_COMPATIBILITY_PROFILE);
//
//    glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGBA);
//    glutInitWindowSize(500, 500);
//    glutInitWindowPosition(100, 100);
//    glutCreateWindow("Throw Ball with Floor and Wall");
//    glutDisplayFunc(drawScene);
//    glutReshapeFunc(resize);
//    glutKeyboardFunc(keyInput);
//    glutSpecialFunc(specialKeyInput);
//
//    glewExperimental = GL_TRUE;
//    glewInit();
//
//    setup();
//
//    glutMainLoop();
//}