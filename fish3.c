#include<stdio.h>
#include<stdlib.h>
#include<GL/glut.h>
#include<math.h>
void display_about(void);
int flag=0,ch=0,ch1=0,aa=50;
float a=0,b=0,c=0,d=0,e=0,f=0,g=0,h=0,i=0,j=0,k=0,l=0,m=0,n=0,p=0,q=0,s=0.7,x=0,y=0;
void *font;void *currentfont;

void *currentfont;
void create_menu(void);
void menu(int);
void disp1(void);
void disp2(void);
void disp3(void);
void disp4(void);
void delay(int time)
{
	float i,j,k;

	for(i=0;i<time;i=i+0.001);
	for(j=0;j<time;j=j+0.001);
	for(k=0;k<time;k=k+0.001);
}



void fish1()
{
  glBegin(GL_POLYGON);
   glVertex2f(0.7+a,0.05);

   glVertex2f(0.75+a,0.1);

   glVertex2f(0.85+a,0.05);
   glVertex2f(0.75+a,0.0);
  glEnd();


  glBegin(GL_TRIANGLES);
    glVertex2f(0.83+a,0.05);
   glVertex2f(0.9+a,0.09);
   glVertex2f(0.9+a,0.01);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex2f(0.75+a,0.095);
	glVertex2f(0.79+a,0.125);
	glVertex2f(0.77+a,0.07);
  glEnd();

glBegin(GL_TRIANGLES);
    glVertex2f(0.75+a,0.007);
	glVertex2f(0.795+a,-0.035);
	glVertex2f(0.77+a,0.02);
  glEnd();


  glPointSize(4.0);
  glBegin(GL_POINTS);
  glColor3f(0.0,0.0,0.0);
  glVertex2f(0.73+a,0.065);
  glEnd();

}



void fish2()
{
  glBegin(GL_POLYGON);
   glVertex2f(-0.7-b,-0.05);
   glVertex2f(-0.75-b,-0.1);
   glVertex2f(-0.85-b,-0.05);
   glVertex2f(-0.75-b,0.0);
  glEnd();

  glBegin(GL_TRIANGLES);
  glVertex2f(-0.83-b,-0.05);
   glVertex2f(-0.9-b,-0.09);
   glVertex2f(-0.9-b,-0.01);
  glEnd();

  glBegin(GL_TRIANGLES);
  glVertex2f(-0.75-b,-0.095);
	glVertex2f(-0.79-b,-0.125);
	glVertex2f(-0.77-b,-0.07);
  glEnd();

glBegin(GL_TRIANGLES);
    glVertex2f(-0.75-b,-0.007);
	glVertex2f(-0.795-b,0.035);
	glVertex2f(-0.77-b,-0.02);
  glEnd();

  glPointSize(4.0);
  glBegin(GL_POINTS);
  glColor3f(0.0,0.0,0.0);
  glVertex2f(-0.73-b,-0.035);
  glEnd();
}

void fish4()
{
  glBegin(GL_POLYGON);
   glVertex2f(-0.7+d,-0.15);
   glVertex2f(-0.75+d,-0.2);
   glVertex2f(-0.85+d,-0.15);
   glVertex2f(-0.75+d,-0.1);
  glEnd();

  glBegin(GL_TRIANGLES);
   glVertex2f(-0.83+d,-0.15);
   glVertex2f(-0.9+d,-0.19);
   glVertex2f(-0.9+d,-0.11);
  glEnd();


  glBegin(GL_TRIANGLES);
    glVertex2f(-0.755+d,-0.2);
	glVertex2f(-0.795+d,-0.25);
	glVertex2f(-0.775+d,-0.15);
  glEnd();

 glBegin(GL_TRIANGLES);
    glVertex2f(-0.755+d,-0.1);
	glVertex2f(-0.795+d,-0.05);
	glVertex2f(-0.775+d,-0.15);
  glEnd();

  glPointSize(4.0);
  glBegin(GL_POINTS);
  glColor3f(0.0,0.0,0.0);
  glVertex2f(-0.73+d,-0.135);
  glEnd();
}



