#include <GL/glu.h>
#include <GL/glut.h>


GLfloat light_ambient1[] = { 1.0, 1.0, 0.0, 1.0 };
GLfloat light_diffuse1[] = { 1.0, 1.0, 0.0, 1.0 };

void init(void) 
{
   GLfloat mat_specular[] = { 1.0, 1.0, 1.0, 1.0 };
   GLfloat mat_shininess[] = { 50.0 };
   GLfloat light_position[] = { 1.0, 1.0, 1.0, 0.0 };

   glClearColor (0.0, 0.0, 0.0, 0.0);
   glShadeModel (GL_SMOOTH);
   glMaterialfv(GL_FRONT, GL_SPECULAR, mat_specular);
   glMaterialfv(GL_FRONT, GL_SHININESS, mat_shininess);
   glLightfv(GL_LIGHT0, GL_POSITION, light_position);
   glEnable(GL_LIGHTING);
   glEnable(GL_LIGHT0);
   glEnable(GL_DEPTH_TEST);
}

float goc = 0.0,tinhtien = 0.0;
void display(void)
{
   glClear (GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
   glLoadIdentity();
   glTranslatef(1.4,0,0);
   glTranslatef(tinhtien,0,0);
   glPushMatrix();
   glRotatef(goc,1,0,1);
   
   glLightfv(GL_LIGHT0, GL_DIFFUSE, light_diffuse1);
   glLightfv(GL_LIGHT0, GL_AMBIENT, light_ambient1);
   glutSolidCube (0.2);
   glPopMatrix();
   glutSwapBuffers();
   glFlush ();
}
void spin(){
	if(tinhtien > -2.5){
		goc += 0.02;
		tinhtien -= 0.0001;
		
	}else if(tinhtien <= -2.5){
		tinhtien = -2.5;
		goc += 0.02;
		tinhtien += 0.0001;
	}
	glutPostRedisplay();
}

void keyboard(unsigned char key,int x,int y){
	if(key == 'a'){
		glutIdleFunc(spin);
		tinhtien = 0.0;
	}
	
}
void reshape (int w, int h)
{
   glViewport (0, 0, (GLsizei) w, (GLsizei) h);
   glMatrixMode (GL_PROJECTION);
   glLoadIdentity();
   
   if (w <= h)
      glOrtho (-1.5, 1.5, -1.5*(GLfloat)h/(GLfloat)w,
         1.5*(GLfloat)h/(GLfloat)w, -10.0, 10.0);
   else
      glOrtho (-1.5*(GLfloat)w/(GLfloat)h,
         1.5*(GLfloat)w/(GLfloat)h, -1.5, 1.5, -10.0, 10.0);
   glMatrixMode(GL_MODELVIEW);
   glLoadIdentity();
}

int main(int argc, char** argv)
{
   glutInit(&argc, argv);
   glutInitDisplayMode (GLUT_SINGLE | GLUT_RGB | GLUT_DEPTH);
   glutInitWindowSize (500, 500); 
   glutInitWindowPosition (100, 100);
   glutCreateWindow (argv[0]);
   init ();
   glutDisplayFunc(display); 
   glutReshapeFunc(reshape);
   glutKeyboardFunc(keyboard);
   glutMainLoop();
   return 0;
}
