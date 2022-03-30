#ifndef BACKGROUND_H_INCLUDE
#define BACKGROUND_H_INCLUDE
#include <stdlib.h>
#include <stdio.h>
#include <SDL/SDL.h>
#include <SDL/SDL_image.h>
#include <SDL/SDL_mixer.h>
#define SCREEN_W 1360
#define SCREEN_H 765

typedef struct
{
	SDL_Surface *imgback;
	SDL_Rect posback;
	SDL_Rect camera;
	Mix_Music *son;


}background;
void afficher_back(background bac, SDL_Surface *ecran);
void initialisation_back(background *bac);
void initBack (background *bac);
void initBackMasque (background *bac);
void afficheBack (background bac,SDL_Surface *ecran);
void scrolling (background *bac,int direction);
void animerBackground(background *bac);
#endif  
