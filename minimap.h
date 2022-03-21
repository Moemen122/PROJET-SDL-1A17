#ifndef HEADER_H_
#define HEADER_H_
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include<SDL/SDL.h>
#include<SDL/SDL_image.h>
#include<SDL/SDL_ttf.h>
#include<SDL/SDL_mixer.h>
typedef struct
{
SDL_Surface *perso;//image perso
SDL_Rect posperso;//position perso
int direction;//direction perso 1 imin 2 essar
}Personne;
typedef struct
{SDL_Surface *minimap;//image minimap
SDL_Surface *point;//image point minimap
SDL_Rect posminimap;//position minimap
SDL_Rect pospoint;//position point minimap
}minimap;
void initmap( minimap * m); 
void afficherminimap (minimap m, SDL_Surface * screen);
void affichertemps (int temps, SDL_Surface * screen);
void meilleur_scr (int score);
void save_name (char name[20]);
int best_scr ();
#endif
