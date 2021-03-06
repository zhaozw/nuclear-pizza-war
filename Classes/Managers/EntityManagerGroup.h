#ifndef CONST_ENTITYMANAGERGROUP_H
#define CONST_ENTITYMANAGERGROUP_H

#include "cocos2d.h"

#include "Entity.h"
#include "BaseEnemy.h"
#include "EntityManager.h"

using namespace cocos2d;

class EntityManagerGroup : public CCArray
{
	protected:
		// ===========================================================
		// Protected fields
		// ===========================================================

	private:
		// ===========================================================
		// Constructor private function
		// ===========================================================

		// ===========================================================
		// Private fields
		// ===========================================================

		float mUnpackingTime;
		float mUnpackingTimeElapsed;

		// ===========================================================
		// Private methods
		// ===========================================================

		void unpacking();

	public:
		// ===========================================================
		// Public fields
		// ===========================================================
		
		// ===========================================================
		// Constructors
		// ===========================================================

		EntityManagerGroup(int pCapacity);

		// ===========================================================
		// Getters
		// ===========================================================

		// ===========================================================
		// Setters
		// ===========================================================

		// ===========================================================
		// Checkers
		// ===========================================================

		// ===========================================================
		// Events
		// ===========================================================

		// ===========================================================
		// Methods
		// ===========================================================

		void add(EntityManager* pEntityManager);
		void add(Entity* pEntity);
		void remove(Entity* pEntity);

		void update(float pDeltaTime);

		// ===========================================================
		// Virtual methods
		// ===========================================================
};

#endif