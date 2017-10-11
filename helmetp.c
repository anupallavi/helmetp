#include <GL/glut.h>
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<string.h>
void circle_draw(GLint h,GLint k,GLint r);
void windows();
void DrawWheels();
void bikedraw();
void sidesdraw();
void bikedisplay();
void blast();
GLint c=325,ca=70;
GLint b=-95,ba=165;
GLint s1=0;
GLint helmet=0,no_helmet=0;
void update(int value)
{
	c-=25.0;
	b+=25.0;
	if(b>160)
	{
		c=70;
		b=165;
	}
	glutPostRedisplay();		
	glutTimerFunc(400,update,0);	
}
void init(void)
{
	glClearColor(1.0,1.0,1.0,1.0);
	glColor3f(0.0,0.0,0.0);
	glPointSize(5.0);
	glLineWidth(5.0);
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	gluOrtho2D(0.0,700.0,0.0,650.0);
}
void buildings()
{
	glColor3f(0.0,0.0,0.0);
	glBegin(GL_LINE_STRIP);
		glVertex3i(0.0,200.0,-1.0);
		glVertex3i(0.0,550.0,-1.0);
		glVertex3i(50.0,550.0,-1.0);
		glVertex3i(50.0,200.0,-1.0);//1
	glEnd();
	glBegin(GL_LINE_STRIP);
		glVertex3i(50.0,200.0,-1.0);
		glVertex3i(50.0,440.0,-1.0);//2
		glVertex3i(100.0,440.0,-1.0);
		glVertex3i(100.0,200.0,-1.0);
	glEnd();
	glBegin(GL_LINE_STRIP);
		glVertex3i(100.0,200.0,-1.0);//3
		glVertex3i(100.0,500.0,-1.0);
		glVertex3i(150.0,500.0,-1.0);
		glVertex3i(150.0,200.0,-1.0);
	glEnd();
	glBegin(GL_LINE_STRIP);
		glVertex3i(150.0,200.0,-1.0);//4
		glVertex3i(150.0,450.0,-1.0);
		glVertex3i(250.0,450.0,-1.0);
		glVertex3i(250.0,200.0,-1.0);
	glEnd();
	glBegin(GL_LINE_STRIP);
		glVertex3i(250.0,200.0,-1.0);//5
		glVertex3i(250.0,600.0,-1.0);
		glVertex3i(290.0,600.0,-1.0);
		glVertex3i(290.0,200.0,-1.0);
	glEnd();
	glBegin(GL_LINE_STRIP);
		glVertex3i(290.0,200.0,-1.0);//6
		glVertex3i(290.0,580.0,-1.0);
		glVertex3i(340.0,580.0,-1.0);
		glVertex3i(340.0,200.0,-1.0);
	glEnd();
	glBegin(GL_LINE_STRIP);
		glVertex3i(340.0,200.0,-1.0);//7
		glVertex3i(340.0,600.0,-1.0);
		glVertex3i(400.0,600.0,-1.0);
		glVertex3i(400.0,200.0,-1.0);
	glEnd();
	glBegin(GL_LINE_STRIP);
		glVertex3i(400.0,200.0,-1.0);//8
		glVertex3i(400.0,500.0,-1.0);
		glVertex3i(460.0,500.0,-1.0);
		glVertex3i(460.0,200.0,-1.0);
	glEnd();
	glBegin(GL_LINE_STRIP);
		glVertex3i(460.0,200.0,-1.0);
		glVertex3i(460.0,570.0,-1.0);//9
		glVertex3i(550.0,570.0,-1.0);
		glVertex3i(550.0,200.0,-1.0);
	glEnd();
	glBegin(GL_LINE_STRIP);
		glVertex3i(550.0,200.0,-1.0);
		glVertex3i(550.0,470.0,-1.0);//10
		glVertex3i(600.0,470.0,-1.0);
		glVertex3i(600.0,200.0,-1.0);
	glEnd();
	glBegin(GL_LINE_STRIP);
		glVertex3i(600.0,200.0,-1.0);
		glVertex3i(600.0,630.0,-1.0);//11
		glVertex3i(640.0,630.0,-1.0);
		glVertex3i(640.0,200.0,-1.0);
	glEnd();
	glBegin(GL_LINE_STRIP);
		glVertex3i(640.0,200.0,-1.0);
		glVertex3i(640.0,530.0,-1.0);//12
		glVertex3i(700.0,530.0,-1.0);
		glVertex3i(700.0,200.0,-1.0);
	glEnd();
	windows();
}
void draw_window(int x,int y)
{
	
	glBegin(GL_POLYGON);
		glColor3f(0.0,0.0,0.0);
		glVertex3i(x,y,-1.0);
		glVertex3i(x,y+15,-1.0);
		glVertex3i(x+25,y+15,-1.0);
		glVertex3i(x+25,y,-1.0);
	glEnd();
}
void windows()
{
	draw_window(20,500);
	draw_window(20,450);
	draw_window(20,400);
	draw_window(20,350);//1
	draw_window(20,300);

	draw_window(60,400);
	draw_window(60,340);//2
	draw_window(60,280);
	draw_window(60,220);

	draw_window(123.0,450.0);
	draw_window(123.0,385.0);//3
	draw_window(123.0,315.0);
	draw_window(123.0,245.0);

	draw_window(160.0,400.0);//4
	draw_window(160.0,350.0);
	draw_window(160.0,300.0);
	draw_window(160.0,250.0);
	draw_window(210.0,400.0);
	draw_window(210.0,350.0);
	draw_window(210.0,300.0);
	draw_window(210.0,250.0);

	draw_window(255.0,520.0);
	draw_window(255.0,440.0);
	draw_window(255.0,360.0);
	draw_window(255.0,260.0);//5

	draw_window(305.0,520.0);//6
	draw_window(305.0,480.0);
	draw_window(305.0,440.0);
	draw_window(305.0,400.0);
	draw_window(305.0,360.0);
	draw_window(305.0,320.0);
	draw_window(305.0,280.0);
	draw_window(305.0,240.0);

	draw_window(350.0,550.0);
	draw_window(350.0,500.0);//7
	draw_window(350.0,450.0);
	draw_window(370.0,400.0);
	draw_window(370.0,350.0);
	draw_window(370.0,300.0);

	draw_window(410.0,420.0);	
	draw_window(430.0,350.0);//8
	draw_window(410.0,290.0);

	draw_window(470.0,540.0);	
	draw_window(510.0,500.0);
	draw_window(470.0,460.0);
	draw_window(510.0,420.0);
	draw_window(470.0,380.0);
	draw_window(510.0,340.0);
	draw_window(470.0,300.0);//9
	draw_window(510.0,260.0);
	
	draw_window(560.0,450.0);
	draw_window(560.0,420.0);
	draw_window(560.0,340.0);
	draw_window(560.0,310.0);//10

	draw_window(609.0,600.0);
	draw_window(609.0,550.0);
	draw_window(609.0,500.0);
	draw_window(609.0,350.0);
	draw_window(609.0,300.0);
	draw_window(609.0,250.0);//11

	draw_window(640.0,500.0);
	draw_window(640.0,475.0);
	draw_window(640.0,450.0);
	draw_window(660.0,500.0);
	draw_window(660.0,475.0);
	draw_window(660.0,450.0);

	draw_window(640.0,300.0);
	draw_window(640.0,275.0);
	draw_window(640.0,250.0);
	draw_window(660.0,300.0);
	draw_window(660.0,275.0);
	draw_window(660.0,250.0);//12
	}
