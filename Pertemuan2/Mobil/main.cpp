#include <GL/glut.h>
#include <cmath>

const double PI = 3.14159265358979323846;


void drawCircle(float x, float y, float radius, int segments) {
    glBegin(GL_TRIANGLE_FAN);
    glVertex2f(x, y); 
    for (int i = 0; i <= segments; i++) {
        float angle = 2.0f * PI * float(i) / float(segments);
        glVertex2f(x + (cos(angle) * radius), y + (sin(angle) * radius));
    }
    glEnd();
}

void drawHollowCircle(float cx, float cy, float innerRadius, float outerRadius, int segments) {
    glBegin(GL_QUAD_STRIP);
    for (int i = 0; i <= segments; i++) {
        float theta = 2.0f * PI * float(i) / float(segments);
        glVertex2f(cx + cosf(theta) * outerRadius, cy + sinf(theta) * outerRadius);
        glVertex2f(cx + cosf(theta) * innerRadius, cy + sinf(theta) * innerRadius);
    }
    glEnd();
}



void drawBody() {
	
	// Spoiler 
    glColor3f(0.3f, 0.3f, 0.3f);
    // Tiang Spoiler
    glRectf(-0.6f, 0.2f, -0.68f, 0.3f);
    glColor3f(0.2f, 0.2f, 0.2f);
    glBegin(GL_POLYGON);
    glVertex2f(-0.69f, 0.29f);
    glVertex2f(-0.58f, 0.29f);
    glVertex2f(-0.54f, 0.33f);
    glVertex2f(-0.725f, 0.37f);
    glEnd();
    
    glColor3f(0.85f, 0.85f, 0.85f);
    glBegin(GL_POLYGON);
    glVertex2f(-0.61f, -0.18f);  // Belakang bawah
    
    // Bumper Depan
    glVertex2f(0.73f, -0.18f);   // Bawah
    
    // Daerah Lampu
    glVertex2f(0.73f, -0.01f); 
    glVertex2f(0.7f, 0.03f); 
	glVertex2f(0.6f, 0.12f); 
    glVertex2f(0.5f, 0.15f); 
    
    // Kap Mesin
    glVertex2f(0.25f, 0.2f);  
    
    
    glVertex2f(-0.72f, 0.25f);  // Bagasi
    glVertex2f(-0.75f, 0.12f);
    glVertex2f(-0.75f, -0.08f);
    glVertex2f(-0.735f, -0.12f);  // Bumper Belakang
    glEnd();

    // KABIN
    glColor3f(0.8f, 0.8f, 0.8f);
    glBegin(GL_POLYGON);
    // Bawah
    glVertex2f(-0.6f, 0.23f); // belakang
    glVertex2f(0.3f, 0.17f); // depan
    
    // Atas
    glVertex2f(0.04f, 0.41f);
    glVertex2f(0.0f, 0.42f);
    glVertex2f(-0.18f, 0.415f);
    glVertex2f(-0.3f, 0.38f);
    glVertex2f(-0.6f, 0.245f); 
    glEnd();
    
    // Jendela
    glColor3f(0.9f, 0.9f, 0.9f);
    glBegin(GL_POLYGON);
    // Bawah
    glVertex2f(-0.4f, 0.21f); // belakang
    glVertex2f(0.31f, 0.17f); // depan
    glVertex2f(0.31f, 0.175f); // depan
    
    // Atas
    glVertex2f(0.071f, 0.38f); // Depan
    glVertex2f(-0.18f, 0.37f);
    glVertex2f(-0.25f, 0.34f);
    glVertex2f(-0.37f, 0.29f);
    
    glEnd();

    
    
    // Lampu Depan
    glColor3f(0.9f, 0.9f, 0.9f);
    glBegin(GL_POLYGON);
    glVertex2f(0.57f, 0.085f); 
    glVertex2f(0.675f, -0.01f); 
    glVertex2f(0.71f, -0.013f); 
	glVertex2f(0.6f, 0.09f); 
    glVertex2f(0.5f, 0.115f); 
    glEnd();
    
    // Lampu Belakang
    glColor3f(0.8f, 0.0f, 0.0f);
    glBegin(GL_POLYGON);
    glVertex2f(-0.725f, 0.2f); 
    glVertex2f(-0.719f, 0.22f); 
    glVertex2f(-0.705f, 0.23f); 
    glVertex2f(-0.69f, 0.22f); 
    glVertex2f(-0.71f, 0.125f); 
    glVertex2f(-0.725f, 0.11f); 
    glVertex2f(-0.742f, 0.125f);  
    glEnd();
    

	// Accent Body
	
	// Garis Hitam Bawah
	glColor3f(0.2f, 0.2f, 0.2f);
    glBegin(GL_POLYGON);
    glVertex2f(0.755f, -0.18f);
    glVertex2f(0.755f, -0.17f);
    glVertex2f(0.73f, -0.16f);
    glVertex2f(0.73f, -0.15f);
    glVertex2f(-0.25f, -0.1f);  
    glVertex2f(-0.5f, -0.1f);  
    glVertex2f(-0.75f, -0.08f);
    glVertex2f(-0.75f, -0.08f);
    glVertex2f(-0.735f, -0.12f);
    glVertex2f(-0.61f, -0.18f);  
    glEnd();
    
	// Garis Merah Bawah
	glLineWidth(3.5f);
	glColor3f(0.5f, 0.0f, 0.0f);
    glBegin(GL_LINE_STRIP);
    glVertex2f(0.755f, -0.18f);
    glVertex2f(-0.61f, -0.18f);  
    glVertex2f(-0.735f, -0.12f);
    glEnd();
    
    
}

