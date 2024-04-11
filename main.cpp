#include "raylib.h"
///VARIABLES ESCENCIALES//
    const int screenWidth = 800;
    const int screenHeight = 450;
        void LOADINGTEXTURES();
        void DRAWTEXTURES();
        void CursorMOVE();
        Vector2 CURSORPosition;
        bool PRESIONANDO=false;

///TEXTURES AND SPRITE///
    Image ICONO = LoadImage("RES/WAOS.png");
    Texture2D Base;
    Texture2D Background;
    Texture2D Item1;
    Texture2D Item2;
    Texture2D Item3;
    Texture2D Item4;
    Texture2D Item5;
    Texture2D Item6;
    Texture2D Item7;
    Texture2D Item8;
    Texture2D Item9;
    Texture2D Item10;
    Texture2D Item11;
    Texture2D Item12;
///===VECTORES OBJETOS///
    Vector2 Item1V = (Vector2) {250,340};
    Vector2 Item2V = (Vector2) {260,80};
    Vector2 Item3V = (Vector2) {400,80};
    Vector2 Item4V = (Vector2) {500,80};
    Vector2 Item5V = (Vector2) {530,180};
    Vector2 Item6V = (Vector2) {650,90};
    Vector2 Item7V = (Vector2) {400,210};
    Vector2 Item8V = (Vector2) {270,210};
    Vector2 Item9V = (Vector2) {400,360};
    Vector2 Item10V = (Vector2) {500,360};
    Vector2 Item11V = (Vector2) {600,330};
    Vector2 Item12V = (Vector2) {700,310};

///===INITIALIZER====///
int main(){
        InitWindow(screenWidth, screenHeight, "Viste a la CukiZilla :D");
        SetWindowIcon(ICONO);
        SetTargetFPS(60);
        LOADINGTEXTURES();
    // Main game loop
    while (!WindowShouldClose()){
            CursorMOVE();
        BeginDrawing();
            ClearBackground(GREEN);
                DRAWTEXTURES();
        EndDrawing();
    }
    //--------------------------------------------------------------------------------------
    UnloadTexture(Base);
    UnloadTexture(Background);
    UnloadTexture(Item1);
    UnloadTexture(Item2);
    UnloadTexture(Item3);
    UnloadTexture(Item4);
    UnloadTexture(Item5);
    UnloadTexture(Item6);
    UnloadTexture(Item7);
    UnloadTexture(Item8);
    UnloadTexture(Item9);
    UnloadTexture(Item10);
    UnloadTexture(Item11);
    UnloadTexture(Item12);
    CloseWindow();                // Close window and OpenGL context
    //--------------------------------------------------------------------------------------
    return 0;
}

///===LOAD THE TEXTURES===///
void LOADINGTEXTURES(){
    Base = LoadTexture("RES/cukiBasel.png");
    Background = LoadTexture("RES/Fondo.png");     // Texture loading
        Item1 = LoadTexture("RES/Item1.png");
        Item2 = LoadTexture("RES/Item2.png");
        Item3 = LoadTexture("RES/Item3.png");
        Item4 = LoadTexture("RES/Item4.png");
        Item5 = LoadTexture("RES/Item5.png");
        Item6 = LoadTexture("RES/Item6.png");
        Item7 = LoadTexture("RES/Item7.png");
        Item8 = LoadTexture("RES/Item8.png");
        Item9 = LoadTexture("RES/Item9.png");
        Item10 = LoadTexture("RES/Item10.png");
        Item11 = LoadTexture("RES/Item11.png");
        Item12 = LoadTexture("RES/Item12.png");
    }

///===LOAD THE TEXTURES===///
void DRAWTEXTURES(){
    DrawTextureEx(Background,(Vector2){0,0},0,1.0f,WHITE);
    DrawTextureEx(Base,(Vector2){60,70},0,0.3f,WHITE);
    DrawTextureEx(Item1,Item1V,0,0.3f,WHITE);
    DrawTextureEx(Item2,Item2V,0,0.3f,WHITE);
    DrawTextureEx(Item3,Item3V,0,0.3f,WHITE);
    DrawTextureEx(Item4,Item4V,0,0.3f,WHITE);
    DrawTextureEx(Item5,Item5V,0,0.3f,WHITE);
    DrawTextureEx(Item6,Item6V,0,0.3f,WHITE);
    DrawTextureEx(Item7,Item7V,0,0.3f,WHITE);
    DrawTextureEx(Item8,Item8V,0,0.3f,WHITE);
    DrawTextureEx(Item9,Item9V,0,0.3f,WHITE);
    DrawTextureEx(Item10,Item10V,0,0.3f,WHITE);
    DrawTextureEx(Item11,Item11V,0,0.3f,WHITE);
    DrawTextureEx(Item12,Item12V,0,0.3f,WHITE);
}