void cardraw()
{	

	glColor3f(0.9,0.0,0.0);
	glBegin(GL_POLYGON);
		glVertex2i(425,25);
		glVertex2i(425,70);
		glVertex2i(550,150);
		glVertex2i(500,150);
		glVertex2i(625,150);
		glVertex2i(650,100);
		glVertex2i(675,90);
		glVertex2i(675,25);
	glEnd();
	glColor3f(1.0,1.0,1.0);
	glBegin(GL_POLYGON);
		glVertex2i(660,25);
		glVertex2i(655,48);
		glVertex2i(614,48);
		glVertex2i(609,25);
	glEnd();
	glColor3f(1.0,1.0,1.0);
	glBegin(GL_POLYGON);
		glVertex2i(491,25);
		glVertex2i(486,48);
		glVertex2i(445,48);
		glVertex2i(440,25);
	glEnd();
	glColor3f(0.0,0.0,0.4);
	glBegin(GL_POLYGON);
		glVertex2i(500,140);
		glVertex2i(478,100);
		glVertex2i(555,100);
		glVertex2i(555,140);
	glEnd();
	glBegin(GL_POLYGON);
		glVertex2i(570,140);
		glVertex2i(570,100);
		glVertex2i(644,100);
		glVertex2i(625,140);
	glEnd();
	
	/*glColor3f(0.0,1.0,0.0);
	glBegin(GL_LINES);
		glVertex2i(162,150);
		glVertex2i(162,25);
	glEnd();*/
	circle_draw(465,30,21);
	circle_draw(635,30,21);
	
}
void draw_pixel(GLint cx,GLint cy)
{
	glColor3f(0.0,0.0,0.0);
	glPointSize(9.5);
	glBegin(GL_POINTS);
		glVertex2i(cx,cy);
	glEnd();
}
void plot_pixels(GLint h,GLint k,GLint x,GLint y)
{
	draw_pixel(x+h,y+k);
	draw_pixel(-x+h,y+k);
	draw_pixel(x+h,-y+k);
	draw_pixel(-x+h,-y+k);
	draw_pixel(y+h,x+k);
	draw_pixel(-y+h,x+k);
	draw_pixel(y+h,-x+k);
	draw_pixel(-y+h,-x+k);
}
void circle_draw(GLint h,GLint k,GLint r)
{
	GLint d=1-r,x=0,y=r;
	while(y>x)
	{
		plot_pixels(h,k,x,y);
		if(d<0)
			d+=2*x+3;
		else
		{
			d+=2*(x-y)+5;
			--y;
		}
		++x;
	}
	plot_pixels(h,k,x,y);
}

