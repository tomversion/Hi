#include<iostream>
#include<graphics.h>
using namespace std;

class flood{

 public :
  
  void floodFill(int x,int y,int oldColor,int newColor){
   
   if(getpixel(x,y)==oldColor){
    putpixel(x,y,newColor);
    floodFill(x+1,y,oldColor,newColor);
    floodFill(x,y+1,oldColor,newColor);
    floodFill(x-1,y,oldColor,newColor);
    floodFill(x,y-1,oldColor,newColor);
   
   }
  }

} a;

int main(){

 int gd=DETECT,gm;
 initgraph(&gd,&gm,NULL);
 
 line(500,150,500,350);
 
 line(300,450,500,350);
 line(300,50,500,150);
 
 line(300,450,100,350);
 line(300,50,100,150);
 
 line(300,250,100,350);
 line(300,250,100,150);
 
 a.floodFill(300,449,BLACK,4);

 delay(3000);
 closegraph();
 
 return 0;
}