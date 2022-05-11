//#include "..\..\ErisPersonalLibrary\ErisPersonalLibrary\ErisPersonalLibrary.h"
#include "C:\Users\suther61685\source\repos\Personal_Library\Personal_Library\Personal_Library.h"

// is logan in science lab, device testing lab, or cut scene style when go into furtherUpHallway???
// still need to work on...
//		public area(history, statue, public inventor lab)
//		bottom hallway(inventor lab, science lab, device testing room, medic area, training room 3, training room 4)
//		further up hallway(worker housing, hero meeting room)
//		top hallway(food court, training room 1, training room 2, hero housing)

void mainEntrance();
void inventorLab();
void deviceTestingRoom();
void bottomHallway();
void furtherUpHallway();
void topHallway();
int openingScene();

int main()
{
	int entryChoice = openingScene();
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

int openingScene()
{
	int entryChoice = 0;
	int selectEntry = 0;
	//context dialogue
	cout << "CONTEXT DIALOGUE GOES HERE" << endl;

	do
	{
		cout << "How do you want to get in?" << endl;
		cout << "   1: main entrance" << endl;
		cout << "   2: hallway by the hero housing" << endl;
		cout << "   3: hallway by the inventor lab" << endl;
		entryChoice = validateInteger(3, 1);
		switch (entryChoice)
		{
		case 1:	//main entrance info and risks
			cout << "Remus: when you go in there is gonna be a lot of people so you will blend in with the crowd ";
			cout << "you gotta go to the Inventor and Science Lab and there is a door that needs a keycard ";
			cout << "as long as nobody sees you there should be no issues" << endl;
			cout << "Remus: inside there is another door that will need the keycard again and then you're in the ";
			cout << "inventor lab across from training room 3 and 4";
			break;
		case 2:	//top hallway info and risks
			cout << "Remus: there's a door with a passcode that Marco can get through with enough time but nobody should ";
			cout << "be patroling the outside however you'll end up right next to Hero Housing so try and be quiet"<<endl;
			break;
		case 3:	//bottom hallway info and risks
			cout << "Remus: with that option the only entry point will be the one you make yourself which works for me ";
			cout << "but doing that will definately set off the alarm system" << endl;
			break;
		}

		cout << "still want to get in that way?" << endl;
		cout << "   1: yes\n   2: no" << endl;
		selectEntry = validateInteger(2, 1);
	} while (selectEntry != 1);
	cout << "Remus: off you go then. make sure you bring my brother home";
	return entryChoice;
}

void mainEntrance()
{
	int menuChoice = 0;
	int breakIn = 0;
	//describe setting (history things, statue, gift shop, food court, inventor labs public, meet and greet area, stage)
	cout << "DESCRIBE SETTING"<<endl;
	do
	{
		cout << "what would you like to do?" << endl;
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
		case 1:	//explore history area
			//discribe setting...
			//history of events that happened that the "villians" caused 
			//an awful retelling of what happened at the bloodbath
			//heros over the years and a bit about each of them (choice to read them or not)
			break;
		case 2:	//examine statue
			//discribe what statue looks like in more detail 
			//read plaque about the hero and how the big bad is like the base of the statue supporting the heros 
			break;
		case 3:	//go to gift shop
			cout << "the gift shops walls are lined with every item of clothing that they could put a hero's logo on ";
			cout << "there is everything from puzzles to bobble heads to capes each with a variety of popular hero logos and names on them" << endl;
			cout << "there is lots of kids excitedly looking through the store and practically begging their parents to buy them everything" << endl;
			cout << "you hear a child that cant be much older than 10 tell their teacher how they wanna be a hero when they grow up" << endl;
			cout << "if they knew how their beloved heros became heros they would change their mind" << endl;
			break;
		case 4:	//go to food court
			cout << "there is several fast food restraunts each with their own unnecessarily long lines" << endl;
			cout << "there is a large group of kids all wearing matching neon shirts with their schools name on the back" << endl;
			cout << "Marco: \"There's no time for that!\"" << endl;
			break;
		case 5:	//go to meet and greet area
			cout << "you aproach the meet and greet area and are met with a glass barrier\nbeyond the glass barrier ";
			cout << "you can see a group of children sitting in a circle listening eagerly to the worker standing in the center" << endl;
			break;
		case 6:	//go to theater
			cout << "glancing at the theater you see a sign on the door that reads \"next showing in 30 minutes\""<<endl;
			cout << "next to the door there is a poster advertising an event with a suprise hero guest" << endl;
			break;
		case 7:	//go to inventor lab
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
			//describe setting (can see gym)
			//there's no time for that come on!
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
			//see Logan inside (set met logan variable thingy to 1)
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