void bikeman()
{
	glPushMatrix();
		glTranslated(100,50,0.0);
		//glRotatef(-15,0,0,1);
		//glRotatef(-15,0,1,0);
		glScalef(0.6,0.8,0.6);
		bikedisplay();
		glPopMatrix();

		glPushMatrix();
		glTranslated(135,40,0.0);
		glScalef(0.6,0.8,0.6);
		mandraw();
		glPopMatrix();
}

void bikedisplay()
{
	//glClearColor(1.0, 1.0, 1.0,1.0);
	//glClear(GL_COLOR_BUFFER_BIT);
	//glMatrixMode(GL_MODELVIEW);
	bikedraw();
	glPushMatrix();
	glTranslated(200.0, 100.0,-8);
	//glScalef(0.7,0.7,0.7);
	DrawWheels();
	glPopMatrix();

	glPushMatrix();
	glTranslated(315.0, 100.0,-8);
	//glScalef(0.7,0.7,0.7);
	DrawWheels();
	glPopMatrix();

	sidesdraw();
	glutSwapBuffers();
	glFlush();
}
void DrawWheels() 
{ 
	glColor3f(0, 0, 0);
	//glLineWidth(15.0);
	glutSolidTorus(10.0, 20.0, 7.0,30.0);
}


void bikedraw()
{	
	glBegin(GL_POLYGON);
	glColor3f(0.0,0.0,0.0);
		glVertex2i(190,150);
		glVertex2i(190,160);
		glVertex2i(255,160);
		glVertex2i(255,150);
		
	glEnd();
	glBegin(GL_POLYGON);
	glColor3f(0.8,0.0,0.2);
		glVertex2i(190,150);
		glVertex2i(190,127);
		glVertex2i(180,120);
		glVertex2i(178,110);
		glVertex2i(173,100);
		glVertex2i(165,100);
		glVertex2i(165,120);
	glEnd();
	glBegin(GL_POLYGON);
	glColor3f(0.8,0.0,0.2);
		glVertex2i(190,150);
		glVertex2i(255,150);
		glVertex2i(256,149);
		glVertex2i(257,148);
		glVertex2i(258,147);
		glVertex2i(259,146);
		glVertex2i(250,130);
		glVertex2i(250,120);
		glVertex2i(180,120);
	glEnd();
	glBegin(GL_POLYGON);
	glColor3f(0.8,0.0,0.2);
		glVertex2i(250,120);
			glVertex2i(250,118);
			glVertex2i(280,118);
			glVertex2i(280,90);
			glVertex2i(274,90);
		glVertex2i(250,105);
		glVertex2i(226,105);
		glVertex2i(216,120);
	glEnd();
	glBegin(GL_POLYGON);
	glColor3f(0.8,0.0,0.2);
		glVertex2i(298,158);
		glVertex2i(290,125);
		glVertex2i(280,118);
		glVertex2i(280,90);
		glVertex2i(300,120);
		glVertex2i(301,121);
		glVertex2i(302,121);
		glVertex2i(301,122);
		glVertex2i(301,158);
	glEnd();
	glBegin(GL_LINES);
	glColor3f(0.0,0.0,0.0);
	glLineWidth(70.0);
		glVertex2i(298,158);
		glVertex2i(300,170);
		glVertex2i(304,170);
		glVertex2i(300,158);
		glVertex2i(308,171);
		glVertex2i(304,160);
	glEnd();
		
}
void sidesdraw()
{
	glBegin(GL_POLYGON);
	glColor3f(0.5,0.5,1.0);
		glVertex2i(176,90);
		glVertex2i(177,90);
		glVertex2i(177,92);
		glVertex2i(240,92);
		glVertex2i(240,96);
		glVertex2i(177,96);
		glVertex2i(177,98);
		glVertex2i(170,90);
	glEnd();
	glBegin(GL_POLYGON);
		glColor3f(0.0,1.0,1.0);
		glVertex2i(200,98);
		glVertex2i(200,104);
		glVertex2i(270,104);
			glVertex2i(271,103);
			glVertex2i(272,102);
			glVertex2i(272,100);
			glVertex2i(273,98);
			glVertex2i(274,97);
			glVertex2i(273,96);
			glVertex2i(272,94);
			glVertex2i(272,92);
			glVertex2i(271,91);
		glVertex2i(270,90);
		glVertex2i(240,90);
		glVertex2i(240,96);
		glVertex2i(200,96);
	glEnd();
	glBegin(GL_LINES);
	glColor3f(0.5,0.5,1.0);
	glLineWidth(70.0);
		glVertex2i(314,100);
		glVertex2i(300,158);
	glEnd();
	glBegin(GL_LINES);
	glColor3f(0.0,0.0,0.0);
	glLineWidth(70.0);
		glVertex2i(287,144);
		glVertex2i(298,158);

		glVertex2i(302,166);
		glVertex2i(310,176);
	glEnd();
}


