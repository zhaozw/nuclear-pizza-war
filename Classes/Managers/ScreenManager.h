#ifndef CONST_SCREENMANAGER_H
#define CONST_SCREENMANAGER_H

#include "cocos2d.h"

#include "MainMenu.h"
#include "Level.h"
#include "GameOver.h"
#include "GameWon.h"

using namespace cocos2d;

class ScreenManager
{
	protected:
		// ===========================================================
		// Inner Classes
		// ===========================================================

		// ===========================================================
		// Constants
		// ===========================================================

		// ===========================================================
		// Fields
		// ===========================================================

		// ===========================================================
		// Constructors
		// ===========================================================

		// ===========================================================
		// Methods
		// ===========================================================

		// ===========================================================
		// Virtual Methods
		// ===========================================================

	private:
		// ===========================================================
		// Inner Classes
		// ===========================================================

		// ===========================================================
		// Constants
		// ===========================================================

		// ===========================================================
		// Fields
		// ===========================================================

		// ===========================================================
		// Constructors
		// ===========================================================

		// ===========================================================
		// Methods
		// ===========================================================
		
		// ===========================================================
		// Virtual Methods
		// ===========================================================

	public:
		// ===========================================================
		// Inner Classes
		// ===========================================================

		// ===========================================================
		// Constants
		// ===========================================================

		// ===========================================================
		// Fields
		// ===========================================================

		Screen* mScreens[4];

		// ===========================================================
		// Constructors
		// ===========================================================

		ScreenManager();

		// ===========================================================
		// Methods
		// ===========================================================

		void generate();
		
		void set(float pAnimationTime, int pAction, int pIndex);
		
		// ===========================================================
		// Virtual Methods
		// ===========================================================
};

#endif