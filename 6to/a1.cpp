#include <SDL/SDL.h>
#include <GL/gl.h>
#include <GL/glu.h>
 
void drawCube(float size)
{
    glBegin(GL_QUADS);
        // front face
        glColor3f(1.0,0.0,0.0);
        glVertex3f(size/2,size/2,size/2);
        glVertex3f(-size/2,size/2,size/2);
        glVertex3f(-size/2,-size/2,size/2);
        glVertex3f(size/2,-size/2,size/2);
        // left face
        glColor3f(0.0,1.0,0.0);
        glVertex3f(-size/2,size/2,size/2);
        glVertex3f(-size/2,-size/2,size/2);
        glVertex3f(-size/2,-size/2,-size/2);
        glVertex3f(-size/2,size/2,-size/2);
        // back face
        glColor3f(0.0,0.0,1.0);
        glVertex3f(size/2,size/2,-size/2);
        glVertex3f(-size/2,size/2,-size/2);
        glVertex3f(-size/2,-size/2,-size/2);
        glVertex3f(size/2,-size/2,-size/2);
        // right face
        glColor3f(1.0,1.0,0.0);
        glVertex3f(size/2,size/2,size/2);
        glVertex3f(size/2,-size/2,size/2);
        glVertex3f(size/2,-size/2,-size/2);
        glVertex3f(size/2,size/2,-size/2);
        // top face
        glColor3f(1.0,0.0,1.0);
        glVertex3f(size/2,size/2,size/2);
        glVertex3f(-size/2,size/2,size/2);
        glVertex3f(-size/2,size/2,-size/2);
        glVertex3f(size/2,size/2,-size/2);
        // bottom face
        glColor3f(0.0,1.0,1.0);
        glVertex3f(size/2,-size/2,size/2);
        glVertex3f(-size/2,-size/2,size/2);
        glVertex3f(-size/2,-size/2,-size/2);
        glVertex3f(size/2,-size/2,-size/2);
    glEnd();
}
 
float angle = 0.0;
const int triangle = 1;
 
void init()
{
    glClearColor(0.0,0.0,0.0,1.0);  //background color and alpha
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    gluPerspective(45,640.0/480.0,1.0,500.0);
    glMatrixMode(GL_MODELVIEW);
    glEnable(GL_DEPTH_TEST);
}
 
void display()
{
    glClear(GL_COLOR_BUFFER_BIT|GL_DEPTH_BUFFER_BIT);
    glLoadIdentity();
    glTranslatef(0.0,0.0,-5.0);
    glRotatef(angle,1.0,1.0,1.0);   // angle, x-axis, y-axis, z-axis
    drawCube(1.0);
}
 
int main(int argc, char** argv)
{
    SDL_Init(SDL_INIT_EVERYTHING);
    SDL_Surface *screen;
    screen = SDL_SetVideoMode(640, 480, 8, SDL_SWSURFACE|SDL_OPENGL);
//  screen = SDL_SetVideoMode(640, 480, 8, SDL_SWSURFACE|SDL_FULLSCREEN);
    bool running = true;
    const int FPS = 30;
    Uint32 start;
    SDL_Event event;
    init();
    while(running) {
        start = SDL_GetTicks();
        while(SDL_PollEvent(&event)) {
            switch(event.type) {
                case SDL_QUIT:
                    running = false;
                    break;
            }
        }
 
        display();
        SDL_GL_SwapBuffers();
        angle += 0.5;
        if(angle > 360)
            angle -= 360;
        if(1000/FPS > SDL_GetTicks()-start)
            SDL_Delay(1000/FPS-(SDL_GetTicks()-start));
    }
    SDL_Quit();
    return 0;
}
