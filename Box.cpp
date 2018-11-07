#include<iostream>
#include "Box.h"

Box::Box( )
{
  length = 0;
  width  = 0;
  height = 0;
  volume = 0;
}
void Box::Setlength(int l)
{
  length = l;
}

void Box::Setwidth(int w)
{
  width = w;
}

void Box::Setheight(int h)
{
  height = h;
}
void Box::Setvolume()
{
  volume = length*width*height;
}

int Box::Getlength()
{
  return length;
}

int Box::Getwidth()
{
  return width;
}

int Box::Getheight()
{
  return height;
}
double Box::Getvolume()
{
  return volume;
}