void body()
{
	glBegin(GL_POLYGON);
		glColor3f(0.0,0.0,0.0);
		glVertex2i(195,150);
		glVertex2i(198,140);//ankel
		glVertex2i(186,97);
		glVertex2i(183,100);
	glEnd();
	glBegin(GL_POLYGON);
	glColor3f(0.0,0.8,0.0);
		glVertex2i(195,150);
		glVertex2i(198,140);//thi
		glVertex2i(205,167);
		glVertex2i(199,165);
	glEnd();
	glBegin(GL_POLYGON);
	glColor3f(0.0,0.8,0.0);
		glVertex2i(180,167);
		glVertex2i(199,165);
		glVertex2i(205,167);//thi
		glVertex2i(205,172);
		glVertex2i(185,178);
		
	glEnd();
	
	glBegin(GL_POLYGON);
	glColor3f(0.0,1.0,1.0);
		glVertex2i(185,178);
		glVertex2i(180,167);//shirt
		glVertex2i(190,224);
		glVertex2i(193,218);
	glEnd();
	glBegin(GL_POLYGON);
	glColor3f(0.0,0.0,1.0);
		glVertex2i(190,224);
		glVertex2i(180,167);
		glVertex2i(179,157);
			glVertex2i(179,155);
			glVertex2i(178,153);
			glVertex2i(178,151);//coat
			glVertex2i(177,150);
			glVertex2i(177,150);
			glVertex2i(175,148);
			glVertex2i(173,148);
			glVertex2i(170,146);
		//glVertex2i(150,165);
		glVertex2i(165,170);
		glVertex2i(185,232);
	glEnd();
	glBegin(GL_POLYGON);
	glColor3f(0.0,0.0,1.0);
		glVertex2i(170,146);
		glVertex2i(160,158);//coat
		glVertex2i(165,170);
	glEnd();
	glBegin(GL_POLYGON);
	glColor3f(0.0,0.0,0.0);
		glVertex2i(185,115);
		glVertex2i(205,112);
		glVertex2i(203,107);
		glVertex2i(183,97);
		
	glEnd();
	glBegin(GL_LINES);
	glColor3f(0.0,1.0,1.0);
		glVertex2i(183,208);
		glVertex2i(230,162);//hand
		
	glEnd();
	glBegin(GL_LINES);
	glColor3f(1.0,1.0,0.8);
		glVertex2i(228,162);
		glVertex2i(238,162);//hand
		
	glEnd();
}
void head()
{
	glBegin(GL_POLYGON);
	glColor3f(1.0,1.0,0.8);
		glVertex2i(198,250);
			glVertex2i(200,252);
		glVertex2i(204,245);
			glVertex2i(203,238);//face
			glVertex2i(206,232);
			glVertex2i(203,230);
		glVertex2i(200,220);
		glVertex2i(194,218);
		glVertex2i(188,222);
		glVertex2i(182,225);
	glEnd();
	glBegin(GL_POLYGON);
	glColor3f(0.0,0.0,0.0);
		glVertex2i(185,232);
			glVertex2i(182,234);
			glVertex2i(181,235);
			glVertex2i(181,236);
		glVertex2i(205,260);
			glVertex2i(190,252);//hair
			glVertex2i(192,250);
			glVertex2i(196,250);
		glVertex2i(182,245);
		glVertex2i(188,238);		
	glEnd();
	glBegin(GL_POINTS);
	glColor3f(0.0,0.0,0.0);
	glPointSize(1.0);
		glVertex2i(202,238);//eye
		
	glEnd();
	glBegin(GL_POLYGON);
	glColor3f(1.0,0.0,0.0);
	
		glVertex2i(202,227);
		glVertex2i(201,224);//lips
		glVertex2i(197,229);
	glEnd();
	
}	
void mandraw()
{
	body();
	head();
}

	

