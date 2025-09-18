// File ID: Lab03a.cpp
// Title: Working with Graphics Primitives
// Author:
#define FREEGLUT_STATIC
#include <GL/freeglut.h>
#include <math.h>
void define_to_OpenGL();
///////////////////////////////////
int main(int argc, char** argv)
{
	glutInit(&argc, argv);
	// Task 2
	glutCreateWindow("Graphic Primitives");
	glutDisplayFunc(define_to_OpenGL);
	glutMainLoop();
}
///////////////////////////////////
void define_to_OpenGL()
{
	glClearColor(1, 1, 1, 1);
	glClear(GL_COLOR_BUFFER_BIT);
	// The stuff to appear on screen goes here
	// Task 2
	glutInitWindowSize(600, 400);
	glutInitWindowPosition(50, 50);

	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	gluOrtho2D(-100, +500, -200, 200);

	// Task 3
	glLineWidth(1.0);

	glColor3f(1.0 , 0.0 , 0.0 );
	glBegin(GL_LINES);
	glVertex2f(0.0 , 0.0 ); // start location
	glVertex2f(450.0 , 0.0 ); // end location
	glEnd();

	glColor3f(0.0, 1.0, 0.0); // 绿色
	glBegin(GL_LINES);
	glVertex2f(0.0, -150.0);   // 起点
	glVertex2f(0.0, 150.0);    // 终点
	glEnd();

	// Task 4
	glPointSize(10.0);
	glColor3f(255.0 , 255.0 , 0.0 );
	glBegin(GL_POINTS);
	glVertex2f(0.0 , 0.0 );
	glEnd();

	// Task 5
	// draw a sine wave
	int i;
	float x, y;
	glColor3f(0.0, 0.0, 1.0);
	glPointSize(1);
	glBegin(GL_POINTS);
	for (i = 0; i < 361; i = i + 5)
	{
		x = (float)i;
		y = 100.0 * sin(i * (6.284 / 360.0));
		glVertex2f(x, y);
	}
	glEnd();

	// Tasks 6, 7 and 8
	glShadeModel(GL_FLAT);
	glBegin(GL_TRIANGLES);

	glColor3f(1.0f, 0.0f, 0.0f);   // 红色
	glVertex2f(-50.0 , -50.0 );

	glColor3f(0.0f, 1.0f, 0.0f);   // 绿色
	glVertex2f(-50.0 , 0 );

	glColor3f(0.0f, 0.0f, 1.0f);   // 蓝色
	glVertex2f( 0.0, 0.0 );

	glEnd();
	glFlush();
}