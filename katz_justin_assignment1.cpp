#include <GLUT/glut.h>
#include <cmath>

void init(void){
	glClearColor(0.0,0.0,0.0,0.0);
	glMatrixMode(GL_PROJECTION);
	gluOrtho2D(0.0,200.0,0.0,150.0);
}

/*
void lineSegment(void){
	glClear(GL_COLOR_BUFFER_BIT);
	glColor3f(0.0,0.4,0.2);
	glBegin(GL_LINES);
		glVertex2i(180,15);
		glVertex2i(145,10);
	glEnd();
	glFlush();
}
*/

void hexagon(void){
	glClear(GL_COLOR_BUFFER_BIT);
	glColor3f(0.0,0.4,0.2);
	glBegin(GL_LINES);
		glVertex2i(70,15);
		glVertex2i(130,15);
	glEnd();
	glColor3f(1.0,1.0,1.0);
	glBegin(GL_LINES);
		glVertex2i(130,15);
		glVertex2i(160,66.961524227066);
	glEnd();
	glColor3f(102.0,0.0,102.0);
	glBegin(GL_LINES);
		glVertex2i(160,66.961524227066);
		glVertex2i(130,118.92304845);
	glEnd();
	glColor3f(255.0,128.0,0.0);
	glBegin(GL_LINES);
		glVertex2i(130,118.92304845);
		glVertex2i(70,118.92304845);
	glEnd();
	glColor3f(255.0,15.0,51.0);
	glBegin(GL_LINES);
		glVertex2i(70,118.92304845);
		glVertex2i(40.0,66.961524227066);
	glEnd();
	glColor3f(102.0,51.0,0.0);
	glBegin(GL_LINES);
		glVertex2i(40.0,66.961524227066);
		glVertex2i(70,15);
	glEnd();
	glFlush();
}

int main(int argc, char** argv){
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
    glutInitWindowPosition(50,100);
    glutInitWindowSize(600,300);
    glutCreateWindow("Justin Katz - Assignment 1");
    init();
    glutDisplayFunc(hexagon);
    glutMainLoop();
}