#include <GL\freeglut.h>

GLfloat xRotated, yRotated, zRotated;
GLfloat angle, fAspect, stepX, stepY, stepZ;

void desenha(void)
{
	// limpa o bufffer de desenho
	glClear(GL_COLOR_BUFFER_BIT);
	// limpa a matriz identidade
	glLoadIdentity();
	// traslada o desenho para z = -5.0
	// Quando trasladamos o desenho para x = -0.8 ele est� mais longe, e parece menor
	glTranslatef(0.0, 0.0, -5.0);
	// Define a cor do desenho
	glColor3f(0.0, 0.5, 0.0);

	// Mudan�as na matriz de transforma��o
	// rota��o sobre o eixo X
	glRotatef(xRotated, 1.0, 0.0, 0.0);
	// rota��o sobre o eixo Y
	glRotatef(yRotated, 0.0, 1.0, 0.0);
	// rota��o sobre o eixo Z
	glRotatef(zRotated, 0.0, 0.0, 1.0);
	// Defini��o de escala
	//Fun��o pr�pria da gut para desneoh de primitivas 3d
	//glutSolidTeapot(.5);
	glScalef(1.0f, .2f, .5f);
	glutWireCube(1);
	glTranslatef(0, 1, 0);
	glScalef(0.7, 1, 1);
	glutWireCube(1);

	glPushMatrix();
	glPopMatrix();
	glScalef(0.3f, 1.0f, .2f);
	glTranslatef(1.5, -1.5, 3);
	glutWireTorus(0.2,0.5,15,15);

	glPushMatrix();
	glPopMatrix();
	glTranslatef(-3.2, 0, 0);
	glutWireTorus(0.2, 0.5, 15, 15);

	glPushMatrix();
	glPopMatrix();
	glTranslatef(0, 0, -5.8);
	glutWireTorus(0.2, 0.5, 15, 15);

	glPushMatrix();
	glPopMatrix();
	glTranslatef(3.2, 0, 0);
	glutWireTorus(0.2, 0.5, 15, 15);


	glLoadIdentity();
	//void glutWireSphere(GLdouble radius, GLint slices, GLint stacks);
	//void glutWireCone(GLdouble radius, GLdouble height, GLint slices, GLint stacks);
	//void glutWireTorus(GLdouble innerRadius, GLdouble outerRadius, GLint nsides, GLint rings);
	//void glutWireIcosahedron(void);
	//void glutWireOctahedron(void);
	//void glutWireTetrahedron(void);
	//void glutWireDodecahedron(GLdouble radius);

	// Esvazia o buffer na tela
	glFlush();
	// troca o buffer pois estamos usando double buffering 
	glutSwapBuffers();
}


// Especifica��o do volume de visualiza��o
void EspecificaParametrosVisualizacao(void)
{
	// Especifica sistema de coordenadas de proje��o
	glMatrixMode(GL_PROJECTION);

	// Inicializa sistema de coordenadas de proje��o
	glLoadIdentity();

	// Especifica a proje��o perspectiva
	gluPerspective(angle, fAspect, 0.1, 500);

	/*	Esta fun��o estabelece os par�metros da Proje��o Perspectiva,
	atualizando a matriz de proje��o perspectiva.
	Seu prot�tipo �:
	void gluPerspective(GLdouble fovy, GLdouble aspect, GLdouble zNear, GLdouble zFar);
	Descri��o dos par�metros:
	1) fovy � o �ngulo, em graus, na dire��o y (usada para determinar a
	"altura" do volume de visualiza��o);
	2) aspect � a raz�o de aspecto que determina a �rea de visualiza��o
	na dire��o x, e seu valor � a raz�o em x(largura) e y(altura);
	3) zNear, que sempre deve ter um valor positivo maior do que zero,
	� a dist�ncia do observador at� o plano de corte mais pr�ximo(em z);
	4) zFar, que tamb�m sempre tem um valor positivo maior do que zero,
	� a dist�ncia do observador at� o plano de corte mais afastado(em z).
	Esta fun��o sempre deve ser definida ANTES da fun��o gluLookAt, e no modo GL_PROJECTION  */

	// Especifica sistema de coordenadas do modelo
	glMatrixMode(GL_MODELVIEW);

	// Inicializa sistema de coordenadas do modelo
	glLoadIdentity();

	// Especifica posi��o do observador e do alvo
	gluLookAt(0, 80, 200, 0, 0, 0, 0, 1, 0);

	/*Descri��o dos par�metros:
	1) eyex, eyey e eyez s�o usados para definir as
	coordenadas x, y e z, respectivamente, da posi��o
	da c�mera(ou observador);
	2) centerx, centery e centerz s�o usados para
	definir as coordenadas x, y e z, respectivamente,
	da posi��o do alvo, isto �, para onde o
	observador est� olhando  (normalmente, o centro da cena);
	3) upx, upy e upz s�o as coordenadas x, y e z,
	que estabelecem o vetor up(indica o
	"lado de cima" de uma cena 3D)*/
}


