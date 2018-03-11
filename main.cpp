/*This source code copyrighted by Lazy Foo' Productions (2004-2013)
and may not be redistributed without written permission.*/
//Version: 001
#include <GL/freeglut.h>
#include <GL/gl.h>
#include <GL/glu.h>
#include <stdio.h>

const int SCREEN_WIDTH = 640;
const int SCREEN_HEIGHT = 480;
const int SCREEN_FPS = 60;
const float PI=3.1415;


void runMainLoop( int val );

bool initGL()
{
    //Initialize Projection Matrix
    glMatrixMode( GL_PROJECTION );
    glLoadIdentity();

    //Initialize Modelview Matrix
    glMatrixMode( GL_MODELVIEW );
    glLoadIdentity();

    //Initialize clear color
    glClearColor( 0.f, 0.f, 0.f, 1.f );

    //Check for error
    GLenum error = glGetError();
    if( error != GL_NO_ERROR )
    {
        printf( "Error initializing OpenGL! %s\n", gluErrorString( error ) );
        return false;
    }

    return true;
}

float c=0;
void update()
{
    c+=0.01;
    if(c>360) c=0;
}

void render()
{
    //Clear color buffer
    glClear( GL_COLOR_BUFFER_BIT );

    //Render quad
    //glRotatef(c*PI/180.,0,1,0);

    glBegin( GL_QUADS );
        glVertex3f( -1, -1, 0 );
        glVertex3f(  1, -1, 0 );
        glVertex3f(  1,  1, 0 );
        glVertex3f( -1,  1, 0 );
    glEnd();

    //Update screen
    glutSwapBuffers();
}

int main( int argc, char* args[] )
{
	//Initialize FreeGLUT
	glutInit( &argc, args );

	//Create OpenGL 2.1 context
	glutInitContextVersion( 2, 1 );

	//Create Double Buffered Window
	glutInitDisplayMode( GLUT_DOUBLE );
	glutInitWindowSize( SCREEN_WIDTH, SCREEN_HEIGHT );
	glutCreateWindow( "OpenGL" );

	//Do post window/context creation initialization
	if( !initGL() )
	{
		printf( "Unable to initialize graphics library!\n" );
		return 1;
	}

	//Set rendering function
	glutDisplayFunc( render );

	//Set main loop
	glutTimerFunc( 1000 / SCREEN_FPS, runMainLoop, 0 );

	//Start GLUT main loop
	glutMainLoop();

	return 0;
}

void runMainLoop( int val )
{
    //Frame logic
    update();
    render();

    //Run frame one more time
    glutTimerFunc( 1000 / SCREEN_FPS, runMainLoop, val );
}
