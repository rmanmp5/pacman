//Arman Farhangi
//May 13, 2015
//PAC-MAN Game
//C++ and SDL

#ifndef pacman_pacman_h
#define pacman_pacman_h

//libraries
#include <vector>
//headers
#include "collider.h"
#include "texture.h"

/******* PACMAN CLASS DECLARES *******/

//pacman
class Pacman : public Collider
{
public:
    //constructor
    Pacman(Texture& spritesheet);
    
    //render pacman
    void render();
    
private:
    //pacman spritesheet
    Texture spritesheet;
    
    //current position
    int x_pos;
    int y_pos;
    
    //determines what animation to render
    int animation_state;
    
    //moving animation clips
    std::vector<SDL_Rect> moving_right;
    //animation counter
    int animation;
};


#endif