// Fun��o callback chamada quando o tamanho da janela � alterado 
void AlteraTamanhoJanela(GLsizei w, GLsizei h)
{
	// Para previnir uma divis�o por zero
	if (h == 0) h = 1;

	// Especifica o tamanho da viewport
	glViewport(0, 0, w, h);

	// Calcula a corre��o de aspecto
	fAspect = (GLfloat)w / (GLfloat)h;

	EspecificaParametrosVisualizacao();
}

// Fun��o callback chamada para gerenciar eventos de teclado
void GerenciaTeclado(unsigned char key, int x, int y)
{
	switch (key) {
	case '1':
		stepX = 0.03;
		stepY = 0;
		stepZ = 0;
		break;
	case '2':
		stepX = 0;
		stepY = 0.03;
		stepZ = 0;
		break;
	case '3':
		stepX = 0;
		stepY = 0;
		stepZ = 0.03;
		break;
	}
	glutPostRedisplay();
	EspecificaParametrosVisualizacao();
}

void idleFunc(void)
{
	xRotated += stepX;
	yRotated += stepY;
	zRotated += stepZ;
	desenha();
}


// Inicializa par�metros de rendering
void Inicializa(void)
{
	glClearColor(1.0f, 1.0f, 1.0f, 1.0f);
	angle = 45;
	stepX = stepY = stepZ = 0;
}

// Fun��o callback chamada para gerenciar eventos do mouse
void GerenciaMouse(int button, int state, int x, int y)
{
	if (button == GLUT_LEFT_BUTTON)
		if (state == GLUT_DOWN) {  // Zoom-in
			if (angle >= 10) angle -= 5;
		}
	if (button == GLUT_RIGHT_BUTTON)
		if (state == GLUT_DOWN) {  // Zoom-out
			if (angle <= 130) angle += 5;
		}
	EspecificaParametrosVisualizacao();
	glutPostRedisplay();
}

int main(int argc, char **argv)
{
	//Initialize GLUT
	glutInit(&argc, argv);
	//double buffering used to avoid flickering problem in animation
	glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB);
	// window size
	glutInitWindowSize(500, 500);
	// create the window 
	glutCreateWindow("Cube3d animation");
	glPolygonMode(GL_FRONT_AND_BACK, GL_LINE);
	xRotated = yRotated = zRotated = 0.0;

	glClearColor(0.0, 0.0, 0.0, 0.0);
	//Assign  the function used in events
	glutDisplayFunc(desenha);
	glutReshapeFunc(AlteraTamanhoJanela);
	glutKeyboardFunc(GerenciaTeclado);
	glutMouseFunc(GerenciaMouse);

	Inicializa();
	glutIdleFunc(idleFunc);
	//Let start glut loop
	glutMainLoop();
	return 0;
}