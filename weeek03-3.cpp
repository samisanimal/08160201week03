#include <GL/glut.h>
void display()
{
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
    glutSolidTeapot(0.3);///��߯���
    glutSwapBuffers();///�洫�⭿��buffers
}
int main(int argc,char ** argv)
{
    glutInit(&argc,argv);
    glutInitDisplayMode(GLUT_DOUBLE | GLUT_DEPTH);
    glutCreateWindow("08160201��k�Ī��p����");///�}�ҵ���

    glutDisplayFunc(display);///��ܪ����

    glutMainLoop();///�D�n�j��
}