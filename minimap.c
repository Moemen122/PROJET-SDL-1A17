include "minimap.h"
void affichertemps (int  temps,SDL_Surface *screen)//temps compteur
{

    TTF_Init();
    TTF_Font *police=NULL;
    police=TTF_OpenFont("Urusans.TTF",40);
    SDL_Color couleur= {255,255,255};
SDL_Rect postemps;
postemps.x=0;
    postemps.y=0;
    char s[20];//pour mettre "temps:"

    sprintf(s,"Temps: %d",temps);
    SDL_Surface *txt;
    txt=TTF_RenderText_Blended(police,s,couleur);
    SDL_BlitSurface(txt,NULL,screen,&postemps);//affichage temps

}
void initmap( minimap * m)
{
m->minimap=IMG_Load ("minimap.PNG");
m->posminimap.x=400;
m->posminimap.y=20;
m->point=IMG_Load ("point.png");
m->pospoint.x=400;
m->pospoint.y=80;
}
void afficherminimap (minimap m, SDL_Surface * screen)
{
    SDL_BlitSurface(m.minimap,NULL,screen,&m.posminimap);//affichage minimap
    SDL_BlitSurface(m.point,NULL,screen,&m.pospoint);//affichage point
}
void meilleur_scr (int score)
{
FILE* fichier = NULL ;
fichier=fopen("src.txt","a+");
fprintf(fichier,"%d \n",score);
fclose(fichier);
}
void save_name (char name[20])
{
FILE* fichier = NULL ;
fichier=fopen("src.txt","a+");
fprintf(fichier,"%s ",name);
fclose(fichier);
}
int best_scr ()
{
	int scr,bscr=0;
	char nom[20]
	FILE* fichier = NULL ;
	fichier=fopen("src.txt","r");
	while(scr>bscr)
	{
		fscanf(fichier,"%s %d \n",nom,&scr);
	}
	return bscr;
}


