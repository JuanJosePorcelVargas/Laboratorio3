#pragma once
#include "GameActor.h"
#include "./system/KeyboardInput.h"

class GamePawn :
    public GameActor
{
protected:
    KeyboardInput* keyboardInput;
    
    SDL_Keycode botonArriba = SDLK_UP;
    SDL_Keycode botonAbajo = SDLK_DOWN;
    SDL_Keycode botonIzquierda = SDLK_LEFT;
    SDL_Keycode botonDerecha = SDLK_RIGHT;

    KeyboardInput* keyboardInput2;
    
    SDL_Keycode botonArriba2 = SDLK_w;
    SDL_Keycode botonAbajo2 = SDLK_s;
    SDL_Keycode botonIzquierda2 = SDLK_a;
    SDL_Keycode botonDerecha2 = SDLK_d;
    
public:
    // Constructores destructor
    GamePawn();
    GamePawn(Texture* _textura, Tile* _tileActual);
    ~GamePawn();

    // Metodos heredados
    virtual void render();
    virtual void update();
    virtual void handleEvent(SDL_Event* _event){};
    virtual void deleteGameObjet();

    // Metodos especificos
    virtual void setTileActual(Tile* _tileNuevo);
};

