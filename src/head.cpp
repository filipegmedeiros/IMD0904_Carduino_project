/*
	Head.cpp - a library to check if there is an object in front and if it moves in any direction.
	
	
	(c) Filipe Medeiros 2019 - Zlib
	
	Usage of the works is permitted provided that this instrument is 
	retained with the works, so that any entity that uses the works 
	is notified of this instrument. DISCLAIMER: THE WORKS ARE 
	WITHOUT WARRANTY.
*/

#include "Arduino.h"
#include "head.h"
//? #include <Servo.h>


//! Construtor for the Led.
//TODO: Have Object ? Led ON : Led OFF.

Head::Head(int led) {
  pinMode(led, OUTPUT);
  _Pin = led;
}
  
//! Construtor for stabalizationRange.
//TODO: Have Object ? Set stabalizationRange : Do Nothing.

Head::Head(int object) {
  pinMode(object, OUTPUT);
  _IniciateDistance = object;
}

//TODO: Set Function ?
void Head::setIniciateDistance(int stabalizationRange) 
{

}

//TODO: Check moviment with Servo.
void Head::checkmoviment (int stabalizationRange, int servoPos, int targetServoPos)
{

}