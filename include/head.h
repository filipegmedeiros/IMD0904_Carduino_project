/*
	Head.h - a library to check if there is an object in front and if it moves in any direction.
	
	
	(c) Filipe Medeiros 2019 - Zlib
	
	Usage of the works is permitted provided that this instrument is 
	retained with the works, so that any entity that uses the works 
	is notified of this instrument. DISCLAIMER: THE WORKS ARE 
	WITHOUT WARRANTY.
*/
#ifndef head_h
#define head_h

#include "Arduino.h"

//TODO: Check All Class. If Need put/remove something.
//TODO: Check All Types.

class Head
{
  public:

//! Building Some needed constructors.
    Head::Head();
    Head::Head(int );

//! Building some fuctions to implement in head.cpp
    void checkobject(int ,int ,int );
    void checkmoviment(int ,int ,int );
    void setIniciateDistance(int );

//! Some private values? 
  private:
    int _IniciateDistance;
    int _Object;
    int _Pin;
};

#endif