void fish5()
{
  glBegin(GL_POLYGON);
   glVertex2f(-0.7-e,-0.25);
   glVertex2f(-0.75-e,-0.3);
   glVertex2f(-0.775-e,-0.3);
   glVertex2f(-0.85-e,-0.25);
   glVertex2f(-0.775-e,-0.2);
   glVertex2f(-0.75-e,-0.2);
  glEnd();

  glBegin(GL_TRIANGLES);
   glVertex2f(-0.83-e,-0.25);
   glVertex2f(-0.9-e,-0.29);
   glVertex2f(-0.9-e,-0.21);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex2f(-0.775-e,-0.2);
	glVertex2f(-0.79-e,-0.125);
	glVertex2f(-0.75-e,-0.2);
  glEnd();

 glBegin(GL_TRIANGLES);
    glVertex2f(-0.75-e,-0.3);
	glVertex2f(-0.795-e,-0.35);
	glVertex2f(-0.775-e,-0.3);
  glEnd();

  glPointSize(4.0);
  glBegin(GL_POINTS);
  glColor3f(0.0,0.0,0.0);
  glVertex2f(-0.73-e,-0.235);
  glEnd();
}


void fish6()
{
  glBegin(GL_POLYGON);
   glVertex2f(0.7+f,0.25);
   glVertex2f(0.75+f,0.3);
   glVertex2f(0.775+f,0.3);
   glVertex2f(0.85+f,0.25);
   glVertex2f(0.775+f,0.2);
   glVertex2f(0.75+f,0.2);
  glEnd();

  glBegin(GL_TRIANGLES);
   glVertex2f(0.83+f,0.25);
   glVertex2f(0.9+f,0.29);
   glVertex2f(0.9+f,0.21);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex2f(0.775+f,0.3);
	glVertex2f(0.79+f,0.4);
	glVertex2f(0.75+f,0.3);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex2f(0.775+f,0.2);
	glVertex2f(0.79+f,0.1);
	glVertex2f(0.75+f,0.2);
  glEnd();

  glPointSize(4.0);
  glBegin(GL_POINTS);
  glColor3f(0.0,0.0,0.0);
  glVertex2f(0.73+f,0.265);
  glEnd();

}


