#include <Mouse.h>
#include <stdlib.h>
#include <time.h>
int x=0, y=0, i=0;
int D=2;
int times=10000;
int del=0, pause=0;
bool clicking=false;
void setup() {
  // put your setup code here, to run once:
Mouse.begin();
srand(time(NULL));
}

void loop() {
  // put your main code here, to run repeatedly:
//x=rand()%256-128;
//y=rand()%256-128;
for(i=0; i<times; i++)
{
  x=rand()%(D+1)-D/2;
  y=rand()%(D+1)-D/2;
  Mouse.move(x,y,0);
  delay(del);
  if(clicking)
  {
    Mouse.click();
  }
}
delay(pause);
}
