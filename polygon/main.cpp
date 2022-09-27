#include <windows.h>
#ifdef _APPLE_
#include <GLUT/glut.h>
#else
#include <GL/glut.h>
#endif

#include <stdlib.h>

void init(void);
void draw(void);

main(int argc, char **argv){
    glutInit(&argc, argv);
    glutInitDisplayMode (GLUT_DOUBLE | GLUT_RGB);
    glutInitWindowSize(500, 500);
    glutInitWindowPosition(100, 100);
    glutCreateWindow("Polygon");
    init();
    glutDisplayFunc(draw);
    glutMainLoop();
    return 0;
}

void init(void)
{
    glClearColor(0.0, 0.0, 0.0, 0.0);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    glOrtho(0.0,10.0,0.0,10.0,-10.0, 10.0);
}

void draw(void)
{
    glClear(GL_COLOR_BUFFER_BIT);

    glLineWidth(3.0);
    glBegin(GL_LINES);

    glColor3f(1.0,0.0,0.0);

    //garis 1
    glVertex3f(2.0,2.0,0.0);
    glVertex3f(8.0,2.0,0.0);

    //garis 2
    glVertex3f(8.0,2.0,0.0);
    glVertex3f(9.0,5.0,0.0);

    //garis 3
    glVertex3f(9.0,5.0,0.0);
    glVertex3f(8.0,8.0,0.0);

    //garis 4
    glVertex3f(2.0,8.0,0.0);
    glVertex3f(8.0,8.0,0.0);

    //garis 5
    glVertex3f(2.0,8.0,0.0);
    glVertex3f(1.0,5.0,0.0);

    //garis 6
    glVertex3f(1.0,5.0,0.0);
    glVertex3f(2.0,2.0,0.0);

    glEnd();

    glutSwapBuffers();
}