///=====CURSOR MOVE====///
void CursorMOVE(){
    CURSORPosition.x = GetMouseX() - 60;
    CURSORPosition.y = GetMouseY() - 60;

    if(IsMouseButtonDown(MOUSE_BUTTON_LEFT)&& PRESIONANDO==false && CheckCollisionCircles(Item1V,15,CURSORPosition,15)){
            Item1V.x = CURSORPosition.x;
            Item1V.y = CURSORPosition.y;
            PRESIONANDO=true;
    }else if(IsMouseButtonDown(MOUSE_BUTTON_LEFT)&& PRESIONANDO==false && CheckCollisionCircles(Item2V,15,CURSORPosition,15)){
            Item2V.x = CURSORPosition.x;
            Item2V.y = CURSORPosition.y;
            PRESIONANDO=true;
    }else if(IsMouseButtonDown(MOUSE_BUTTON_LEFT)&& PRESIONANDO==false && CheckCollisionCircles(Item3V,15,CURSORPosition,15)){
            Item3V.x = CURSORPosition.x;
            Item3V.y = CURSORPosition.y;
            PRESIONANDO=true;
    }else if(IsMouseButtonDown(MOUSE_BUTTON_LEFT)&& PRESIONANDO==false && CheckCollisionCircles(Item4V,15,CURSORPosition,15)){
            Item4V.x = CURSORPosition.x;
            Item4V.y = CURSORPosition.y;
            PRESIONANDO=true;
    }else if(IsMouseButtonDown(MOUSE_BUTTON_LEFT)&& PRESIONANDO==false && CheckCollisionCircles(Item5V,15,CURSORPosition,15)){
            Item5V.x = CURSORPosition.x;
            Item5V.y = CURSORPosition.y;
            PRESIONANDO=true;
    }else if(IsMouseButtonDown(MOUSE_BUTTON_LEFT)&& PRESIONANDO==false && CheckCollisionCircles(Item6V,15,CURSORPosition,15)){
            Item6V.x = CURSORPosition.x;
            Item6V.y = CURSORPosition.y;
            PRESIONANDO=true;
    }else if(IsMouseButtonDown(MOUSE_BUTTON_LEFT)&& PRESIONANDO==false && CheckCollisionCircles(Item7V,15,CURSORPosition,15)){
            Item7V.x = CURSORPosition.x;
            Item7V.y = CURSORPosition.y;
            PRESIONANDO=true;
    }else if(IsMouseButtonDown(MOUSE_BUTTON_LEFT)&& PRESIONANDO==false && CheckCollisionCircles(Item8V,15,CURSORPosition,15)){
            Item8V.x = CURSORPosition.x;
            Item8V.y = CURSORPosition.y;
            PRESIONANDO=true;
    }else if(IsMouseButtonDown(MOUSE_BUTTON_LEFT)&& PRESIONANDO==false && CheckCollisionCircles(Item9V,15,CURSORPosition,15)){
            Item9V.x = CURSORPosition.x;
            Item9V.y = CURSORPosition.y;
            PRESIONANDO=true;
    }else if(IsMouseButtonDown(MOUSE_BUTTON_LEFT)&& PRESIONANDO==false && CheckCollisionCircles(Item10V,15,CURSORPosition,15)){
            Item10V.x = CURSORPosition.x;
            Item10V.y = CURSORPosition.y;
            PRESIONANDO=true;
    }else if(IsMouseButtonDown(MOUSE_BUTTON_LEFT)&& PRESIONANDO==false && CheckCollisionCircles(Item11V,15,CURSORPosition,15)){
            Item11V.x = CURSORPosition.x;
            Item11V.y = CURSORPosition.y;
            PRESIONANDO=true;
    }else if(IsMouseButtonDown(MOUSE_BUTTON_LEFT)&& PRESIONANDO==false && CheckCollisionCircles(Item12V,15,CURSORPosition,15)){
            PRESIONANDO=true;
            Item12V.x = CURSORPosition.x;
            Item12V.y = CURSORPosition.y;
    }else{
    PRESIONANDO=false;
    }
}
