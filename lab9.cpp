void UpdateBullets(int bullets[], int bulletCount)
{
	for (int i = 0; i < bulletCount; i++)
	{
		bullets[i]++;
	}
}

int main()
{
	// Just like regular variables, arrays are uninitialized by default.
	// You want to ensure they're zero-initialized at minimum by adding "{}".
	//int testUninitialized;
	//int testInitialized = 0;
	//int bulletsUninitialized[9];
	//int bulletsInitialized[9]{};

	// If we know what values we want our array to contain at the time of initialization,
	// we simply assign them to their respective indices within the curly braces!
	const int bulletCount = 9;
	int bulletsX[bulletCount]{ 1, 0, 0, 4, 1, 1, 1, 8, 9};
	int bulletsY[bulletCount]{ 9, 3, 3, 6, 5, 5, 2, 2, 2};

	// Similarly, we can reassign indices at runtime
	bulletsX[0] = 0;
	bulletsX[1] = 1;
	bulletsX[2] = 2;
	bulletsX[3] = 3;
	bulletsX[4] = 4;
	bulletsX[5] = 5;
	bulletsX[6] = 6;
	bulletsX[7] = 7;
	bulletsX[8] = 8;

	bulletsY[0] = 8;
	bulletsY[1] = 7;
	bulletsY[2] = 6;
	bulletsY[3] = 5;
	bulletsY[4] = 4;
	bulletsY[5] = 3;
	bulletsY[6] = 2;
	bulletsY[7] = 1;
	bulletsY[8] = 0;

	// If there's a pattern to how we want to assign our array indices, use a for-loop!
	for (int i = 0; i < 9; i++)
	{
		bulletsX[i] = 8 - i;
		bulletsY[i] = i;
	}

	UpdateBullets(bulletsX, bulletCount);
	UpdateBullets(bulletsY, bulletCount);

	return 0;
}