void plant()
{
  glColor3f(0.0,1.0,0.0);
   glLineWidth(4.0);
   glBegin(GL_LINES);        //plant 1
	glVertex2f(0.9,-0.8);  //x1,y1
	glVertex2f(0.8,-0.9);  //x2,y2    (x1,y1) ---> (x2,y2) = line 1
	glVertex2f(0.8,-0.8);
	glVertex2f(0.8,-0.9);
	glVertex2f(0.7,-0.8);
	glVertex2f(0.8,-0.9);
	glVertex2f(0.75,-0.8);
	glVertex2f(0.8,-0.9);
	glVertex2f(0.85,-0.8);
	glVertex2f(0.8,-0.9);
    glVertex2f(0.725,-0.8);
	glVertex2f(0.8,-0.9);
    glVertex2f(0.775,-0.8);
	glVertex2f(0.8,-0.9);
    glVertex2f(0.825,-0.8);
	glVertex2f(0.8,-0.9);
    glVertex2f(0.875,-0.8);
	glVertex2f(0.8,-0.9);
   glEnd();


   glLineWidth(4.0);
   glBegin(GL_LINES);      	//plant 2
	glVertex2f(0.5,-0.95);
	glVertex2f(0.6,-0.85);
	glVertex2f(0.5,-0.85);
	glVertex2f(0.5,-0.95);
	glVertex2f(0.4,-0.85);
	glVertex2f(0.5,-0.95);
	glVertex2f(0.45,-0.85);
	glVertex2f(0.5,-0.95);
	glVertex2f(0.55,-0.85);
	glVertex2f(0.5,-0.95);
    glVertex2f(0.425,-0.85);
	glVertex2f(0.5,-0.95);
    glVertex2f(0.475,-0.85);
	glVertex2f(0.5,-0.95);
    glVertex2f(0.525,-0.85);
	glVertex2f(0.5,-0.95);
    glVertex2f(0.575,-0.85);
	glVertex2f(0.5,-0.95);
   glEnd();



   glLineWidth(4.0);
   glBegin(GL_LINES);		//plant 3
	glVertex2f(0.175,-0.9);
	glVertex2f(0.275,-0.8);
	glVertex2f(0.175,-0.8);
	glVertex2f(0.175,-0.9);
	glVertex2f(0.075,-0.8);
	glVertex2f(0.175,-0.9);
	glVertex2f(0.125,-0.8);
	glVertex2f(0.175,-0.9);
	glVertex2f(0.225,-0.8);
	glVertex2f(0.175,-0.9);
    glVertex2f(0.1,-0.8);
	glVertex2f(0.175,-0.9);
    glVertex2f(0.15,-0.8);
	glVertex2f(0.175,-0.9);
    glVertex2f(0.2,-0.8);
	glVertex2f(0.175,-0.9);
    glVertex2f(0.25,-0.8);
	glVertex2f(0.175,-0.9);
   glEnd();



   glLineWidth(4.0);
   glBegin(GL_LINES); 	   	//plant 4
	glVertex2f(-0.175,-0.95);
	glVertex2f(-0.275,-0.85);
	glVertex2f(-0.175,-0.85);
	glVertex2f(-0.175,-0.95);
	glVertex2f(-0.075,-0.85);
	glVertex2f(-0.175,-0.95);
	glVertex2f(-0.125,-0.85);
	glVertex2f(-0.175,-0.95);
	glVertex2f(-0.225,-0.85);
	glVertex2f(-0.175,-0.95);
    glVertex2f(-0.1,-0.85);
	glVertex2f(-0.175,-0.95);
    glVertex2f(-0.15,-0.85);
 	glVertex2f(-0.175,-0.95);
    glVertex2f(-0.2,-0.85);
	glVertex2f(-0.175,-0.95);
    glVertex2f(-0.25,-0.85);
	glVertex2f(-0.175,-0.95);
   glEnd();

   glLineWidth(4.0);
   glBegin(GL_LINES);	 	//plant 5
	glVertex2f(-0.475,-0.9);
	glVertex2f(-0.575,-0.8);
	glVertex2f(-0.475,-0.9);
	glVertex2f(-0.475,-0.8);
	glVertex2f(-0.375,-0.8);
	glVertex2f(-0.475,-0.9);
	glVertex2f(-0.425,-0.8);
	glVertex2f(-0.475,-0.9);
	glVertex2f(-0.525,-0.8);
	glVertex2f(-0.475,-0.9);
    glVertex2f(-0.4,-0.8);
	glVertex2f(-0.475,-0.9);
    glVertex2f(-0.45,-0.8);
	glVertex2f(-0.475,-0.9);
    glVertex2f(-0.5,-0.8);
	glVertex2f(-0.475,-0.9);
    glVertex2f(-0.55,-0.8);
	glVertex2f(-0.475,-0.9);
   glEnd();



   glLineWidth(4.0);
   glBegin(GL_LINES);		//plant 6
	glVertex2f(-0.9,-0.85);
	glVertex2f(-0.8,-0.95);
	glVertex2f(-0.8,-0.85);
	glVertex2f(-0.8,-0.95);
	glVertex2f(-0.7,-0.85);
	glVertex2f(-0.8,-0.95);
	glVertex2f(-0.75,-0.85);
	glVertex2f(-0.8,-0.95);
	glVertex2f(-0.85,-0.85);
	glVertex2f(-0.8,-0.95);
    glVertex2f(-0.725,-0.85);
	glVertex2f(-0.8,-0.95);
    glVertex2f(-0.775,-0.85);
	glVertex2f(-0.8,-0.95);
    glVertex2f(-0.825,-0.85);
	glVertex2f(-0.8,-0.95);
    glVertex2f(-0.875,-0.85);
	glVertex2f(-0.8,-0.95);
   glEnd();

}
void setFont(void *font)

{

currentfont=font;

}

void drawstring(float x,float y,float z,char *string)
{
char *c; glRasterPos2f(x,y);
for(c=string;*c!='\0';c++)
{ glColor3f(0.0,1.0,1.0); 
glutBitmapCharacter(currentfont,*c);
}
}

void myinit()
{
 glClearColor(0.4,1.0,1.0,0.0);
 glColor3f(1.0,1.0,0.0);
 //gluOrtho2D(0.0,499.0,0.0,499.0);
}


void idle()
{

	 delay(aa);
	glutPostRedisplay();

}

