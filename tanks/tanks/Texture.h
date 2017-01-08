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

	void setRenderTarget(SDL_Renderer *newRenderTarget);

	void loadTexture(char path[]);

	void simpleRender(int x, int y, double scale = 1);

	void render(int x, int y, double angle = 0.0, double scale = 1, SDL_Rect* clip = NULL, SDL_RendererFlip flip = SDL_FLIP_NONE, SDL_Point* center = NULL);
};

