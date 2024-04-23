#include <GL/glut.h>

void init()
{
    glColor3f(0, 0, 1);
   
}

void display(void)
{

    // glBegin(GL_POLYGON);
    // glVertex3f(0.0, 0.0, 0.0);
    // glVertex3f(0.15, 0.75, 0.0);
    // glVertex3f(0.3, 0.70, 0.0);
    // glEnd();
    // glBegin(GL_POLYGON);
    // glVertex3f(0.31, 0.70, 0.0);
    // glVertex3f(0.5, 0.85, 0.0);
    // glVertex3f(0.0, 0.0, 0.0);
    // glEnd();
    // glBegin(GL_POLYGON);
    // glVertex3f(0.51, 0.85, 0.0);
    // glVertex3f(0.8, 0.68, 0.0);
    // glVertex3f(0.0, 0.0, 0.0);
    // glEnd();

    // glBegin(GL_POLYGON);
    // glVertex3f(0.0, 0.0, 0.0);
    // glVertex3f(0.15, 0.75, 0.0);
    // glVertex3f(0.3, 0.70, 0.0);
    // glVertex3f(0.5, 0.85, 0.0);
    // glVertex3f(0.8, 0.68, 0.0);
    // glEnd();

    glBegin(GL_TRIANGLE_FAN);
    glVertex3f(0.0, 0.0, 0.0);
    glVertex3f(0.15, 0.75, 0.0);
    glVertex3f(0.3, 0.70, 0.0);
    glVertex3f(0.5, 0.85, 0.0);
    glVertex3f(0.8, 0.68, 0.0);
    glEnd();
    glFlush();
}

int main(int argc, char *argv[])
{
    glutInitWindowSize(400, 400);
    glutInitDisplayMode(GLUT_RGB);
    glutInit(&argc, argv);

    glutCreateWindow("Okno OpenGL");

    init();
    glutDisplayFunc(display);


    glutMainLoop();
    return 0;
}