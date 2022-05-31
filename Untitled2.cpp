#include <graphics.h>
#include <conio.h>
#include <stdio.h>

    int size = 700;
    int main()
{
	int check = 7;
	int driver = DETECT,mode;
	int b=300, c=247, d=172, e=119, f=119, g=172, h=247, i=300, j=300;
    int up = 185, down = 669;
	initwindow(size,size,"");

	while(1)
	{
		if(b >= down)
		{
			check = -5;
		}
		else if (b <= up)
		{
			check = 5;
		}
		b  += check;
		c  += check;
		d  += check;
		e  += check;
		f  += check;
		g  += check;
		h  += check;
		i  += check;
		j  += check;


        int octagon[18]= {350,b,297,c,297,d,350,e,425,f,478,g,478,h,425,i,350,j};
        int octago[18]= {260,b,207,c,207,d,260,e,335,f,388,g,388,h,335,i,260,j};
        setfillstyle(SOLID_FILL,RED);
        fillpoly(9,octagon);
        setfillstyle(SOLID_FILL,BLUE);
        fillpoly(9,octago);
        delay(50);
		cleardevice();
	}
}

