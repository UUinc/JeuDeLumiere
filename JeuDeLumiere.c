#include<stdio.h>
#include<conio.h>
#include"console.h"

void LightBulb(int, int, int);

int main()
{
    int i;

    MaximizeOutputWindow();
    FontSize(15);

    while(1)
    {
        for(i = 0; i<8; i++)
        {
            LightBulb(i == 0, 5, 10); LightBulb(i == 1, 35, 10); LightBulb(i == 2, 65, 10); LightBulb(i == 3, 95, 10); LightBulb(i == 4, 125, 10); LightBulb(i == 5, 155, 10); LightBulb(i == 6, 185, 10); LightBulb(i == 7, 215, 10);
            clrscr();
        }
    }

    getch();
    return 0;
}

void LightBulb(int on, int x, int y)
{
    if(on)
    {
        textcolor(YELLOW);
        gotoxy(x,y); printf("        ___,-----.___\n");
        gotoxy(x,wherey()); printf("    ,--'\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB`--.\n");
        gotoxy(x,wherey()); printf("   /\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\\\n");
        gotoxy(x,wherey()); printf("  /\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\\\n");
        gotoxy(x,wherey()); printf(" |\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB|\n");
        gotoxy(x,wherey()); printf("|\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB|\n");
        gotoxy(x,wherey()); printf("|\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB|~~~~~~~~~|\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB|\n");
        gotoxy(x,wherey()); printf("|\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\\\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB/\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB|\n");
        gotoxy(x,wherey()); printf(" |\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\\\xDB\xDB\xDB\xDB\xDB\xDB\xDB/\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB|\n");
        gotoxy(x,wherey()); printf("  \\\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\\\xDB\xDB\xDB\xDB\xDB/\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB/\n");
        gotoxy(x,wherey()); printf("   \\\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB|\xDB\xDB\xDB|\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB/\n");
        gotoxy(x,wherey()); printf("    \\\xDB\xDB\xDB\xDB\xDB\xDB\xDB|\xDB\xDB\xDB|\xDB\xDB\xDB\xDB\xDB\xDB\xDB/\n");
        gotoxy(x,wherey()); printf("     \\\xDB\xDB\xDB\xDB\xDB\xDB|\xDB\xDB\xDB|\xDB\xDB\xDB\xDB\xDB\xDB/\n");
        gotoxy(x,wherey()); printf("      \\\xDB\xDB\xDB\xDB\xDB|\xDB\xDB\xDB|\xDB\xDB\xDB\xDB\xDB/\n");
        gotoxy(x,wherey()); printf("       \\\xDB\xDB\xDB\xDB|___|\xDB\xDB\xDB\xDB/\n");
        textcolor(LIGHTGRAY);
        gotoxy(x,wherey()); printf("       )___,-----'___(\n");
        gotoxy(x,wherey()); printf("       )___,-----'___(\n");
        gotoxy(x,wherey()); printf("       )___,-----'___(\n");
        gotoxy(x,wherey()); printf("       )___,-----'___(\n");
        gotoxy(x,wherey()); printf("       \\_____________/\n");
        gotoxy(x,wherey()); printf("            \\___/\n");
    }
    else
    {
        textcolor(YELLOW);
        gotoxy(x,y); printf("        ___,-----.___\n");
        gotoxy(x,wherey()); printf("    ,--'             `--.\n");
        gotoxy(x,wherey()); printf("   /                     \\\n");
        gotoxy(x,wherey()); printf("  /                       \\\n");
        gotoxy(x,wherey()); printf(" |                         |\n");
        gotoxy(x,wherey()); printf("|                           |\n");
        gotoxy(x,wherey()); printf("|                           |\n");
        gotoxy(x,wherey()); printf("|        |~~~~~~~~~|        |\n");
        gotoxy(x,wherey()); printf("|        \\         /        |\n");
        gotoxy(x,wherey()); printf(" |        \\       /        |\n");
        gotoxy(x,wherey()); printf("  \\        \\     /        /\n");
        gotoxy(x,wherey()); printf("   \\        |   |        /\n");
        gotoxy(x,wherey()); printf("    \\       |   |       /\n");
        gotoxy(x,wherey()); printf("     \\      |   |      /\n");
        gotoxy(x,wherey()); printf("      \\     |   |     /\n");
        gotoxy(x,wherey()); printf("       \\____|___| ___/\n");
        textcolor(LIGHTGRAY);
        gotoxy(x,wherey()); printf("       )___,-----'___(\n");
        gotoxy(x,wherey()); printf("       )___,-----'___(\n");
        gotoxy(x,wherey()); printf("       )___,-----'___(\n");
        gotoxy(x,wherey()); printf("       )___,-----'___(\n");
        gotoxy(x,wherey()); printf("       \\_____________/\n");
        gotoxy(x,wherey()); printf("            \\___/\n");
    }
    
    textcolor(WHITE);
}