void display(void)
{
 glClear(GL_COLOR_BUFFER_BIT|GL_DEPTH_BUFFER_BIT);
 glClearColor(0.4,1.0,1.0,0.0);
 glColor3f(1.0,0.0,0.0);
 glPointSize(2.0);
 plant();
glColor3f(1.0,0.0,0.0);

 if(a>=-1.99)        //fish movement functions
	 a=a-0.0005;
 else
   a=0;


if(b>=-1.99)
 b=b-0.0004;
 else
 	 b=0;

if(c>=-1.99)
c=c-0.0003;
 else
 	 c=0;

if(d>=-1.99)
 d=d+0.0007;
 else
 	 d=0;

if(e>=-1.99)
 e=e-0.0005;
 else
 	 e=0;


if(f>=-1.99)
 f=f-0.0002;
 else
 	 f=0;

 fish1();glColor3f(1.0,0.0,0.0);
 fish2();glColor3f(1.0,0.0,0.0);
 fish4();glColor3f(1.0,0.0,0.0);
 fish5();glColor3f(1.0,0.0,0.0);
 fish6();

 glutPostRedisplay();
 glFlush();
 glutSwapBuffers();

}

void create_menu(void) //mouse options
   {
     glutCreateMenu(menu);
     glutAttachMenu(GLUT_RIGHT_BUTTON);
     glutAddMenuEntry("red", 1);
     glutAddMenuEntry("blue", 2);
     glutAddMenuEntry("green", 3);
     glutAddMenuEntry("yellow", 4);
     glutAddMenuEntry("intro", 5);
     glutAddMenuEntry("exit", 6);

    }
void menu(int val)
   {


     switch (val) {
     case 1:
			glutDisplayFunc(disp1);
			break;
     case 2:
		    glutDisplayFunc(disp2);
			break;
	 case 3:
			glutDisplayFunc(disp3);
			break;
	 case 4:
		    glutDisplayFunc(disp4);
			break;
	 case 5:    glutDisplayFunc(display_about);
			break;
         case 6:   exit(0);




   }

}


void disp1(void)
{
    glClear(GL_COLOR_BUFFER_BIT|GL_DEPTH_BUFFER_BIT);
    glClearColor(0.4,1.0,1.0,0.0);
 glPointSize(2.0);
 plant();
glColor3f(1.0,0.0,0.0);

 if(a>=-1.99)
	 a=a-0.0005;
 else
   a=0;


if(b>=-1.99)
 b=b-0.0004;
 else
 	 b=0;

if(c>=-1.99)
c=c-0.0003;
 else
 	 c=0;

if(d>=-1.99)
 d=d+0.0007;
 else
 	 d=0;

if(e>=-1.99)
 e=e-0.0005;
 else
 	 e=0;


if(f>=-1.99)
 f=f-0.0002;
 else
 	 f=0;

 fish1();glColor3f(1.0,0.0,0.0);
 fish2();glColor3f(1.0,0.0,0.0);
 fish4();glColor3f(1.0,0.0,0.0);
 fish5();glColor3f(1.0,0.0,0.0);
 fish6();

 glutPostRedisplay();
 glFlush();
 glutSwapBuffers();


}




void disp2(void)
{
glClear(GL_COLOR_BUFFER_BIT|GL_DEPTH_BUFFER_BIT);
glClearColor(0.4,1.0,1.0,0.0);
 glPointSize(2.0);
 plant();
 glColor3f(0.0,0.0,1.0);

 if(a>=-1.99)
	 a=a-0.0005;
 else
   a=0;


if(b>=-1.99)
 b=b-0.0004;
 else
 	 b=0;

if(c>=-1.99)
c=c-0.0003;
 else
 	 c=0;

if(d>=-1.99)
 d=d+0.0007;
 else
 	 d=0;

if(e>=-1.99)
 e=e-0.0005;
 else
 	 e=0;


if(f>=-1.99)
 f=f-0.0002;
 else
 	 f=0;

 fish1();glColor3f(0.0,0.0,1.0);
 fish2();glColor3f(0.0,0.0,1.0);
 fish4();glColor3f(0.0,0.0,1.0);
 fish5();glColor3f(0.0,0.0,1.0);
 fish6();

 glutPostRedisplay();
 glFlush();
 glutSwapBuffers();

}

void disp3(void)
{

 glClear(GL_COLOR_BUFFER_BIT|GL_DEPTH_BUFFER_BIT);
 glClearColor(0.4,1.0,1.0,0.0);
 glPointSize(2.0);
 plant();
 glColor3f(0.0,1.0,0.0);

 if(a>=-1.99)
	 a=a-0.0005;
 else
   a=0;


if(b>=-1.99)
 b=b-0.0004;
 else
 	 b=0;

if(c>=-1.99)
c=c-0.0003;
 else
 	 c=0;

if(d>=-1.99)
 d=d+0.0007;
 else
 	 d=0;

if(e>=-1.99)
 e=e-0.0005;
 else
 	 e=0;


if(f>=-1.99)
 f=f-0.0002;
 else
 	 f=0;

 fish1();glColor3f(0.0,1.0,0.0);
 fish2();glColor3f(0.0,1.0,0.0);
 fish4();glColor3f(0.0,1.0,0.0);
 fish5();glColor3f(0.0,1.0,0.0);
 fish6();

 glutPostRedisplay();
 glFlush();
 glutSwapBuffers();
}

