//#include <GL/glu.h>
//#include <GL/glut.h>
//
////cau 1
////GLfloat light_diffuse1[] = { 0.0, 0.0, 0.8, 1.0 };
////GLfloat light_diffuse2[] = { 0.0, 0.0, 0.8, 1.0 };
////GLfloat light_ambient1[] = { 0.0, 0.0, 0.2, 1.0 };
////GLfloat light_ambient2[] = { 0.0, 0.0, 0.2, 1.0 };
//
////cau 2
//GLfloat light_ambient1[] = { 1.0, 1.0, 0.0, 1.0 };
//GLfloat light_diffuse1[] = { 1.0, 1.0, 0.0, 1.0 };
//GLfloat light_diffuse2[] = { 1.0, 0.0, 1.0, 1.0 };
//GLfloat light_ambient2[] = { 1.0, 0.0, 1.0, 1.0 };
//void init(void) 
//{
//   GLfloat mat_specular[] = { 1.0, 1.0, 1.0, 1.0 };
//   GLfloat mat_shininess[] = { 50.0 };
//   GLfloat light_position[] = { 1.0, 1.0, 1.0, 0.0 };
//
//   GLfloat light_diffuse[] = { 0.8, 0.8, 0.0, 1.0 };
//   GLfloat light_ambient[] = { 0.2, 0.2, 0.0, 1.0 };
//
//
//   glClearColor (0.0, 0.0, 0.0, 0.0);
//   glShadeModel (GL_SMOOTH);
//   
////cau lenh be mat doi tuong : glMaterial(face,pname,param)
////face : GL_FRONT,GL_BACK,GL_FRONT_AND_BACK
////pname: GL_AMBIENT,GL_DIFFUSE,GLSPECULAR,GL_SHININESS
////param: Ambient: (0.2,0.2,0.2,1); Diffuse: (0.8,0.8,0.8,1); Specular:(0,0,0,1); shininess: do nhan bong cao nhat la 100 k có do bong la 0
//   
//   glMaterialfv(GL_FRONT, GL_SPECULAR, mat_specular);
//   glMaterialfv(GL_FRONT, GL_SHININESS, mat_shininess);
//   
//   
////cau lenh tao nguon sang : glLightfv(light,pname,parame)
////light: ten nguon sang có 8 nguon bat dau tu GL_LIGHT0->GL_LIGHT7
////pname : thuoc tinh cua nguon sang : GL_AMBIENT,GL_DIFFUSE,GL_SPECULAR,GL_POSITION
//// param: Ambient: mau den (0,0,0,1); Diffuse: mau trang (1,1,1,1); Specular: mau trang(1,1,1,1) mau sang nhat;Position:vi tri nam tren truc Oz(0,0,1)
//   glLightfv(GL_LIGHT0, GL_POSITION, light_position);
////   glLightfv(GL_LIGHT0, GL_DIFFUSE, light_diffuse);
////   glLightfv(GL_LIGHT0, GL_AMBIENT, light_ambient);
//   glEnable(GL_LIGHTING);
//   glEnable(GL_LIGHT0);
//   glEnable(GL_DEPTH_TEST);
//}
//
//float goc = 0.0;
//void display(void)
//{
//   glClear (GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
//   glLoadIdentity();
//   glTranslatef(0.8,0.0,0.0);
//   glPushMatrix();
//   glLightfv(GL_LIGHT0, GL_DIFFUSE, light_diffuse2);
//   glLightfv(GL_LIGHT0, GL_AMBIENT, light_ambient2);
//   glRotatef(goc,0,1,0);
//   glutSolidTeapot (0.5);
//   glPopMatrix();
//   glTranslatef(-1.7,0.0,0.0);
//   glPushMatrix();
//   glRotatef(goc,0,1,0);
//   glLightfv(GL_LIGHT0, GL_DIFFUSE, light_diffuse1);
//   glLightfv(GL_LIGHT0, GL_AMBIENT, light_ambient1);
//   glutSolidTeapot (0.5);
//   glPopMatrix();
//   glutSwapBuffers();
//   glFlush ();
//}
//void spin(){
//	goc += 0.05;
//	glutPostRedisplay();
//}
//void keyboard(unsigned char key,int x,int y){
//	if(key == 'a'){
//		glutIdleFunc(spin);
//	}
//}
//void reshape (int w, int h)
//{
//   glViewport (0, 0, (GLsizei) w, (GLsizei) h);
//   glMatrixMode (GL_PROJECTION);
//   glLoadIdentity();
//   
//   if (w <= h)
//      glOrtho (-1.5, 1.5, -1.5*(GLfloat)h/(GLfloat)w,
//         1.5*(GLfloat)h/(GLfloat)w, -10.0, 10.0);
//   else
//      glOrtho (-1.5*(GLfloat)w/(GLfloat)h,
//         1.5*(GLfloat)w/(GLfloat)h, -1.5, 1.5, -10.0, 10.0);
//   glMatrixMode(GL_MODELVIEW);
//   glLoadIdentity();
//}
//
//int main(int argc, char** argv)
//{
//   glutInit(&argc, argv);
//   glutInitDisplayMode (GLUT_SINGLE | GLUT_RGB | GLUT_DEPTH);
//   glutInitWindowSize (1000, 1000); 
//   glutInitWindowPosition (100, 100);
//   glutCreateWindow (argv[0]);
//   init ();
//   glutDisplayFunc(display); 
//   glutReshapeFunc(reshape);
//   glutKeyboardFunc(keyboard);
//   glutMainLoop();
//   return 0;
//}
