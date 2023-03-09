
void PhysicsUpdate(int& bullet)
{
	bullet++;
}

// native arrays don't know their size so we must explicitly pass their size!
void UpdateAllBullets(int bullets[], int bulletCount)
{
	for (int i = 0; i < bulletCount; i++)
	{
		bullets[i]++;
	}
}

int main()
{
	// 2 initialization options
	// 1: brace-initialization (manual)
	// 2: loop-initialization (automatic)

	// always use "{}" to zero-initialize memory!
	const int bulletCount = 9;
	int bulletsX[bulletCount]{};
	int bulletsY[bulletCount]{}; 

	// Manual version
	bulletsX[0] = 0;
	bulletsX[1] = 1;
	bulletsX[2] = 2;
	bulletsX[3] = 3;
	bulletsX[4] = 4;
	bulletsX[5] = 5;
	bulletsX[6] = 6;
	bulletsX[7] = 7;
	bulletsX[8] = 8;
	bulletsY[0] = 100 + 0;
	bulletsY[1] = 100 + 1;
	bulletsY[2] = 100 + 2;
	bulletsY[3] = 100 + 3;
	bulletsY[4] = 100 + 4;
	bulletsY[5] = 100 + 5;
	bulletsY[6] = 100 + 6;
	bulletsY[7] = 100 + 7;
	bulletsY[8] = 100 + 8;

	// we don't like this
	int bullet1x;
	int bullet2x;
	int bullet3x;
	PhysicsUpdate(bullet1x);
	PhysicsUpdate(bullet2x);
	PhysicsUpdate(bullet3x);

	// Automatic version
	for (int i = 0; i < 9; i++)
	{
		bulletsX[i] = i;
		bulletsY[i] = 100 + i;

		// we very much like this!
		PhysicsUpdate(bulletsX[i]);
	}

	// Passing an array to a function
	UpdateAllBullets(bulletsX, bulletCount);
	UpdateAllBullets(bulletsY, bulletCount);

	return 0;
}

// Furthermore, instead of making arrays for each piece of data,
// we can actually make what's called an "object" to create custom data!
// 
// Hence, we can do
// Bullet bullets[9];
// instead of 
//int bulletsX[9];
//int bulletsY[9];
// 
//struct Bullet
//{
//	int x;
//	int y;
//};

// How our code looks for making a large number of things without arrays (bad)
//int bullet1x = 0;
//int bullet2x = 0;
//int bullet3x = 0;
//int bullet4x = 0;
//int bullet5x = 0;
//int bullet6x = 0;
//int bullet7x = 0;
//int bullet8x = 0;
//int bullet9x = 0;
//
//int bullet1y = 0;
//int bullet2y = 0;
//int bullet3y = 0;
//int bullet4y = 0;
//int bullet5y = 0;
//int bullet6y = 0;
//int bullet7y = 0;
//int bullet8y = 0;
//int bullet9y = 0;