void disp4(void)
{
	glClear(GL_COLOR_BUFFER_BIT|GL_DEPTH_BUFFER_BIT);
	glClearColor(0.4,1.0,1.0,0.0);
 glPointSize(2.0);
 plant();
 glColor3f(1.0,1.0,0.0);


 if(a>=-1.99)
	 a=a-0.0005;
 else
   a=0;


if(b>=-1.99)
 b=b-0.0004;
 else
 	 b=0;

if(c>=-1.99)
c=c-0.0003;
 else
 	 c=0;

if(d>=-1.99)
 d=d+0.0007;
 else
 	 d=0;

if(e>=-1.99)
 e=e-0.0005;
 else
 	 e=0;


if(f>=-1.99)
 f=f-0.0002;
 else
 	 f=0;

 fish1();glColor3f(1.0,1.0,0.0);
 fish2();glColor3f(1.0,1.0,0.0);
 fish4();glColor3f(1.0,1.0,0.0);
 fish5();glColor3f(1.0,1.0,0.0);
 fish6();

 glutPostRedisplay();
 glFlush();
 glutSwapBuffers();
}
void display_about(void)

{

glClearColor(0.7,0.3,0.1,1.0); glClear(GL_COLOR_BUFFER_BIT|GL_DEPTH_BUFFER_BIT);

setFont(GLUT_BITMAP_TIMES_ROMAN_24); glColor3f(0.0,1.0,0.0);

drawstring(-0.6,0.9,0.0,"JSS ACADEMY OF TECHNICAL EDUCATION,BENGALURU");


 setFont(GLUT_BITMAP_TIMES_ROMAN_24); glColor3f(1.0,0.8,1.0);

drawstring(-0.4,0.8,0.0,"DEPARTMENT OF COMPUTER SCIENCE");



setFont(GLUT_BITMAP_TIMES_ROMAN_24); glColor3f(0.0,1.0,1.0);

drawstring(-0.6,0.6,0.0,"CG MINI PROJECT ON WORKING OF FISHES(AQUARIUM)");


setFont(GLUT_BITMAP_TIMES_ROMAN_24); glColor3f(0.0,1.0,1.0); drawstring(-0.2,0.5,0,"USING OPEN GL.");


setFont(GLUT_BITMAP_TIMES_ROMAN_24);

glColor3f(0.0,1.0,1.0); drawstring(-0.8,-0.7,0.0,"LAB INCHARGES");


setFont(GLUT_BITMAP_TIMES_ROMAN_24); glColor3f(1.0,1.0,1.0); drawstring(-0.9,-0.8,0.0,"Ms. Shanthala (Assistant Professor)");


glColor3f(1.0,1.0,1.0); drawstring(-0.9,-0.9,0.0,"Ms. Rashmi BN (Assistant Professor).");



glColor3f(0.0,1.0,1.0); drawstring(0.3,-0.7,0.0,"PROJECT DONE BY");


setFont(GLUT_BITMAP_TIMES_ROMAN_24); glColor3f(1.0,1.0,1.0); drawstring(0.2,-0.8,0.0,"VENKTESHPRASAD M RAO (1JS13CS118)");


glColor3f(1.0,1.0,1.0); drawstring(0.2,-0.9,0.0,"VARUN S UDUPA (1JS13CS114).");
 glFlush();

}
void key(unsigned char key,int x,int y)
{
if(key=='+')aa+=50;
 if (key=='-' && aa>=50)aa-=50;
 glutPostRedisplay();
}

int main(int argc,char **argv)
{
	glutInit(&argc,argv);
	glutInitDisplayMode(GLUT_SINGLE|GLUT_RGB);
 glutInitWindowPosition(0,0);
 glutInitWindowSize(1200,800);
 glutCreateWindow("fish");
 myinit();
 create_menu();
 glutKeyboardFunc(key);
 glutIdleFunc(idle);
 glutDisplayFunc(display_about);
 glutMainLoop();return 0;
}
