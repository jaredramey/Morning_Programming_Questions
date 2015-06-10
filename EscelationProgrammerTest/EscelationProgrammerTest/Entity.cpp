#include "Entity.h"


Entity::Entity()
{
}

Entity::Entity(int in_UId, int in_ETId, float in_xPos, float in_yPos, float in_fX, float in_fY)
{
	//Set all variables
	UId = in_UId;
	ETId = in_ETId;
	xPos = in_xPos;
	yPos = in_yPos;
	fX = in_fX;
	fY = in_fY;

	//Set type
	GetEntityType(UId);
}

//Set the Entities type
void Entity::GetEntityType(int ID)
{
	//Input Unique ID and the set type based off the Unique ID
	switch (ID)
	{
		//if Id == 0 set as Health Pickup
	case 0:
		type = Health;
		collisionRadius = 10;
		FOV = 0;
		break;

		//if Id == 1 set as Chest
	case 1:
		type == Chest;
		collisionRadius = 20;
		FOV = 0;
		break;

		//if Id == 2 set as Trap
	case 2:
		type == Trap;
		collisionRadius = 64;
		FOV = 0;
		break;

		//If Id == 3 set as a Troll
	case 3:
		type == Troll;
		collisionRadius = 12;
		FOV = 45;
		break;

		//If Id == 4 set as a Imp
	case 4:
		type = Imp;
		collisionRadius = 10;
		FOV = 65;
		break;

		//if Id == 5 set as a Ogre
	case 5:
		type = Ogre;
		collisionRadius = 25;
		FOV = 90;
		break;

	default:
		break;
	}
}

bool Entity::isColliding(Entity &other)
{
	float resultX, resultY;

	resultX = ((xPos - other.xPos) - ((collisionRadius / 2) + (other.collisionRadius / 2)));
	resultY = ((yPos - other.yPos) - ((collisionRadius / 2) + (other.collisionRadius / 2)));

	if (resultX <= 0 && resultY <= 0)
	{
		return true;
	}
	else
	{
		return false;
	}
}

bool Entity::IsInFOV(Entity &other)
{
	float resultX, resultY;

	resultX = (xPos - other.xPos);
	resultY = (yPos - other.yPos);

	float normal = (resultX - resultY);
}

void Entity::ReadFromFile()
{
	//Take in file, read it and call create
}


Entity::~Entity()
{
}
