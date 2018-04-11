//
//  main.cpp
//  Proiect Grafica
//
//  Created by Vlad Gabriel on 25/04/2017.
//  Copyright © 2017 VladGabriel. All rights reserved.
//

#include<windows.h>
#include <GL/glut.h>
#include<GL/freeglut.h>
#include<math.h>
#include <iostream>
//#include <GL/glew.h>
#include<cstdio>
//#include <OpenGL/gl.h>
//#include <OpenGL/glu.h>


GLfloat angle1 = 0.0;
GLfloat angle3 = 0.0;
GLfloat angle4 = 0.0;
GLfloat angle5 = 0.0;
GLfloat angle6 = 0.0;
GLfloat angle7 = 0.0;
GLfloat angle8 = 0.0;
GLfloat angle9 = 0.0;
GLfloat angle10 = 0.0;
GLfloat angle11 = 0.0;
GLfloat angle12 = 0.0;
GLfloat angle13 = 0.0;
GLfloat angle14 = 0.0;


int refreshMills = 30;
bool start = 0;


void initGL() {
        glClearColor(1, 1, 0.5, 1.0f);
}


void Timer(int value) {
    glutPostRedisplay();
    glutTimerFunc(refreshMills, Timer, 0);
}

void mouse(int button, int state, int x, int y) {
        if (button == GLUT_LEFT_BUTTON && state == GLUT_DOWN)
               start = 1; }


