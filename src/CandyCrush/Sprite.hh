/******************************************************************
* Copyright (C) 2016 Jordi Serrano Berbel <jsberbel95@gmail.com> *
* This can not be copied, modified and/or distributed without    *
* express permission of the copyright owner.                     *
******************************************************************/

#pragma once
#include "Transform.hh"
#include "Renderer.hh"
#include "ID.hh"

// Sprite class that serves as part of the Model
struct Sprite {
	Transform transform;
	ObjectID objectID;
	void Draw() { R.Push(objectID, transform); };
};