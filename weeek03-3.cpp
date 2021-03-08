#include <GL/glut.h>
void display()
{
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
    glutSolidTeapot(0.3);///實心茶壺
    glutSwapBuffers();///交換兩倍的buffers
}
int main(int argc,char ** argv)
{
    glutInit(&argc,argv);
    glutInitDisplayMode(GLUT_DOUBLE | GLUT_DEPTH);
    glutCreateWindow("08160201賣女孩的小火柴");///開啟視窗

    glutDisplayFunc(display);///顯示的函示

    glutMainLoop();///主要迴圈
}
