#include <gl/glut.h>

void display(void)
{
    glClear(GL_COLOR_BUFFER_BIT);
    glColor3f(0.29f, 0.56f, 0.85f);

    glRectf(-0.23f,  0.05f,  0.19f,  0.55f);
    glRectf( 0.23f,  0.05f,  0.65f,  0.55f);

    glRectf(-0.65f, -0.55f, -0.23f,  0.05f);
    glRectf(-0.19f, -0.55f,  0.23f,  0.05f);
    glRectf( 0.27f, -0.55f,  0.69f,  0.05f);

    glFlush();
}

int main(int argc, char* argv[])
{
    glutInit(&argc, argv);
    glutInitWindowSize(640, 480);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGBA);
    glutCreateWindow("Tugas Nomor 3");
    glutDisplayFunc(display);
    glClearColor(0.02f, 0.05f, 0.12f, 1.0f);
    glutMainLoop();
    return 0;
}
