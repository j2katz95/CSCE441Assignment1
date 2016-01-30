#include <GLUT/glut.h>
#include <cmath>

void init(void){
	glClearColor(0.0,0.0,0.0,0.0);
	glMatrixMode(GL_PROJECTION);
	gluOrtho2D(0.0,600.0,0.0,300.0);
}

void hexagon(void){
	glClear(GL_COLOR_BUFFER_BIT);
	glColor3f(0.0,0.4,0.2);
	glBegin(GL_LINES);
		glVertex2i(270,100);
		glVertex2i(330,100);
	glEnd();
	glColor3f(1.0,1.0,1.0);
	glBegin(GL_LINES);
		glVertex2i(330,100);
		glVertex2i(360,151.961524227066);
	glEnd();
	glColor3f(0.6,0.0,0.6);
	glBegin(GL_LINES);
		glVertex2i(360,151.961524227066);
		glVertex2i(330,203.92304845);
	glEnd();
	glColor3f(255.0,255.0,0.0);
	glBegin(GL_LINES);
		glVertex2i(330,203.92304845);
		glVertex2i(270,203.92304845);
	glEnd();
	glColor3f(1.0,0.5,0.0);
	glBegin(GL_LINES);
		glVertex2i(270,203.92304845);
		glVertex2i(240.0,151.961524227066);
	glEnd();
	glColor3f(0.4,0.2,0.0);
	glBegin(GL_LINES);
		glVertex2i(240.0,151.961524227066);
		glVertex2i(270,100);
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