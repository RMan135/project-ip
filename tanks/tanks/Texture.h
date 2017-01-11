#pragma once
#include <SDL.h>
#include <SDL_image.h>

class Texture
{
private:
	SDL_Texture *texture;
	SDL_Renderer *renderTarget;
	int width, height;

	bool loaded;

public:

	Texture();

	~Texture();

	int getWidth();

	int getHeight();

	void setRenderTarget(SDL_Renderer *newRenderTarget);

	SDL_Renderer *getRenderTarget();

	void loadTexture(char path[]);

	SDL_Texture *getTexture();

	void simpleRender(int x, int y, double scale = 1);

	void render(int x, int y, double angle = 0.0, double scale = 1, SDL_Rect* clip = NULL, SDL_RendererFlip flip = SDL_FLIP_NONE, SDL_Point* center = NULL);

	void setColor(Uint8 red = (Uint8)255, Uint8 green = (Uint8)255, Uint8 blue = (Uint8)255);
};

