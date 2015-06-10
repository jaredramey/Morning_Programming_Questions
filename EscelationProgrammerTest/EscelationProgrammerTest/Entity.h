#include <iostream>
#include <string.h>

#pragma once

class Entity
{
	enum Types{
		Health,
		Chest,
		Trap,
		Imp,
		Ogre,
		Troll
	};

public:
	//Default constructors
	Entity();
	~Entity();

	//Custom constructors
	Entity(int in_UId, int in_ETId, float in_xPos, float in_yPos, float in_fX, float in_fY);

	//Public Variables
	Types type;
	int collisionRadius;
	int FOV;

	//Public Functions
	bool IsInFOV(Entity &other);
	bool isColliding(Entity &other);

private:
	//Private Variables
	//Unique ID & Entity Type ID
	int UId, ETId;
	//Position X & Y
	float xPos, yPos;
	//X & Y Forward
	float fX, fY;

	//Private Functions
	void GetEntityType(int ID);
	void ReadFromFile(/*File location*/);
};

