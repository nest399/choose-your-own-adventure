#include "..\..\ErisPersonalLibrary\ErisPersonalLibrary\ErisPersonalLibrary.h"

void mainEntrance();
void inventorLabPublic();
void inventorLab();
void deviceTestingRoom();
void bottomHallway();
void furtherUpHallway();
void topHallway();

int main()
{
	int entryChoice=0;
	int selectEntry=0;
	//context dialogue
	//entrance points options info and risks
	//how do you wanna get in?
	
	do
	{
		cout << "   1: main entrance" << endl;
		cout << "   2: hallway by the hero housing" << endl;
		cout << "   3: hallway by the inventor lab" << endl;
		entryChoice = validateInteger(3,1);
		switch(entryChoice)
		{
			case 1:	
				//main entrance 
				//main entrance info
				break;
		}
		//would you like to select this option (yes=1 no=2)?
		//selectEntry=validateInteger(2,1);
	}while(selectEntry!=1);
	
	
	
	switch (entryChoice)
	{
	case 1:	//main entrance
		mainEntrance();
		break;
	case 2:	//hallway by hero housing
		topHallway();
		break;
	case 3:	//hallway by inventor labs
		bottomHallway();
		break;
	}

	//doesnt do anything
	endProgram();
}

void mainEntrance()
{
	int menuChoice = 0;
	int breakIn = 0;
	//discribe setting (history things, statue, gift shop, food court, inventor labs public, meet and greet area, stage)
	do
	{
		//what like to do?
		cout << "   1: explore history area" << endl;
		cout << "   2: examine statue" << endl;
		cout << "   3: go to gift shop" << endl;
		cout << "   4: go to food court" << endl;
		cout << "   5: go to the meet and greet area" << endl;
		cout << "   6: go to theater" << endl;
		cout << "   7: go to inventor lab" << endl;
		menuChoice = validateInteger(7, 1);
		switch (menuChoice)
		{
		case 1:
			//explore history area
			//discribe setting...
			//history of events that happened that the "villians" caused 
			//an awful retelling of what happened at the bloodbath
			//heros over the years and a bit about each of them (choice to read them or not)
			break;
		case 2:
			//examine statue
			//discribe what statue looks like in more detail 
			//read plaque about the hero and how the big bad is like the base of the statue supporting the heros 
			break;
		case 3:
			//go to gift shop
			//discribe setting (lots of hero merch and eager children
			//overhear "i wanna be a hero when i grow up" conversation and acknowladge how wrong the kids is
			break;
		case 4:	//go to food court
			cout << "Marco: \"There's no time for that!\"" << endl;
			break;
		case 5:
			//go to meet and greet area
			//blocked off for a group of 8-10 year olds who are talking to a worker
			break;
		case 6:
			//go to theater
			//next showing is in 30 minutes 
			//poster advertising a big hero speach for next week
			break;
		case 7:
			//go to inventor lab
			//discribe setting
			//use keycard to get in or keep exploring
			//if use keycard to get in set breakIn to 1
			//write break in scene no enemies encountered
			//use keycard to enter inventory lab private
			//if breakIn=1 then call inventorLab function
			break;
		}
	} while (breakIn != 1);
}

//hero training 3, hero training 4, device testing, inventor work area, science lab, medic area
void bottomHallway()
{
	int menuChoice = 0;
	//discribe setting (hero training 3, hero training 4, device testing, inventor work area, science lab, medic area)
	
	do
	{
		//what like to do?
		cout << "   1: go to private inventor lab" << endl;
		cout << "   2: go to device testing area" << endl;
		cout << "   3: go to training area 3" << endl;
		cout << "   4: go to training area 4" << endl;
		cout << "   5: go to science lab" << endl;
		cout << "   6: go to medic area" << endl;
		cout << "   7: go further up hallway" << endl;
		menuChoice = validateInteger(7, 1);
		switch (menuChoice)
		{
		case 1:
			//go to private inventor lab
			break;
		case 2:
			//go to device testing area
			break;
		case 3:
			//go to training area 3
			break;
		case 4:	
			//go to training area 4
			break;
		case 5:
			//go to science lab
			break;
		case 6:
			//go to medic area
			break;
		case 7:
			//go further up hallway
			furtherUpHallway();
			break;
		}
	} while (menuChoice != 7);
}

//hero meeting room, worker housing
void furtherUpHallway()
{
	int menuChoice = 0;
	//describe setting (hero meeting room, worker housing)
	
	do
	{
		//what like to do?
		cout << "   1: go to hero meeting room" << endl;
		cout << "   2: go to worker housing" << endl;
		cout << "   3: go to hallway by hero rooms" << endl;
		cout << "   4: go to hallway by inventor lab" << endl;
		menuChoice = validateInteger(4, 1);
		switch (menuChoice)
		{
		case 1:
			//go to hero meeting room
			//describe setting (its empty)
			break;
		case 2:
			//go to worker housing
			//describe setting
			//do you have a death wish??? come on!
			break;
		case 3:	//go to hallway by hero rooms
			topHallway();
			break;
		case 4:	//go to hallway by inventor lab
			bottomHallway();
			break;
		}
	} while (menuChoice != 4);
}

//worker food court, can see gym, hero housing, hero training 1, hero training 2
void topHallway()
{
	int menuChoice = 0;
	//describe setting (worker food court, can see gym, hero housing, hero training 1, hero training 2)
	do
	{
		//what like to do?
		cout << "   1: go to worker food court" << endl;
		cout << "   2: go to hero housing" << endl;
		cout << "   3: go to training area 1" << endl;
		cout << "   4: go to training area 2" << endl;
		cout << "   5: go further down hallway" << endl;
		menuChoice = validateInteger(5, 1);
		switch (menuChoice)
		{
		case 1:
			//go to worker food court
			//discribe setting (can see gym)
			//there's no time for that
			break;
		case 2:
			//go to hero housing
			//describe setting
			//do you have a death wish??? come on!
			break;
		case 3:
			//go to training area 3
			break;
		case 4:
			//go to training area 4
			break;
		case 5:
			//go to science lab 
			break;
		case 6:
			//go to medic area
			break;
		case 7:
			//go further up hallway
			furtherUpHallway();
			break;
		}
	} while (menuChoice != 7);
}

void inventorLab()
{

}

void deviceTestingRoom()
{

}