void display() {
    glClear(GL_COLOR_BUFFER_BIT);            // masa
    glMatrixMode(GL_MODELVIEW);
    glLoadIdentity();
    
    glPushMatrix();
    glBegin(GL_QUADS);
    glColor3f(0.600, 0.196, 0.800);
    glVertex2f(-1.75, 0.0);
    glVertex2f( 1.6, 0.0);
    glVertex2f( 1.6,  0.1);
    glVertex2f(-1.75,  0.1);
    glEnd();
    glPopMatrix();
    
    
    
    
    glPushMatrix();                          // paharul
    glBegin(GL_POLYGON);
    glColor3f(0.878, 1.000, 1.000);
    glVertex2f(-1.65, 0.1);
    glVertex2f(-1.55, 0.1);
    glVertex2f(-1.51,  0.29);
    glVertex2f(-1.69,  0.29);
    glEnd();
    glPopMatrix();
    glPushMatrix();           // apa din pahar
    glBegin(GL_POLYGON);
    glColor3f(0.118, 0.565, 1.000);
    glVertex2f(-1.65, 0.1);
    glVertex2f(-1.55, 0.1);
    glVertex2f(-1.52,  0.25);
    glVertex2f(-1.68,  0.25);
    glEnd();
    glPopMatrix();

    
    glPushMatrix();                          // piciorul 1
    glBegin(GL_POLYGON);
    glColor3f(0.600, 0.196, 0.800);
    glVertex2f(-1.5, -0.8);
    glVertex2f(-1.4, -0.8);
    glVertex2f(-1.4, 0.0);
    glVertex2f(-1.5, 0.0);
    glEnd();
    glPopMatrix();
    glPushMatrix();           // piciorul 2
    glBegin(GL_POLYGON);
    glColor3f(0.600, 0.196, 0.800);
    glVertex2f(1.25, -0.8);
    glVertex2f(1.35, -0.8);
    glVertex2f(1.35,  0.0);
    glVertex2f(1.25,  0.0);
    glEnd();
    glPopMatrix();
    
    
    glPushMatrix();                          // batul
    glTranslatef(0.0f, 0.0f, 0.0f);
    if (start)
    glTranslatef(0.12f, 0.0f, 0.0f);
    glBegin(GL_QUADS);
    glColor3f(0.824, 0.412, 0.118);
    glVertex2f(-3, 0.55);
    glVertex2f(-1.5, 0.55);
    glVertex2f(-1.5, 0.60);
    glVertex2f(-3, 0.60);
    glEnd();
    glPopMatrix();
    
    
    
    
    glPushMatrix();
    glTranslatef(-1.3f, 0.10f, 0.0f);              //1
    glRotatef(-angle1, 0.0f, 0.0f, 1.0f);
    glTranslatef(-0.05f, 0.3f, 0.0f);
    
    glBegin(GL_QUADS);
    
    glColor3f(1.0f, 0.15f, 0.0f);
    if (angle1 > 19.3)
        glColor3f(0.180, 0.545, 0.341);
    glVertex2f(-0.04f, -0.3f);
    glVertex2f( 0.04f, -0.3f);
    glVertex2f( 0.04f,  0.3f);
    glVertex2f(-0.04f,  0.3f);

    glEnd();
    glPopMatrix();
    
    
    glPushMatrix();                                //2
    glTranslatef(-1.1f, 0.10f, 0.0f);
    if (angle1 > 10)
    {
        glRotatef(-angle3, 0.0f, 0.0f, 1.0f);
        if (angle3 < 80) angle3 += 2.0f ;
    }
    glTranslatef(-0.05f, 0.3f, 0.0f);

    glBegin(GL_QUADS);
    glColor3f(1.0f, 0.15f, 0.0f);
    if (angle3 > 19.3)
        glColor3f(0.180, 0.545, 0.341);
    glVertex2f(-0.04f, -0.3f);
    glVertex2f( 0.04f, -0.3f);
    glVertex2f( 0.04f,  0.3f);
    glVertex2f(-0.04f,  0.3f);
    
    glEnd();
    glPopMatrix();
    
    glPushMatrix();
    glTranslatef(-0.9f, 0.1f, 0.0f);              //3
    if (angle3 > 10)
    {
        glRotatef(-angle4, 0.0f, 0.0f, 1.0f);
        if (angle4 < 80) angle4 += 2.0f ;
    }
    glTranslatef(-0.05f, 0.3f, 0.0f);

    glBegin(GL_QUADS);
    glColor3f(1.0f, 0.15f, 0.0f);
    if (angle4 > 19.3)
        glColor3f(0.180, 0.545, 0.341);
    glVertex2f(-0.04f, -0.3f);
    glVertex2f( 0.04f, -0.3f);
    glVertex2f( 0.04f,  0.3f);
    glVertex2f(-0.04f,  0.3f);
    glEnd();
    glPopMatrix();
    
    
    glPushMatrix();
    glTranslatef(-0.7f, 0.1f, 0.0f);           //4
    if (angle4 > 10)
    {
        glRotatef(-angle5, 0.0f, 0.0f, 1.0f);
        if (angle5 < 80) angle5 += 2.0f ;
    }
    glTranslatef(-0.05f, 0.3f, 0.0f);
    glBegin(GL_QUADS);
    glColor3f(1.0f, 0.15f, 0.0f);
    if (angle5 > 19.3)
        glColor3f(0.180, 0.545, 0.341);
    glVertex2f(-0.04f, -0.3f);
    glVertex2f( 0.04f, -0.3f);
    glVertex2f( 0.04f,  0.3f);
    glVertex2f(-0.04f,  0.3f);
    glEnd();
    glPopMatrix();
    
    glPushMatrix();
    glTranslatef(-0.5f, 0.1f, 0.0f);              //5
    if (angle5 > 10)
    {
        glRotatef(-angle6, 0.0f, 0.0f, 1.0f);
        if (angle6 < 80) angle6 += 2.0f ;
    }
    glTranslatef(-0.05f, 0.3f, 0.0f);

    glBegin(GL_QUADS);
    glColor3f(1.0f, 0.15f, 0.0f);
    if (angle6 > 19.3)
        glColor3f(0.180, 0.545, 0.341);
    glVertex2f(-0.04f, -0.3f);
    glVertex2f( 0.04f, -0.3f);
    glVertex2f( 0.04f,  0.3f);
    glVertex2f(-0.04f,  0.3f);
    glEnd();
    glPopMatrix();
    
    glPushMatrix();
    glTranslatef(-0.3f, 0.1f, 0.0f);              //6
    if (angle6 > 10)
    {
        glRotatef(-angle7, 0.0f, 0.0f, 1.0f);
        if (angle7 < 80) angle7 += 2.0f ;
    }
    glTranslatef(-0.05f, 0.3f, 0.0f);
    glBegin(GL_QUADS);
    glColor3f(1.0f, 0.1f, 0.0f);
    if (angle7 > 19.3)
        glColor3f(0.180, 0.545, 0.341);
    glVertex2f(-0.04f, -0.3f);
    glVertex2f( 0.04f, -0.3f);
    glVertex2f( 0.04f,  0.3f);
    glVertex2f(-0.04f,  0.3f);
    glEnd();
    glPopMatrix();
    
    glPushMatrix();
    glTranslatef(-0.1f, 0.1f, 0.0f);            //7
    if (angle7 > 10)
    {
        glRotatef(-angle8, 0.0f, 0.0f, 1.0f);
        if (angle8 < 80) angle8 += 2.0f ;
    }
    glTranslatef(-0.05f, 0.3f, 0.0f);

    glBegin(GL_QUADS);
    glColor3f(1.0f, 0.1f, 0.0f);
    if (angle8 > 19.3)
        glColor3f(0.180, 0.545, 0.341);
    glVertex2f(-0.04f, -0.3f);
    glVertex2f( 0.04f, -0.3f);
    glVertex2f( 0.04f,  0.3f);
    glVertex2f(-0.04f,  0.3f);
    glEnd();
    glPopMatrix();
    
    glPushMatrix();
    glTranslatef(0.1f, 0.1f, 0.0f);             //8
    if (angle8 > 10)
    {
        glRotatef(-angle9, 0.0f, 0.0f, 1.0f);
        if (angle9 < 80) angle9 += 2.0f ;
    }
    glTranslatef(-0.05f, 0.3f, 0.0f);
    glBegin(GL_QUADS);
    glColor3f(1.0f, 0.1f, 0.0f);
    if (angle9 > 19.3)
        glColor3f(0.180, 0.545, 0.341);
    glVertex2f(-0.04f, -0.3f);
    glVertex2f( 0.04f, -0.3f);
    glVertex2f( 0.04f,  0.3f);
    glVertex2f(-0.04f,  0.3f);
    glEnd();
    glPopMatrix();
    
    glPushMatrix();
    glTranslatef(0.3f, 0.1f, 0.0f);            //8
    if (angle9 > 10)
    {
        glRotatef(-angle10, 0.0f, 0.0f, 1.0f);
        if (angle10 < 80) angle10 += 2.0f ;
    }
    glTranslatef(-0.05f, 0.3f, 0.0f);

    glBegin(GL_QUADS);
    glColor3f(1.0f, 0.1f, 0.0f);
    if (angle10 > 19.3)
        glColor3f(0.180, 0.545, 0.341);
    glVertex2f(-0.04f, -0.3f);
    glVertex2f( 0.04f, -0.3f);
    glVertex2f( 0.04f,  0.3f);
    glVertex2f(-0.04f,  0.3f);
    glEnd();
    glPopMatrix();
    
    glPushMatrix();
    glTranslatef(0.5f, 0.1f, 0.0f);             //9
    if (angle10 > 10)
    {
        glRotatef(-angle11, 0.0f, 0.0f, 1.0f);
        if (angle11 < 80) angle11 += 2.0f ;
    }
    glTranslatef(-0.05f, 0.3f, 0.0f);
    glBegin(GL_QUADS);
    glColor3f(1.0f, 0.0f, 0.0f);
    if (angle11 > 19.3)
        glColor3f(0.180, 0.545, 0.341);
    glVertex2f(-0.04f, -0.3f);
    glVertex2f( 0.04f, -0.3f);
    glVertex2f( 0.04f,  0.3f);
    glVertex2f(-0.04f,  0.3f);
    glEnd();
    glPopMatrix();
    
    glPushMatrix();
    glTranslatef(0.7f, 0.1f, 0.0f);              //10
    if (angle11 > 10)
    {
        glRotatef(-angle12, 0.0f, 0.0f, 1.0f);
        if (angle12 < 80) angle12 += 2.0f ;
    }
    glTranslatef(-0.05f, 0.3f, 0.0f);
    glBegin(GL_QUADS);
    glColor3f(1.0f, 0.0f, 0.0f);
    if (angle12 > 19.3)
        glColor3f(0.180, 0.545, 0.341);
    glVertex2f(-0.04f, -0.3f);
    glVertex2f( 0.04f, -0.3f);
    glVertex2f( 0.04f,  0.3f);
    glVertex2f(-0.04f,  0.3f);
    glEnd();
    glPopMatrix();
    
    glPushMatrix();
    glTranslatef(0.9f, 0.1f, 0.0f);              //11
    if (angle12 > 10)
    {
        glRotatef(-angle13, 0.0f, 0.0f, 1.0f);
        if (angle13 < 80) angle13 += 2.0f ;
    }
    glTranslatef(-0.05f, 0.3f, 0.0f);

    glBegin(GL_QUADS);
    glColor3f(1.0f, 0.0f, 0.0f);
    if (angle13 > 19.3)
        glColor3f(0.180, 0.545, 0.341);
    glVertex2f(-0.04f, -0.3f);
    glVertex2f( 0.04f, -0.3f);
    glVertex2f( 0.04f,  0.3f);
    glVertex2f(-0.04f,  0.3f);
    glEnd();
    glPopMatrix();
    
    
    glPushMatrix();
    glTranslatef(1.1f, 0.1f, 0.0f);              //12
    if (angle13 > 10)
    {
        glRotatef(-angle14, 0.0f, 0.0f, 1.0f);
        if (angle14 < 90) angle14 += 2.5f ;
    }
    glTranslatef(-0.05f, 0.3f, 0.0f);
    glBegin(GL_QUADS);
    glColor3f(1.0f, 0.0f, 0.0f);
    if (angle14 > 19.3)
        glColor3f(0.180, 0.545, 0.341);
    glVertex2f(-0.04f, -0.3f);
    glVertex2f( 0.04f, -0.3f);
    glVertex2f( 0.04f,  0.3f);
    glVertex2f(-0.04f,  0.3f);
    glEnd();
    glPopMatrix();

    
    
    


    glutSwapBuffers();
    if (angle1 < 80.0 && start == 1)
        angle1 += 2.0f;

  }

void reshape(GLsizei width, GLsizei height) {
        if (height == 0) height = 1;
    GLfloat aspect = (GLfloat)width / (GLfloat)height;
    
    
    glViewport(0, 0, width, height);
    
        glMatrixMode(GL_PROJECTION);      glLoadIdentity();
    if (width >= height) {
                gluOrtho2D(-1.0 * aspect, 1.0 * aspect, -1.0, 1.0);
    } else {
        
        gluOrtho2D(-1.0, 1.0, -1.0 / aspect, 1.0 / aspect);
    }
}

int main(int argc, char** argv) {
    glutInit(&argc, argv);
    
    glutInitDisplayMode(GLUT_DOUBLE);
    
    glutInitWindowSize(1600, 800);
    glutInitWindowPosition(50, 50);
    glutCreateWindow("DOMINO 2D");
    glutDisplayFunc(display);
    glutReshapeFunc(reshape);
    glutMouseFunc(mouse);

    glutTimerFunc(0, Timer, 0);
    initGL();
    glutMainLoop();
    return 0;
}