void blast(void)//blast polygon construction
{

	glColor3f(1.0,1.0,0.5);

	glBegin(GL_POLYGON);
		glVertex2f(404.4,320.0);
		glVertex2f(384.0,285.0);
		glVertex2f(368.0,344.5);
		glVertex2f(344.0,355.0);
		glVertex2f(347.2,414.5);
		glVertex2f(332.8,442.5);
		glVertex2f(347.2,477.5);
		glVertex2f(352.0,530.0);
		glVertex2f(379.2,519.5);
		glVertex2f(396.8,565.0);
		glVertex2f(416.0,530.0);
		glVertex2f(440.0,547.5);
		glVertex2f(452.8,512.5);
		glVertex2f(472.0,512.5);
		glVertex2f(475.2,470.5);
		glVertex2f(488.0,442.5);
		glVertex2f(488.0,404.0);
		glVertex2f(470.0,372.5);
		glVertex2f(475.2,337.5);
		glVertex2f(464.0,306.0);
		glVertex2f(444.8,320.0);
		glVertex2f(425.6,285.0);
		glVertex2f(404.8,320.0);
	glEnd();

}

void display3()
{
		glClear(GL_COLOR_BUFFER_BIT);
		buildings();
		windows();
		
		glPushMatrix();
		glTranslated(ca,105,0.0);
		glScalef(0.7,0.7,0.7);
		cardraw();
		glPopMatrix();
		
		glPushMatrix();
		glTranslated(ba,90,0.0);
		glRotatef(-15,0,0,1);
		glScalef(0.6,0.8,0.6);
		bikedisplay();
		glPopMatrix();
		
		/*glPushMatrix();
		glTranslated(285.0,40.0,0.0);
		glScaled(0.2,0.2,0.2);		
		blast();
		glPopMatrix();*/
		
		
}

void display2()
{
		glClear(GL_COLOR_BUFFER_BIT);
		buildings();
		windows();
		
		glPushMatrix();
		glTranslated(ca,105,0.0);
		glScalef(0.7,0.7,0.7);
		cardraw();
		glPopMatrix();
		
		glPushMatrix();
		glTranslated(ba,50,0.0);
		//glRotatef(-05,0,0,1);
		glScalef(0.6,0.8,0.6);
		bikedisplay();
		glPopMatrix();
		
		glPushMatrix();
		glTranslated(285.0,40.0,0.0);
		glScaled(0.2,0.2,0.2);		
		blast();
		glPopMatrix();
		
		
		
}
void display1()
{
	buildings();
	windows();
	glPushMatrix();
	glTranslated(c,105,0.0);
	glScalef(0.7,0.7,0.7);
	cardraw();
	glPopMatrix();

	glPushMatrix();
	glTranslated(b,50,0.0);
	glScalef(0.6,0.8,0.6);
	bikedisplay();
	glPopMatrix();
}
void display()
{

	glClear(GL_COLOR_BUFFER_BIT);
	
	display1();

	if(b>160)
	{
		s1+=1;
		display2();
	}
	if(s1>2)
	{
		display3();
	}	
	glFlush();
	glutSwapBuffers();
}




main(int argc,char ** argv)
{
	glutInit(&argc,argv);
	glutInitDisplayMode(GLUT_DOUBLE|GLUT_RGB);
	glutInitWindowPosition(0,0);
	glutInitWindowSize(1400,1300);
	glutCreateWindow("gesket");
	//glutIdleFunc(buildings);
	glutDisplayFunc(display);
	init();	
	//glutMouseFunc(mouse);
	glutTimerFunc(100,update,0);
	glutMainLoop();
}
