﻿#include <Windows.h>  ///// Shoven#7343 Tarafından Geliştirildi


bool crosshairons = false; int cx = 0; int cy = 0; int i = 0; int bir = 255; int iki = 0; int uc = 0; HDC ragedc = GetDC(HWND_DESKTOP); // bool ve int tanımları

void Crosshair() // crosshair tanımı
{
   {
        for (int i = 0; i < 5; i++) 
        {
            SetPixel(ragedc, cx + i, cy + ((5 - -1) / 2), RGB(bir, iki, uc));
            SetPixel(ragedc, cx + i, cy + ((5 - 1) / 2), RGB(bir, iki, uc));
            SetPixel(ragedc, cx + i, cy + ((5 - 3) / 2), RGB(bir, iki, uc));
            SetPixel(ragedc, cx + ((5 - -1) / 2), cy + i, RGB(bir, iki, uc));
            SetPixel(ragedc, cx + ((5 - 1) / 2), cy + i, RGB(bir, iki, uc));
            SetPixel(ragedc, cx + ((5 - 3) / 2), cy + i, RGB(bir, iki, uc));
        }
        cx = GetSystemMetrics(SM_CXSCREEN) / 2 - ((5 - 1) / 2);
        cy = GetSystemMetrics(SM_CYSCREEN) / 2 - ((5 - 1) / 2);
    }
}
int main()       
{
    ::ShowWindow(::GetConsoleWindow(), SW_HIDE);
    while (i < 1) {  // while döngüsü sürekli olarak kalması için
        Crosshair(); /// void verdiğimiz crosshairın kısmı
        if (GetAsyncKeyState(VK_END))
        {
            exit(0);     ///// Just press the end button to close. <-> End tuşuna basarsanız kapanır
        }
        else if (GetAsyncKeyState(VK_NUMPAD1)) // If you press Numpad 1, the color will be red. <-> Numpad 1'e basarsanız, renk kırmızı olur
        {
            Beep(150, 100); /// makes a sound when color is changed <-> renk değiştirildiğinde ses çıkarır
            bir = 255;
            iki = 0;
            uc = 0;
        }
        else if (GetAsyncKeyState(VK_NUMPAD2)) // If you press Numpad 2, the color will be yellow. <-> Numpad 2'e basarsanız, renk kırmızı olur
        {
            Beep(150, 100); /// makes a sound when color is changed <-> renk değiştirildiğinde ses çıkarır
            bir = 255;
            iki = 255;
            uc = 0;
        }
        else if (GetAsyncKeyState(VK_NUMPAD3)) // If you press Numpad 3, the color will be white. <-> Numpad 3'e basarsanız, renk beyaz olur
        {
            Beep(150, 100); /// makes a sound when color is changed <-> renk değiştirildiğinde ses çıkarır
            bir = 255;
            iki = 255;
            uc = 255;
        }
        else if (GetAsyncKeyState(VK_NUMPAD4))  // If you press Numpad 3, the color will be mavi. <-> Numpad 4'e basarsanız, renk mavi olur
        {
            Beep(150, 100); /// makes a sound when color is changed <-> renk değiştirildiğinde ses çıkarır
            bir = 0;
            iki = 0;
            uc = 255;
        }
        else if (GetAsyncKeyState(VK_NUMPAD5)) // If you press Numpad 3, the color will be light blue. <-> Numpad 5'e basarsanız, renk açık mavi olur
        {
            Beep(150, 100); /// makes a sound when color is changed <-> renk değiştirildiğinde ses çıkarır
            bir = 0;
            iki = 255;
            uc = 255;
        }
        else if (GetAsyncKeyState(VK_NUMPAD5)) // If you press Numpad 3, the color will be light blue. <-> Numpad 5'e basarsanız, renk açık mavi olur
        {
            Beep(150, 100); /// makes a sound when color is changed <-> renk değiştirildiğinde ses çıkarır
            bir = 255;
            iki = 0;
            uc = 255;
        }
    }
}