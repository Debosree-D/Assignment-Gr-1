
#include<stdio.h>
#include<graphics.h>
#include<math.h>

int main()
{
    int x1,y1,x2,y2,i;
    float x,y,dx,dy,length;
    int gd=DETECT,gm;
    printf("Enter first point:");
    scanf("%d%d",&x1,&y1);
    printf("Enter second point:");
    scanf("%d%d",&x2,&y2);
    initgraph(&gd,&gm,"");

    if(abs(x2-x1)>abs(y2-y1))
        lenght=abs(x2-x1);
    else
        lenght=abs(y2-y1);
    dx=(x2-x1) /lenght;
    dy=(y2-y1)/lenght;
    x=x1;
    y=y1;
    i=0;
    while(i<=lenght)
    {
        putpixel(x,y,RED);
        x=x+dx;
        y=y+dy;
        i++;

    }
    getch();
    closegraph();
    return o;



}
