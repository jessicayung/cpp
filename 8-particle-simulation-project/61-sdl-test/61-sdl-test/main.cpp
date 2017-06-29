//
//  main.cpp
//  61-sdl-test
//
//  Created by jessica yung on 29/06/2017.
//  Copyright © 2017 Jessica Yung. All rights reserved.
//

#include <iostream>
#include <SDL2/SDL.h>
using namespace std;

// link /usr/local/Cellar/sdl2/2.0.5/lib/libSDL2.a
// convention you don't mention the lib or the .a

int main(int argc, const char * argv[]) {

  const int SCREEN_WIDTH = 800;
  const int SCREEN_HEIGHT = 600;
  
  if (SDL_Init(SDL_INIT_VIDEO) < 0) {
    // returning anything except 0 indicates an error
    cout << "SDL Init failed." << endl;
    return 1;
  }
  
  // create window
  SDL_Window *window = SDL_CreateWindow("Particle Fire Explosion", SDL_WINDOWPOS_UNDEFINED, SDL_WINDOWPOS_UNDEFINED, SCREEN_WIDTH, SCREEN_HEIGHT, SDL_WINDOW_SHOWN);
  
  if (window == NULL) {
    SDL_Quit();
    cout << SDL_GetError() << endl;
    return 2;
  }
  
  // Renderer: to draw on the window
  // Texture: do something on texture (bitmap) and pass to renderer
  
  // Create renderer (ptr to)
  // final arg ensures rendering syncs with vertical refreshing of screen (top left to top right, likewise for each row from top to bottom) -> if you draw something during vertical refreshing, see shearing (flickering line down the screen)
  SDL_Renderer *renderer = SDL_CreateRenderer(window, -1, SDL_RENDERER_PRESENTVSYNC);
  // Thing we write pixel info to & pass to renderer
  // RGBA8888: 8 bytes each for R, G, B, Alpha
  SDL_Texture *texture =  SDL_CreateTexture(renderer, SDL_PIXELFORMAT_RGBA8888, SDL_TEXTUREACCESS_STATIC, SCREEN_WIDTH, SCREEN_HEIGHT);
  
  if (renderer == NULL) {
    cout << "Could not create renderer" << endl;
    SDL_DestroyWindow(window);
    SDL_Quit();
    return 3;
  }
  if (texture == NULL) {
    cout << "Could not create texture" << endl;
    SDL_DestroyRenderer(renderer);
    SDL_DestroyWindow(window);
    SDL_Quit();
    return 4;
  }

  // Buffer: Area of memory
  // SDL equiv to int, which is usually 32 bits
  // each pixel have 4 (RGBA) x 8 = 32 bits.
  Uint32 *buffer = new Uint32[SCREEN_WIDTH*SCREEN_HEIGHT];
  
  // write info into buffer
  // write every byte as 255 (0x is hexadecimal prefix, FF for 255)
  memset(buffer, 0xFF, SCREEN_WIDTH * SCREEN_HEIGHT * sizeof(Uint32));
  
  // if memory allocation fails, may return null. Usually return exception.
  
  SDL_UpdateTexture(texture, NULL, buffer, SCREEN_WIDTH*sizeof(Uint32));
  SDL_RenderClear(renderer);
  SDL_RenderCopy(renderer, texture, NULL, NULL);
  // present render to window
  SDL_RenderPresent(renderer);
  // Game loop: runs as long as the game is running
  // similar to GUI event loops
  bool quit = false;
  
  SDL_Event event;
  
  while (!quit) {
    // Update paricles
    
    // Draw particles
    
    // Check for messages/events (events usually raised by user actions)
    
    
    // when SDL_PullEvent finds an event to process, it returns true, so the loop continues as long as there are events
    while (SDL_PollEvent(&event)) {
      // struct: members public by default (vs class private by default)
      // SDL quit event raised when you e.g. click the closs in your window
      if(event.type == SDL_QUIT) {
        quit = true;
      }
    }
    
  }
  
  // Deallocate resources
  delete [] buffer;
  // Destroy texture first bc texture uses renderer
  SDL_DestroyTexture(texture);
  SDL_DestroyRenderer(renderer);
  
  SDL_DestroyWindow(window);
  // quit SDL
  SDL_Quit();
  
  return 0;
}
