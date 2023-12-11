/*a) Write C++ program to draw the following pattern. Use DDA line
and Bresenham �s circle
drawing algorithm. Apply the concept of encapsulation. 
*/

#include<iostream>
#include<graphics.h>
#include<math.h>
using namespace std;
void circlebres(float x1,float y1,float r)
{
float x,y,p;
x=0;
y=r;
p=3-(2*r);
while(x<=y)
{
putpixel(x1+x,y1+y,WHITE);
putpixel(x1+x,y1-y,WHITE);
putpixel(x1-x,y1+y,WHITE);
putpixel(x1-x,y1-y,WHITE);
putpixel(x1+y,y1+x,WHITE);
putpixel(x1+y,y1-x,WHITE);
putpixel(x1-y,y1+x,WHITE);
putpixel(x1-y,y1-x,WHITE);
x++;
if(p<0)
{
p=p+4*(x)+6;
}
else
{
p=p+4*(x-y)+10;
y--;
}
delay(40);
}
}
void drawline(int x1,int y1,int x2,int y2)
{
int dx,dy,s,m;
float xi,yi,x,y;
dx=x2-x1;
dy=y2-y1;
if(abs(dx)>abs(dy))
{
s=abs(dx);
}
else
{
s=abs(dy);
}
xi=dx/(float)s;
yi=dy/(float)s;
x=x1;
y=y1;
putpixel(x1,y1,WHITE);
for(m=0;m<s;m++)
{
putpixel(x,y,WHITE);
x=x+xi;
y=y+yi;
}
delay(500);
}
int main()
{
int xc,yc,r;
cout<<"Enter Center Coordinates : ";
cin>>xc>>yc;
cout<<"Enter Radius : ";
cin>>r;
int gd=DETECT,gm=DETECT,x1,y1,x2,y2;
initgraph(&gd,&gm,NULL);
circlebres(xc,yc,r);
circlebres(xc,yc,r/2);
drawline(xc,yc-r,xc-(0.866*r),yc+r/2);
drawline(xc,yc-r,xc+(0.866*r),yc+r/2);
drawline(xc+(0.866*r),yc+r/2,xc-(0.866*r),yc+r/2);
delay(3000);
closegraph();
return 0;
}