void drawCustomRim() {
    glColor3f(0.25f, 0.25f, 0.25f);
    drawHollowCircle(0, 0, 0.12f, 0.1375f, 40);

    int totalPairs = 5; 
    float angleStep = (2.0f * PI) / totalPairs;
    float vSpread = 0.5f; 
    float offset = PI / 2.0f;

    glLineWidth(2.5f);

    glBegin(GL_LINES);
    for (int i = 0; i < totalPairs; i++) {
        float baseAngle = (i * angleStep) + offset; 

        glVertex2f(cosf(baseAngle) * 0.03f, sinf(baseAngle) * 0.03f);
        glVertex2f(cosf(baseAngle - vSpread) * 0.13f, sinf(baseAngle - vSpread) * 0.13f);

        glVertex2f(cosf(baseAngle) * 0.03f, sinf(baseAngle) * 0.03f);
        glVertex2f(cosf(baseAngle + vSpread) * 0.13f, sinf(baseAngle + vSpread) * 0.13f);
    }
    glEnd();
    
    float spiderShift = angleStep / 2.0f; 
    vSpread = 0.42f; 
    
	glLineWidth(5.0f);
    glBegin(GL_LINES);
    for (int i = 0; i < totalPairs; i++) {
        float baseAngle = (i * angleStep) + offset + spiderShift; 

        glVertex2f(cosf(baseAngle) * 0.03f, sinf(baseAngle) * 0.03f);
        glVertex2f(cosf(baseAngle - vSpread) * 0.13f, sinf(baseAngle - vSpread) * 0.13f);

        glVertex2f(cosf(baseAngle) * 0.03f, sinf(baseAngle) * 0.03f);
        glVertex2f(cosf(baseAngle + vSpread) * 0.13f, sinf(baseAngle + vSpread) * 0.13f);
    }
    glEnd();

    glColor3f(0.2f, 0.2f, 0.2f);
    drawCircle(0, 0, 0.04f, 20);
}

void drawBrakeCaliper(float cx, float cy, float innerDiskRadius) {
    glColor3f(1.0f, 0.7f, 0.0f); 
    
    float caliperInner = innerDiskRadius - 0.005f; 
    float caliperOuter = innerDiskRadius + 0.025f; 

    glBegin(GL_QUAD_STRIP);
    
    for (float i = -15; i <= 75; i += 5) {
        float theta = i * PI / 180.0f;
        glVertex2f(cx + cosf(theta) * caliperOuter, cy + sinf(theta) * caliperOuter);
        glVertex2f(cx + cosf(theta) * caliperInner, cy + sinf(theta) * caliperInner);
    }

    glEnd();
}

void drawFender(float cx, float cy, float innerRadius, float outerRadius) {
    glColor3f(0.1f, 0.3f, 0.7f); 
    
    glBegin(GL_QUAD_STRIP);
    for (float i = 0; i <= 180; i += 10) {
        float theta = i * PI / 180.0f;
        glVertex2f(cx + cosf(theta) * outerRadius, cy + sinf(theta) * outerRadius);
        glVertex2f(cx + cosf(theta) * innerRadius, cy + sinf(theta) * innerRadius);
    }
    glEnd();
}

void display() {
    glClear(GL_COLOR_BUFFER_BIT);
    glLoadIdentity();

    glPushMatrix();
        glTranslatef(0.0f, -0.2f, 0.0f);
        drawBody();

        // Roda Depan
        glPushMatrix();
            glTranslatef(0.42f, -0.15f, 0.0f);
            // Ban
            glColor3f(0.1f, 0.1f, 0.1f);
            drawHollowCircle(0, 0, 0.13, 0.18, 40);
            // Brake Disk
            glColor3f(0.75f, 0.75f, 0.75f);
            drawCircle(0, 0, 0.105f, 40);
            // Caliper
            drawBrakeCaliper(0, 0, 0.090f);
            // Rim
            drawCustomRim();
        glPopMatrix();

        // Roda Belakang
        glPushMatrix();
            glTranslatef(-0.42f, -0.15f, 0.0f);
            // Ban
            glColor3f(0.1f, 0.1f, 0.1f);
            drawHollowCircle(0, 0, 0.13, 0.18, 40);
            // Brake Disk
            glColor3f(0.75f, 0.75f, 0.75f);
            drawCircle(0, 0, 0.105f, 40);
            // Caliper
            drawBrakeCaliper(0, 0, 0.090f);
            // Rim
            drawCustomRim();
        glPopMatrix();

    glPopMatrix();

    glFlush();
}

int main(int argc, char** argv) {
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
    glutInitWindowSize(900, 600);
    glutCreateWindow("Nissan GTR NISMO");

    glClearColor(1.0f, 1.0f, 1.0f, 1.0f);
    gluOrtho2D(-1.0, 1.0, -1.0, 1.0);

    glutDisplayFunc(display);
    glutMainLoop();
    return 0;
}
