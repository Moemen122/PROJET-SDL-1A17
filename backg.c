#include "background.h"


/*void initBack (background *bac)
{
//background
bac->imgback=IMG_Load(".bmp");
bac->posback.x=0;
bac->posback.y=0;
//camera
bac->camera.x=0;
bac->camera.y=0;
bac->camera.w=SCREEN_W; 
bac->camera.h=SCREEN_H;
//musique
bac->son=Mix_LoadMUS("musique.mp3"); //Chargement de la musique

}
*/
void initBackMasque (background *bac)
{
//background
bac->imgback=SDL_LoadBMP("mapMasque.bmp");
bac->posback.x=0;
bac->posback.y=0;

//camera
ba->camera.x=0;
ba->camera.y=0;
ba->camera.w=SCREEN_W; 
ba->camera.h=SCREEN_H;

}


//musique
bac->son=Mix_LoadMUS("musique.mp3"); //Chargement de la musique

}


void initialisation_back(background *bac)
{
	//initBack(bac);
	initBack2(bac);
}



void afficheBack (background bac, SDL_Surface *ecran)
{
/* On blitte par-dessus l'écran */
Mix_PlayMusic(bac.son, -1);
SDL_BlitSurface(bac.imgback,&bac.camera,ecran,&bac.posback);
}

/*void afficher_back(background bac, SDL_Surface *ecran)
{
	afficheBack(bac,ecran);
	
	
}*/

void scrolling (background *bac,int direction)
{
 const int vitesse=1;
if (direction ==0){  
	bac->camera.x+= vitesse;          
	
        }
else if (direction ==1){//ysarbac1          
	bac->camera.x-=vitesse; 
	}

}

