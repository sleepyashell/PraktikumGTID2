
#include <GL/glut.h>
#include <stdlib.h>
#include <math.h>
#define PI 3.1415926535898 

void Lingkaran(void) {
    glClear(GL_COLOR_BUFFER_BIT); 
    glPushMatrix();
    glColor3f(0.0f, 0.0f, 1.0f);
    glBegin(GL_POLYGON);
	    int jumlah_titik = 100; 
	    float radius = 0.5f; 
	    for (int i = 0; i < jumlah_titik; i++) {
	        float sudut = 2 * PI * i / jumlah_titik;
	        float x = cos(sudut) * radius;
	        float y = sin(sudut) * radius;
	        glVertex2f(x, y);
	    }
    glEnd(); 
    glPopMatrix(); 
    glFlush(); 
}

int main(int argc, char** argv) {
    glutInit(&argc, argv);
    glutInitWindowSize(640, 640);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGBA);
    glutCreateWindow("Lingkaran");

    glutDisplayFunc(Lingkaran);
    
    glClearColor(1.0f, 1.0f, 1.0f, 1.0f);
    
    glutMainLoop();
    return 0;
}
