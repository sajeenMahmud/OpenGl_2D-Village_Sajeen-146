#include <GL/gl.h>
#include <GL/glu.h>
#include <GL/glut.h>
#include <stdlib.h>
#include <stdio.h>
#include <windows.h>
#include <math.h>
# define PI 3.14159265358979323846



void circle(float a, float b, float r){

    int i;
    int triangleAmount = 100;
    GLfloat twicePi = 2.0f * PI;
    GLfloat x=a; GLfloat y=b; GLfloat radius =r;
       glBegin(GL_TRIANGLE_FAN);
       glVertex2f(x, y);
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
                x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
}  glEnd();}

void init()
{
    glClearColor(0.0,3.5,0,0.5);
    glMatrixMode(GL_PROJECTION);
    gluOrtho2D(0,1800,0,1200);
}


void sun(){

    glColor3f(0.95, 0.7, 0.15);
    circle(1,1,1);

}


void boat(){

    glColor3f(0.5,0.25, 0.0);
    glPushMatrix();
    glBegin(GL_POLYGON);
    glVertex2i(1595,860);
    glVertex2i(1560,810);
    glVertex2i(1410,810);
    glVertex2i(1380,860);
    glEnd();
    glPopMatrix();

}

void backGround(){

     /// probot 1
    glColor3f(0.7, 1, 0.21);
    glBegin(GL_TRIANGLES);
    glVertex2i(30,1100);
    glVertex2i(60,1000);
    glVertex2i(10,1000);
    glEnd();

    /// probot 2
    glColor3f(0.7, 1, 0.21);
    glBegin(GL_TRIANGLES);
    glVertex2i(130,1150);
    glVertex2i(160,1000);
    glVertex2i(60,1000);
    glEnd();

    /// probot 3
    glColor3f(0.7, 1, 0.21);
    glBegin(GL_TRIANGLES);
    glVertex2i(200,1050);
    glVertex2i(250,1000);
    glVertex2i(160,1000);
    glEnd();

    /// probot 4
    glColor3f(0.7, 1, 0.21);
    glBegin(GL_TRIANGLES);
    glVertex2i(400,1100);
    glVertex2i(550,1000);
    glVertex2i(250,1000);
    glEnd();

}


//animation
GLfloat boatP = 200.0f;
GLfloat boatS = 0.05f;
void boatUp(int value) {
    if(boatP <-180)
    boatP = 480;
    boatP -= boatS;
    glutPostRedisplay();
    glutTimerFunc(1, boatUp, 0);
}

GLfloat boatP2 = -180.0f;
GLfloat boatS2 = 0.05f;
void boatUp2(int value) {
    if(boatP2 > 480)
    boatP2 = -180;
    boatP2 += boatS2;
    glutPostRedisplay();
    glutTimerFunc(1, boatUp2, 0);
}

//sun
GLfloat sunP=0.0f;
GLfloat sunS=0.05f;

void sunUp(int value){

    if(sunP>1850)
        sunP=0;
        sunP += sunS;
        glutPostRedisplay();
        glutTimerFunc(1,sunUp,0);
}


