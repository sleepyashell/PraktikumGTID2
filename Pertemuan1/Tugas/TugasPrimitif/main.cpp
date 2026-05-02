#include <gl/glut.h>

void display(void)
{
    glClear(GL_COLOR_BUFFER_BIT);

    // GL_LINE_STRIP
    glColor3f(0.0f, 1.0f, 1.0f);
    glLineWidth(5.0f);
    glBegin(GL_LINE_STRIP);
        glVertex2f(-0.9f,  0.7f);
        glVertex2f(-0.6f,  0.9f);
        glVertex2f(-0.3f,  0.6f);
        glVertex2f( 0.0f,  0.85f);
    glEnd();

    // GL_LINE_LOOP
    glColor3f(0.0f, 1.0f, 0.5f);
    glLineWidth(4.0f);
    glBegin(GL_LINE_LOOP);
        glVertex2f( 0.3f,  0.65f);
        glVertex2f( 0.55f, 0.9f);
        glVertex2f( 0.8f,  0.65f);
        glVertex2f( 0.7f,  0.4f);
        glVertex2f( 0.4f,  0.4f);
    glEnd();

    // GL_TRIANGLE_FAN
    glBegin(GL_TRIANGLE_FAN);
        glColor3f(1.0f, 1.0f, 0.0f);
        glVertex2f(-0.75f, 0.2f);  // titik pusat
        glColor3f(1.0f, 0.0f, 0.0f);
        glVertex2f(-0.95f, 0.35f);
        glColor3f(0.0f, 1.0f, 0.0f);
        glVertex2f(-0.55f, 0.35f);
        glColor3f(0.0f, 0.0f, 1.0f);
        glVertex2f(-0.4f,  0.05f);
        glColor3f(1.0f, 0.5f, 0.0f);
        glVertex2f(-0.75f, -0.1f);
        glColor3f(0.5f, 0.0f, 1.0f);
        glVertex2f(-0.95f, 0.05f);
        glColor3f(1.0f, 0.0f, 0.0f);
        glVertex2f(-0.95f, 0.35f);  // tutup
    glEnd();

    // GL_TRIANGLE_STRIP
    glBegin(GL_TRIANGLE_STRIP);
        glColor3f(0.2f, 0.6f, 1.0f);
        glVertex2f(-0.1f,  0.35f);
        glColor3f(0.8f, 0.2f, 0.4f);
        glVertex2f(-0.1f, -0.05f);
        glColor3f(0.2f, 0.8f, 0.5f);
        glVertex2f( 0.2f,  0.35f);
        glColor3f(1.0f, 0.8f, 0.0f);
        glVertex2f( 0.2f, -0.05f);
        glColor3f(0.4f, 0.2f, 0.9f);
        glVertex2f( 0.5f,  0.35f);
        glColor3f(1.0f, 0.3f, 0.0f);
        glVertex2f( 0.5f, -0.05f);
        glColor3f(0.0f, 0.9f, 0.9f);
        glVertex2f( 0.8f,  0.35f);
        glColor3f(0.8f, 0.8f, 0.2f);
        glVertex2f( 0.8f, -0.05f);
    glEnd();

    // 5. GL_QUADS
    glBegin(GL_QUADS);
        glColor3f(1.0f, 0.2f, 0.2f);
        glVertex2f(-0.95f, -0.15f);
        glVertex2f(-0.65f, -0.15f);
        glVertex2f(-0.65f, -0.45f);
        glVertex2f(-0.95f, -0.45f);

        glColor3f(0.2f, 0.8f, 0.2f);
        glVertex2f(-0.55f, -0.15f);
        glVertex2f(-0.25f, -0.15f);
        glVertex2f(-0.25f, -0.45f);
        glVertex2f(-0.55f, -0.45f);

        glColor3f(0.2f, 0.2f, 1.0f);
        glVertex2f(-0.15f, -0.15f);
        glVertex2f( 0.15f, -0.15f);
        glVertex2f( 0.15f, -0.45f);
        glVertex2f(-0.15f, -0.45f);
    glEnd();

    // GL_QUAD_STRIP
    glBegin(GL_QUAD_STRIP);
        glColor3f(0.8f, 0.5f, 0.0f);
        glVertex2f( 0.3f, -0.15f);
        glVertex2f( 0.3f, -0.45f);
        glColor3f(0.6f, 0.3f, 0.0f);
        glVertex2f( 0.5f, -0.15f);
        glVertex2f( 0.5f, -0.45f);
        glColor3f(0.9f, 0.6f, 0.1f);
        glVertex2f( 0.7f, -0.15f);
        glVertex2f( 0.7f, -0.45f);
        glColor3f(0.5f, 0.2f, 0.0f);
        glVertex2f( 0.9f, -0.15f);
        glVertex2f( 0.9f, -0.45f);
    glEnd();

    glColor3f(1.0f, 1.0f, 1.0f);
    glRasterPos2f(-0.92f, 0.92f);

    glFlush();
}

int main(int argc, char* argv[])
{
    glutInit(&argc, argv);
    glutInitWindowSize(800, 600);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGBA);
    glutCreateWindow("Tugas Nomor 2");
    glutDisplayFunc(display);
    glClearColor(0.0f, 0.0f, 0.1f, 1.0f);
    glutMainLoop();
    return 0;
}
