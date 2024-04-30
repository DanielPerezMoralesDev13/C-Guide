#include <SDL2/SDL.h>

#define WINDOW_WIDTH 640
#define WINDOW_HEIGHT 480
#define SQUARE_SIZE 50
#define MOVE_SPEED 5

int main(int argc, char* args[]) {
    // Inicializar SDL
    if (SDL_Init(SDL_INIT_VIDEO) < 0) {
        printf("SDL no pudo inicializarse! Error: %s\n", SDL_GetError());
        return 1;
    }

    // Crear una ventana
    SDL_Window* window = SDL_CreateWindow("Animación SDL", SDL_WINDOWPOS_UNDEFINED, SDL_WINDOWPOS_UNDEFINED, WINDOW_WIDTH, WINDOW_HEIGHT, SDL_WINDOW_SHOWN);
    if (window == NULL) {
        printf("No se pudo crear la ventana! Error: %s\n", SDL_GetError());
        return 1;
    }

    // Crear un renderer
    SDL_Renderer* renderer = SDL_CreateRenderer(window, -1, SDL_RENDERER_ACCELERATED);
    if (renderer == NULL) {
        printf("No se pudo crear el renderer! Error: %s\n", SDL_GetError());
        return 1;
    }

    // Variables para la posición del cuadrado
    int squareX = 0;
    int squareY = (WINDOW_HEIGHT - SQUARE_SIZE) / 2;

    // Variable para el bucle principal
    int quit = 0;
    SDL_Event event;

    // Bucle principal
    while (!quit) {
        // Manejo de eventos
        while (SDL_PollEvent(&event) != 0) {
            if (event.type == SDL_QUIT) {
                quit = 1;
            }
        }

        // Limpiar el renderer
        SDL_SetRenderDrawColor(renderer, 0xFF, 0xFF, 0xFF, 0xFF);
        SDL_RenderClear(renderer);

        // Dibujar el cuadrado
        SDL_Rect squareRect = {squareX, squareY, SQUARE_SIZE, SQUARE_SIZE};
        SDL_SetRenderDrawColor(renderer, 0x00, 0x00, 0x00, 0xFF);
        SDL_RenderFillRect(renderer, &squareRect);

        // Presentar el renderer
        SDL_RenderPresent(renderer);

        // Mover el cuadrado
        squareX += MOVE_SPEED;
        if (squareX + SQUARE_SIZE > WINDOW_WIDTH) {
            squareX = 0;
        }

        // Pequeña pausa para controlar la velocidad de la animación
        SDL_Delay(50);
    }

    // Limpiar y cerrar SDL
    SDL_DestroyRenderer(renderer);
    SDL_DestroyWindow(window);
    SDL_Quit();

    return 0;
}

/*
Instala las bibliotecas SDL2: Utiliza el gestor de paquetes de tu distribución Linux para instalar las bibliotecas SDL2. Por ejemplo, si estás usando Ubuntu o Debian, puedes usar el siguiente comando:

sudo apt-get install libsdl2-dev

gcc -o animacion animacion.c -lSDL2

Nombre: Makefile Tools
ID: ms-vscode.makefile-tools
Descripción: Provide makefile support in VS Code: C/C++ IntelliSense, build, debug/run.
Versión: 0.9.10
Editor: Microsoft
Vínculo de VS Marketplace: https://marketplace.visualstudio.com/items?itemName=ms-vscode.makefile-tools
*/