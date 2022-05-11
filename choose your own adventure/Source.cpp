#include "..\..\ErisPersonalLibrary\ErisPersonalLibrary\ErisPersonalLibrary.h"
//#include "C:\Users\suther61685\source\repos\Personal_Library\Personal_Library\Personal_Library.h"

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
void trainingRoom1();
void trainingRoom2();
void trainingRoom3();
void trainingRoom4();
void scienceLab();

int main()
{
	int entryChoice = openingScene();
	cout << endl << endl;
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
		cout <<endl<< "How do you want to get in?" << endl;
		cout << "   1: main entrance" << endl;
		cout << "   2: hallway by the hero housing" << endl;
		cout << "   3: hallway by the inventor lab" << endl;
		entryChoice = validateInteger(3, 1);
		switch (entryChoice)
		{
		case 1:	//main entrance info and risks
			cout << "Remus: when you go in there is gonna be a lot of people so you will blend in with the crowd"<<endl;
			cout << "Remus: you gotta go to the Inventor and Science Lab and there is a door that needs a keycard" << endl;
			cout << "Remus: inside there is another door that also needs the keycard then you're in the ";
			cout << "inventor lab across from training room 3 and 4"<<endl;
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

//	STILL NEED DESCRIPTIONS
void mainEntrance()
{
	int menuChoice = 0;
	int breakIn = 0;
	//describe setting (history things, statue, inventor labs public)
	do
	{
		cout <<endl<< "what would you like to do?" << endl;
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
			cout << "DESCRIBE SETTING AND READ HISTORY INFO OPTIONAL HERO BIOS THINGY" << endl;
			//do you wanna read the hero bio thingys??? next one (maybe)
			break;
		case 2:	//examine statue 
			cout << "DESCRIBE STATUE IN MORE DETAIL AND READ PLAQUE" << endl;
			break;
		case 3:	//go to gift shop
			cout << "the gift shops walls are lined with every item of clothing that they could put a hero's logo on ";
			cout << "there is everything from puzzles to bobble heads to capes each with a variety of popular hero logos and names on them" << endl;
			cout << "there is lots of kids excitedly looking through the store and practically begging their parents to buy them things" << endl;
			cout << "you hear a child that cant be much older than 10 tell their teacher how they wanna be a hero when they grow up" << endl;
			cout << "if they knew how their beloved heros became heros they would change their mind" << endl;
			break;
		case 4:	//go to food court
			cout << "there is several fast food restraunts each with their own unnecessarily long lines" << endl;
			cout << "there is a large group of kids all wearing matching neon shirts with their schools name on the back" << endl;
			cout << "Marco: There's no time for that!" << endl;
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
			cout << "DESCRIBE SETTING" << endl;

			cout << "Marco: are you ready or do you want to look around more?" << endl;
			cout << "   1: I'm ready\n   2: I still need a minute" << endl;
			breakIn = validateInteger(2, 1);
			if (breakIn == 1)
			{
				cout << "DESCRIBE BREAK IN PROCESS FOR PUBLIC LAB AND GETTING INTO PRIVATE LAB" << endl;
				//no enemies encountered
				inventorLab();
			}
			break;
		}
	} while (breakIn != 1);
}

//hero training 3, hero training 4, device testing, inventor work area, science lab, medic area
void bottomHallway()
{
	int menuChoice = 0;
	//describe setting (hero training 3, hero training 4, device testing, inventor work area, science lab, medic area)
	do
	{
		cout << endl << "what would you like to do?" << endl;
		cout << "   1: go to private inventor lab" << endl;
		cout << "   2: go to device testing area" << endl;
		cout << "   3: go to training room 3" << endl;
		cout << "   4: go to training room 4" << endl;
		cout << "   5: go to science lab" << endl;
		cout << "   6: go to medic area" << endl;
		cout << "   7: go further up hallway" << endl;
		menuChoice = validateInteger(7, 1);
		switch (menuChoice)
		{
		case 1:
			//go to private inventor lab
			inventorLab();
			break;
		case 2:
			//go to device testing area
			deviceTestingRoom();
			break;
		case 3:	//go to training area 3
			trainingRoom3();
			break;
		case 4:	
			//go to training area 4
			trainingRoom4();
			break;
		case 5:
			//go to science lab
			scienceLab();
			break;
		case 6:
			//go to medic area
			medicArea();
			break;
		case 7:
			//go further up hallway
			furtherUpHallway();
			break;
		}
		//if logan not found then say "you feel like youre missing somthing..."
	} while (menuChoice != 7);
}

//	STILL NEED DESCRIPTIONS
//hero meeting room, worker housing
void furtherUpHallway()
{
	int menuChoice = 0;
	//describe setting (hero meeting room, worker housing)
	do
	{
		cout << endl << "what would you like to do?" << endl;
		cout << "   1: go to hero meeting room" << endl;
		cout << "   2: go to worker housing" << endl;
		cout << "   3: go to hallway by hero rooms" << endl;
		cout << "   4: go to hallway by inventor lab" << endl;
		menuChoice = validateInteger(4, 1);
		switch (menuChoice)
		{
		case 1:	//go to hero meeting room
			cout << "DESCRIBE SETTING (NO ENEMIES INSIDE)" << endl;
			break;
		case 2:	//go to worker housing
			cout << "DESCRIBE SETTING" << endl;
			//describe setting
			//do you have a death wish??? come on!
			cout << "Marco: Do you have a death wish?! Come on!" << endl;
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

//STILL NEED DISCRIPTIONS
//worker food court, can see gym, hero housing, hero training 1, hero training 2
void topHallway()
{
	int menuChoice = 0;
	//describe setting (worker food court and gym, hero housing, hero training 1)
	do
	{
		//what like to do?
		cout << "   1: go to worker food court" << endl;
		cout << "   2: go to hero housing" << endl;
		cout << "   3: go to training area 1" << endl;
		cout << "   4: go further up hallway" << endl;
		menuChoice = validateInteger(4, 1);
		switch (menuChoice)
		{
		case 1:	//go to worker food court
			cout << "DESCRIBE SETTING (CAN SEE GYM)" << endl << endl;;
			cout << "Marco: There's no time for that come on!" << endl;
			break;
		case 2:	//go to hero housing
			cout << "DESCRIBE SETTING" << endl<<endl;
			cout << "Marco: Do you have a death wish?! Come on!" << endl;
			break;
		case 3:	//go to training area 1
			trainingRoom1();
			break;
		case 4:	//go further up hallway
			furtherUpHallway();
			break;
		}
	} while (menuChoice != 4);
}

//	STILL NEEDS DESCRIPTION
void inventorLab()
{
	int userChoice = 0;
	//keycard entry
	cout << "DESCRIBE SETTING (NO ENEMIES)" << endl;
	do
	{
		cout << "what would you like to do?" << endl;
		cout << "   1: go to hallway" << endl;
		cout << "   2: go to public inventory and science lab" << endl;
		userChoice = validateInteger(2, 1);
		switch (userChoice)
		{
		case 1:
			bottomHallway();
			break;
		case 2:
			cout << "Marco: There's no time for that come on!" << endl;
			break;
		}
	} while (userChoice != 1);
}

void deviceTestingRoom()
{
	//describe setting
	//worker inside no chance to sneak by them
}

void trainingRoom1()
{
	//describe setting
	//worker inside 
	//metal door that you can see roman is on the other side (fingerprint scan? password? keycard with higher clearance?)
	//hacking it would take to long and would get caught and have to fight nearby workers
}

void trainingRoom2()
{
	//describe setting
	//roman inside 
	//roman fight scene but dont want to hurt him 
	//lots of dialogue (if logan there then he stops fight and says its ok)
	//if logan not there then roman doesnt hold back...
	//mention remus to try to calm down and he screams dont say his name! you dont deserve to say his name!
	//you killed him! you villians hurt so many people and ruined so many lives! lets see how you like it...
	//you died screen that has endProgram thingy
}

void trainingRoom3()
{
	int userChoice = 0;
	int breakIn = 0;
	//describe setting
	//no enemies inside 
	//metal door that you can see roman is on the other side (fingerprint scan? password? keycard with higher clearance?)
	//hacking door would take to long and high risk getting caught (random have to fight workers or passing hero or get inside)
	//are you sure you wanna do that???
	do
	{
		cout << endl << "what would you like to do?" << endl;
		cout << "   1: try and get through the door\n   2: go to hallway" << endl;
		userChoice = validateInteger(2, 1);
		switch (userChoice)
		{
		case 1:	//try and get through the door
			cout << "Marco: I could hack the scanner but it will take me a bit and might draw unwanted attention to us" << endl;
			cout << "Still want to get through the door?" << endl;
			cout << "   1: yes\n   2: no" << endl;
			breakIn = validateInteger(2, 1);
			break;
		case 2: //go to hallway
			bottomHallway();
		}
	} while (breakIn != 1);
	cout << "TRY TO BREAK INTO DOOR WITH RANDOM NUMBER GENERATOR FOR WHAT HAPPENS" << endl;
	//if random number is whatever things than fight worker or hero (maybe multiple)
	//one option for nothing happens and one option for sucsessfull
	//wanna keep trying (loop if yes if no then go to bottom hallway)
}

void trainingRoom4()
{
	//describe setting
	//hero inside 
	//maybe can sneak past
}
void medicArea()
{
	//describe setting
	//metal door that leads to training room 2 (fingerprint scan? password? keycard with higher clearance?)
	//four workers and a hero (wounded) inside 
}

void scienceLab()
{
	//describe setting
	//logan inside (set logan found to 1)
	//reunion dialogue scene
}