void home()
{

    glClear(GL_COLOR_BUFFER_BIT);

    ///Sky
    glColor3f(0.65, 0.99, 1);
    glBegin(GL_POLYGON);
    glVertex2i(1800,1300);
    glVertex2i(1800,1000);
    glVertex2i(0,1000);
    glVertex2i(0,1300);
    glEnd();

    glPushMatrix();
    glTranslatef(sunP,1100,0);
    glScalef(60,60,0);
    sun();
    glPopMatrix();

    //backGround
    backGround();

    glPushMatrix();
    glTranslatef(400,0,0);
    glScalef(1,1,0);
    backGround();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(900,0,0);
    glScalef(1,1,0);
    backGround();
    glPopMatrix();


    glPushMatrix();
    glTranslatef(1300,0,0);
    glScalef(1,1,0);
    backGround();
    glPopMatrix();




    /// HOME 1
    glColor3f(0.5,0.0,0.0);
    glBegin(GL_POLYGON);
    glVertex2i(100,250);
    glVertex2i(300,250);
    glVertex2i(350,175);
    glVertex2i(150,175);
    glEnd();


    glColor3f(0.0,0.5,0.0);
    glBegin(GL_TRIANGLES);
    glVertex2i(100,250);
    glVertex2i(150,175);
    glVertex2i(50,175);
    glEnd();


    glColor3f(0.0,0.2,0.0);
    glBegin(GL_POLYGON);
    glVertex2i(50,175);
    glVertex2i(150,175);
    glVertex2i(150,50);
    glVertex2i(50,50);
    glEnd();


    glColor3f(0.0,0.0,0.5);
    glBegin(GL_POLYGON);
    glVertex2i(150,175);
    glVertex2i(350,175);
    glVertex2i(350,50);
    glVertex2i(150,50);
    glEnd();

    /// HOME 2
    glColor3f(0.5,0.0,0.0);
    glBegin(GL_POLYGON);
    glVertex2i(100,750);
    glVertex2i(300,750);
    glVertex2i(350,675);
    glVertex2i(150,675);
    glEnd();


    glColor3f(0.0,0.5,0.0);
    glBegin(GL_TRIANGLES);
    glVertex2i(100,750);
    glVertex2i(150,675);
    glVertex2i(50,675);
    glEnd();


    glColor3f(0.0,0.2,0.0);
    glBegin(GL_POLYGON);
    glVertex2i(50,675);
    glVertex2i(150,675);
    glVertex2i(150,550);
    glVertex2i(50,550);
    glEnd();


    glColor3f(0.0,0.0,0.5);
    glBegin(GL_POLYGON);
    glVertex2i(150,675);
    glVertex2i(350,675);
    glVertex2i(350,550);
    glVertex2i(150,550);
    glEnd();

    ///Home 3

    glColor3f(0.5,0.0,0.0);
    glBegin(GL_POLYGON);
    glVertex2i(550,200);
    glVertex2i(750,200);
    glVertex2i(800,125);
    glVertex2i(600,125);
    glEnd();


    glColor3f(0.0,0.5,0.0);
    glBegin(GL_TRIANGLES);
    glVertex2i(550,200);
    glVertex2i(600,125);
    glVertex2i(500,125);
    glEnd();


    glColor3f(0.0,0.2,0.0);
    glBegin(GL_POLYGON);
    glVertex2i(500,125);
    glVertex2i(600,125);
    glVertex2i(600,25);
    glVertex2i(500,25);
    glEnd();


    glColor3f(0.0,0.0,0.5);
    glBegin(GL_POLYGON);
    glVertex2i(600,125);
    glVertex2i(800,125);
    glVertex2i(800,25);
    glVertex2i(600,25);
    glEnd();

    /// River
    glColor3f(0, 255, 255);
    glBegin(GL_POLYGON);
    glVertex2i(1800,1000);
    glVertex2i(1800,500);
    glVertex2i(1200,500);
    glVertex2i(1200,1000);
    glEnd();




    /// Boat 2

    glPushMatrix();
    glTranslatef(boatP,1,0);
    glScalef(1,1,0);
    boat();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(boatP2,-150,0);
    glScalef(1,1,0);
    boat();
    glPopMatrix();



    /// Field
    glColor3f(0.0,0.25, 0.0);
    glBegin(GL_POLYGON);
    glVertex2i(1800,400);
    glVertex2i(1800,0);
    glVertex2i(1200,0);
    glVertex2i(1200,400);
    glEnd();

    /// Road 1
    glColor3f(0.60,0.53, 0.0);
    glBegin(GL_POLYGON);
    glVertex2i(1800,500);
    glVertex2i(1800,400);
    glVertex2i(0,400);
    glVertex2i(0,500);
    glEnd();

    /// Road 2
    glColor3f(0.60,0.53, 0.0);
    glBegin(GL_POLYGON);
    glVertex2i(300,550);
    glVertex2i(300,500);
    glVertex2i(200,500);
    glVertex2i(200,550);
    glEnd();

    /// Road 3
    glColor3f(0.60,0.53, 0.0);
    glBegin(GL_POLYGON);
    glVertex2i(700,400);
    glVertex2i(700,200);
    glVertex2i(600,200);
    glVertex2i(600,400);
    glEnd();

    /// Road 4
    glColor3f(0.60,0.53, 0.0);
    glBegin(GL_POLYGON);
    glVertex2i(250,400);
    glVertex2i(250,250);
    glVertex2i(150,250);
    glVertex2i(150,400);
    glEnd();

    /// tree 1
    glColor3f(0.0,0.0,0.0);
    glBegin(GL_POLYGON);
    glVertex2i(710,790);
    glVertex2i(710,750);
    glVertex2i(700,750);
    glVertex2i(700,790);
    glEnd();

    glColor3f(0.0,0.25,0.0);
    glBegin(GL_TRIANGLES);
    glVertex2i(705,900);
    glVertex2i(750,790);
    glVertex2i(650,790);
    glEnd();

    /// tree 2
    glColor3f(0.0,0.0,0.0);
    glBegin(GL_POLYGON);
    glVertex2i(800,850);
    glVertex2i(800,830);
    glVertex2i(790,830);
    glVertex2i(790,880);
    glEnd();

    glColor3f(0.0,0.25,0.0);
    glBegin(GL_TRIANGLES);
    glVertex2i(790,990);
    glVertex2i(840,880);
    glVertex2i(740,880);
    glEnd();

    /// tree 3
    glColor3f(0.0,0.0,0.0);
    glBegin(GL_POLYGON);
    glVertex2i(810,750);
    glVertex2i(810,710);
    glVertex2i(800,710);
    glVertex2i(800,750);
    glEnd();

    glColor3f(0.0,0.25,0.0);
    glBegin(GL_TRIANGLES);
    glVertex2i(805,860);
    glVertex2i(850,750);
    glVertex2i(750,750);
    glEnd();


    /// tree 4
    glColor3f(0.0,0.0,0.0);
    glBegin(GL_POLYGON);
    glVertex2i(910,790);
    glVertex2i(910,750);
    glVertex2i(900,750);
    glVertex2i(900,790);
    glEnd();

    glColor3f(0.0,0.25,0.0);
    glBegin(GL_TRIANGLES);
    glVertex2i(905,900);
    glVertex2i(950,790);
    glVertex2i(850,790);
    glEnd();



    glFlush();


}

int main(int argc, char **argv)
{
    glutInit(&argc,argv);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
    glutInitWindowPosition(100,100);
    glutInitWindowSize(1000,600);
    glutCreateWindow("2D house in OpenGL");
    init();
    glutDisplayFunc(home);
    glutTimerFunc(10, boatUp, 0);
    glutTimerFunc(10, boatUp2, 0);
    glutTimerFunc(10,sunUp,0);
    glutMainLoop();
}
