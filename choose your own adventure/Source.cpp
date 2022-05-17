#include "..\..\ErisPersonalLibrary\ErisPersonalLibrary\ErisPersonalLibrary.h"
//#include "C:\Users\suther61685\source\repos\Personal_Library\Personal_Library\Personal_Library.h"
#include "Player.h"
#include "Enemy.h"

// is logan in science lab, device testing lab, or cut scene style when go into furtherUpHallway???
// still need to work on...
//		public area(history, public inventor lab)
//		bottom hallway(inventor lab, science lab, device testing room, medic area, training room 3, training room 4)
//		further up hallway(worker housing, hero meeting room)
//		top hallway(food court, training room 1, training room 2, hero housing)

int openingScene();
void mainEntrance(Player&);
void bottomHallway(Player&);
void furtherUpHallway(Player&);
void topHallway(Player&);
void inventorLab(Player&);
void heroMeeting(Player&);
void scienceLab(Player&);
void deviceTestingRoom(Player&);
void medicArea(Player&);
void trainingRoom1(Player&);
void trainingRoom2(Player&);
void trainingRoom3(Player&);
void trainingRoom4(Player&);
void slow(string);
void endScene();
void loganReunion();

int main()
{
	Player user;
	int entryChoice = openingScene();
	cout << endl << endl;
	switch (entryChoice)
	{
	case 1:	//main entrance
		mainEntrance(user);
		break;
	case 2:	//hallway by hero housing
		cout<<"DESCRIBE BREAK IN THINGY AND FIGHT HERO IN HALLWAY"<<endl;
		topHallway(user);
		break;
	case 3:	//hallway by inventor labs
		cout<<"DESCRIBE BREAK IN THINGY AND SET ALARM AND FIGHT THE 3 WORKERS"<<endl;
		bottomHallway(user);
		break;
	}

	//doesnt do anything
	endProgram();
}



//	ENTIRELY DONE!!!
#pragma region entirely done
void slow(string s)
{
	for (int j = 0; j < s.size(); j++)
	{
		for (int i = 0; i <= 19999999; i++);
		cout << s[j];
	}
}

void bottomHallway(Player &user)
{
	int menuChoice = 0;
	//hero training 3, hero training 4, device testing, inventor work area, science lab, medic area
	do
	{
		cout << endl << "\tWhat would you like to do?" << endl;
		cout << "\t   1: go to private inventor lab" << endl;
		cout << "\t   2: go to device testing area" << endl;
		cout << "\t   3: go to training room 3" << endl;
		cout << "\t   4: go to training room 4" << endl;
		cout << "\t   5: go to science lab" << endl;
		cout << "\t   6: go further up hallway" << endl;
		menuChoice = validateInteger(7, 1);
		switch (menuChoice)
		{
		case 1:	//go to private inventor lab
			inventorLab(user);
			break;
		case 2:	//go to device testing area
			deviceTestingRoom(user);
			break;
		case 3:	//go to training area 3
			trainingRoom3(user);
			break;
		case 4:	//go to training area 4
			trainingRoom4(user);
			break;
		case 5:	//go to science lab
			scienceLab(user);
			break;
		case 6:	//go further up hallway
			furtherUpHallway(user);
			break;
		}

		//if logan not found
		if (user.getLogan() == 0)
		{
			slow("you feel like you are missing somthing...");
		}
		
	} while (menuChoice != 6);
}

//test it still
void fightScene(Player user, Enemy enemy)
{
	int userChoice = 0;
	int sucessful = 0;
	cout << "\nENEMY SPOTTED!" << endl;

	//The  worker/hero has/has not noticed you
	cout << "the ";
	enemy.displayRole();
	cout << " ";
	enemy.displayAware();
	cout << endl;

	do
	{
		cout << "\tWhat would you like to do?" << endl;
		cout << "\t   1: attack them" << endl;
		cout << "\t   2: run away" << endl;
		cout << "\t   3: check health" << endl;
		cout << "\t   4: try to sneak past" << endl;
		userChoice = validateInteger(4, 1);
		switch (userChoice)
		{
		case 1:	//attack
			enemy.takeDamage(user.getAttack());
			cout << "you attack and do... " << user.getAttack() << " damage!" << endl;
			if (enemy.getHealth() > 0)
			{
				user.takeDamage(enemy.getAttack());
				cout << "they attack and do... " << enemy.getAttack() << "damage!" << endl;
				if (user.getHealth() <= 0)
				{
					endScene();
				}
			}
			break;
		case 2:	//run away
			//if enemy aware set or alarm set than always fail
			if (user.getAlarm() == 1)
			{
				cout << "you try to run away but it fails!" << endl;
			}
			if (user.getAlarm() == 0)
			{
				if (enemy.getAware() == 1)
				{
					cout << "you try to run away but it fails!" << endl;
				}
				else {

					user.takeDamage(enemy.getAttack());
					cout << "they attack and do... " << enemy.getAttack() << "damage!" << endl;
					if (user.getHealth() <= 0)
					{
						endScene();
					}
				}

			}
			break;
		case 3:	//check stats
			cout << "health: " << user.getHealth() << "%" << endl;
			break;
		case 4: //sneak past
			//random number (1-5) to know if sucessfull if alarm is set then always fail
			sucessful = randomInteger(1, 5);
			if (user.getAlarm() == 0)
			{
				if (sucessful != 2)
				{
					enemy.takeDamage(user.getAttack());
					cout << "you attack and do... " << user.getAttack() << " damage!" << endl;
					if (enemy.getHealth() > 0)
					{
						user.takeDamage(enemy.getAttack());
						cout << "they attack and do... " << enemy.getAttack() << "damage!" << endl;
						if (user.getHealth() <= 0)
						{
							endScene();
						}
					}
				}

				//if fail than enemy goes first
				if (sucessful == 2)	//if 2 then fail
				{
					user.takeDamage(enemy.getAttack());
					if (user.getHealth() > 0)
					{
						enemy.takeDamage(user.getAttack());

					}
					if (user.getHealth() <= 0)
					{
						endScene();
					}
				}
			}
			break;

		}
	} while ((user.getHealth() > 0) && (enemy.getHealth()>0));
}

//test it still
void medicArea(Player &user)
{
	int userChoice = 0;
	Enemy worker1;
	Enemy worker2;
	Enemy hero;
	
	//set worker2 and hero aware and set hero role to hero and health to 50
	worker2.setAware(1);
	hero.setAware(1);
	hero.setRole(1);
	hero.setHealth(50);

	cout << "you walk inside the medic area and there is several beds covered in white sheets" << endl;
	cout << "one of the beds has a wounded hero on it and there is two doctors helping him" << endl;
	cout << "you can see a metal door with a keycard scanner that leads to training room 2" << endl;
	cout << "there is a storage area filled with various medical supplies" << endl;
	
	do
	{
		switch (user.getMedicEnemyRemaining())
		{
		case 3:
			fightScene(user, worker1);
			user.setMedicEnemyRemaining(1);
			break;
		case 2:
			fightScene(user, worker2);
			user.setMedicEnemyRemaining(1);
			break;
		case 1:
			fightScene(user, hero);
			user.setMedicEnemyRemaining(1);
			break;
		}
	} while (user.getMedicEnemyRemaining() != 0);
	
	do {
		cout << endl << "\tWhat would you like to do?" << endl;
		cout << "\t   1: use healing supplies" << endl;
		cout << "\t   2: go to hallway" << endl;
		userChoice = validateInteger(2, 1);
		switch (userChoice)
		{
		case 1:	//use healing supplies
			cout << "you walk over to the medical supplies and Missy is able to heal you to 100%" << endl;
			cout << "\tMissy: there ya go, that should be a bit better for ya" << endl;
			cout << "\tMissy: you're still wounded though so be careful" << endl;
			user.setHealth(100);
			break;
		case 2:	//go to hallway
			topHallway(user);
			break;
		}
	} while (userChoice != 2);
}

void loganReunion()
{
	cout << endl << "\t";
	slow("Logan: Virgil is that you?");
	cout << endl << "\t";
	slow("Virgil: Logan! I thought I'd never get to see you again!");
	cout << endl << "\t";
	slow("Logan: They didn't hurt you did they?");
	cout << endl << "\t";
	slow("Virgil: What are you doing here Lo?");
	cout << endl << "\t";
	slow("Logan: I was trying to protect you");
	cout << endl << "\t";
	slow("Virgil: Protect me?\n");
	cout << endl << "\t";
	slow("Logan: You need to leave now");
	cout << endl << "\t";
	slow("Virgil: What no!");
	cout << endl << "\t";
	slow("Logan: They'll kill you if they find you");
	cout << endl << "\t";
	slow("Virgil: They can try");
	cout << endl << "\t";
	slow("Logan: Please Virgil just go before they find you");
	cout << endl << "\t";
	slow("Virgil: I'm not leaving without you... not again");
	cout << endl << "\t";
	slow("Logan: Nothing I do is going to make you leave is it");
	cout << endl << "\t";
	slow("Virgil: Nope");
	cout << endl << "\t";
	slow("Logan: Alright, how can I help?");
	cout << endl << "\t";
	slow("Marco: We are trying to get Roman out of here");
	cout << endl << "\t";
	slow("Logan: Oh he is not going to like that");
	cout << endl << "\t";
	slow("Virgil: We know but he can't keep living a lie");
	cout << endl << "\t";
	slow("Logan: I agree");
	cout << endl << "\t";
	slow("Logan: Roman has become someone I have grown to care for");
	cout << "you hear somthing mumbled that sounds like \"not for lack of trying\"\n\t";
	slow("Virgil: You alright Specs?");
	cout << endl << "\t";
	slow("Logan: I am adaquate");
	cout << endl << "\t";
	slow("Missy: Sounds like bullshit but we don't have time to adress that");
	cout << endl << "\t";
	low("Missy: Y'all only got so long before someone sees us");
	cout << endl << "\t";
	slow("Logan: Right, I'll help however I can");
	cout << endl;
}
#pragma endregion


//	JUST NEEDS DESCRIPTION OR DIALOGE
#pragma region needs description or dialoge
void endScene()
{
	cout << "WRITE ENDING WORDS" << endl;
	cout << "YOU DIED! GAME OVER" << endl;
	endProgram();
}

void deviceTestingRoom(Player &user)
{
	//describe setting
	cout << "DESCRIBE SETTING" << endl;

	//worker inside no chance to sneak by them
	Enemy worker;
	worker.setAware();
	fightScene(user, worker);
	cout << "\tWhat would you like to do?" << endl;
	cout << "\t   1: go to hallway" << endl;
	userChoice = validateInteger(1, 1);
	if (userChoice == 1);
	{
		bottomHallway(user);
	}
}

void heroMeeting(Player &user)
{
	int userChoice = 0;
	cout << "DESCRIBE SETTING (NO ENEMIES INSIDE)" << endl;

	cout << "\tWhat would you like to do?" << endl;
	cout << "\t   1: go to hallway" << endl;
	userChoice = validateInteger(1, 1);
	bottomHallway(user);
}

void scienceLab(Player &user)
{
	//if logan found
	if (user.getLogan() == 1)
	{
		slow("Logan: There is no need for that, we should hurry\n");
	}

	//if logan not found
	if (user.getLogan() == 0)
	{
		//describe setting mention oddly familiar worker
		user.setLoganFound();

		//reunion dialogue scene
		loganReunion();
	}
}

void inventorLab(Player &user)
{
	int userChoice = 0;
	//public inventor lab door that needs keycard entry
	cout << "DESCRIBE SETTING (NO ENEMIES)" << endl;
	do
	{
		cout << "\tWhat would you like to do?" << endl;
		cout << "\t   1: go to hallway" << endl;
		cout << "\t   2: go to public inventory and science lab" << endl;
		userChoice = validateInteger(2, 1);
		switch (userChoice)
		{
		case 1:
			bottomHallway(user);
			break;
		case 2:
			cout << "\tMarco: There's no time for that come on!" << endl;
			break;
		}
	} while (userChoice != 1);
}

int openingScene()
{
	int entryChoice = 0;
	int selectEntry = 0;
	//context dialogue
	cout << "CONTEXT DIALOGUE GOES HERE" << endl;

	do
	{
		cout <<endl<< "\tHow do you want to get in?" << endl;
		cout << "\t   1: main entrance" << endl;
		cout << "\t   2: hallway by the hero housing" << endl;
		cout << "\t   3: hallway by the inventor lab" << endl;
		entryChoice = validateInteger(3, 1);
		switch (entryChoice)
		{
		case 1:	//main entrance info and risks
			cout << "\tRemus: when you go in there is gonna be a lot of people so you will blend in with the crowd"<<endl;
			cout << "\tRemus: you gotta go to the Inventor and Science Lab and there is a door that needs a keycard" << endl;
			cout << "\tRemus: inside there is another door that also needs the keycard" << endl;
			cout << "\tRemus: that will put you in the inventor lab across from training room 3 and 4"<<endl;
			break;
		case 2:	//top hallway info and risks
			cout << "\tRemus: there's a door with a passcode that Marco can get through with enough time" << endl;
			cout << "\tRemus: nobody should be patroling the outside" << endl;
			cout << "\tRemus: you'll end up right next to Hero Housing so try and be quiet" << endl;
			break;
		case 3:	//bottom hallway info and risks
			cout << "\tRemus: with that option the only entry point will be the one you make yourself" << endl;
			cout << "\tRemus: I'm all for property dammage but doing that will definately set off the alarm system" << endl;
			break;
		}

		cout << "\n\tstill want to get in that way?" << endl;
		cout << "\t   1: yes\n\t   2: no" << endl;
		selectEntry = validateInteger(2, 1);
	} while (selectEntry != 1);
	cout << "\tRemus: off you go then. make sure you bring my brother home";
	return entryChoice;
}

//describe history stuff
void mainEntrance(Player &user)
{
	int menuChoice = 0;
	int breakIn = 0;
	string pause = "...";
	//cout <<  << endl;
	slow("you walk through the revolving door and are in a large area with lots things");
	cout << endl;
	//cout<<"" << endl;
	slow("there is lots of families and school groups scattered around looking everything");
	cout << endl;
	cout << "\tMarco: You might as well look around while we are here" << endl;

	do
	{
		cout <<endl<< "\tWhat would you like to do?" << endl;
		cout << "\t   1: explore history area" << endl;
		cout << "\t   2: examine statue" << endl;
		cout << "\t   3: go to gift shop" << endl;
		cout << "\t   4: go to food court" << endl;
		cout << "\t   5: go to the meet and greet area" << endl;
		cout << "\t   6: go to theater" << endl;
		cout << "\t   7: go to inventor lab" << endl;
		menuChoice = validateInteger(7, 1);

		switch (menuChoice)
		{
		case 1:	//explore history area
			cout << "DESCRIBE SETTING AND READ HISTORY INFO OPTIONAL HERO BIOS THINGY" << endl;
			//do you wanna read the hero bio thingys??? next one (maybe)
			break;
		case 2:	//examine statue 
			cout << "there is a tall marble statue of a hero carved carefully out of marble" << endl;
			cout << "it is standing on a large base with a plaque that is nearly unreadable" << endl;
			break;
		case 3:	//go to gift shop
			cout << "the gift shops walls are lined with every item of clothing that they could put a hero's logo on"<<endl;
			cout << "there is everything from puzzles to bobble heads to capes with a variety of popular hero names and logos on them" << endl;
			cout << "there is lots of kids excitedly looking through the store and practically begging their parents to buy them things" << endl;
			cout << "you hear a child that cant be much older than 10 tell their teacher how they wanna be a hero when they grow up" << endl;
			cout << "if they knew how their beloved heros became heros they would change their mind" << endl;
			break;
		case 4:	//go to food court
			cout << "there is several fast food restaurants each with their own unnecessarily long lines" << endl;
			cout << "there is a large group of kids all wearing matching neon shirts with their schools name on the back" << endl;
			cout << "\tMarco: There's no time for that!" << endl;
			break;
		case 5:	//go to meet and greet area
			cout << "you approach the meet and greet area and are met with a glass barrier" << endl;
			cout << "you can see a group of children sitting in a circle listening eagerly to the worker standing in the center" << endl;
			break;
		case 6:	//go to theater
			cout << "glancing at the theater you see a sign on the door that reads \"next showing in 30 minutes\""<<endl;
			cout << "next to the door there is a poster advertising an event with a suprise hero guest" << endl;
			break;
		case 7:	//go to inventor lab
			cout << "you approach the inventor lab and see it is full of computers, microscopes, and tools" << endl;
			cout << "you can see a door on the side of the room with a keycard machine next to it" << endl;
			cout << "nobody is inside and nobody else is nearby" << endl;

			cout << "\tMarco: are you ready or do you want to look around more?" << endl;
			cout << "\t   1: I'm ready\n\t   2: I still need a minute" << endl;
			breakIn = validateInteger(2, 1);
			if (breakIn == 1)
			{
				cout << "you try the keycard on the door"<<endl;
				slow(pause);
				cout << "\nthe door unlocks and opens allowing you to go inside" << endl;
				cout << "once you are inside you attempt to open the second door" << endl;
				slow(pause);
				cout << "\nthe door unlocks and opens allowing you to go inside the private inventor lab" << endl;
				inventorLab(user);
			}
			break;
		}
	} while (breakIn != 1);
}

void furtherUpHallway(Player &user)
{
	//hero meeting room, worker housing
	int menuChoice = 0;
	//describe setting (worker housing)
	do
	{
		cout << endl << "\tWhat would you like to do?" << endl;
		cout << "\t   1: go to hero meeting room" << endl;
		cout << "\t   2: go to worker housing" << endl;
		cout << "\t   3: go to hallway by hero rooms" << endl;
		cout << "\t   4: go to hallway by inventor lab" << endl;
		menuChoice = validateInteger(4, 1);
		switch (menuChoice)
		{
		case 1:	//go to hero meeting room
			heroMeeting(user);
			break;
		case 2:	//go to worker housing
			cout << "DESCRIBE SETTING" << endl;
			//describe setting
			cout << "\tMarco: Do you have a death wish?! Come on!" << endl;
			break;
		case 3:	//go to hallway by hero rooms
			topHallway(user);
			break;
		case 4:	//go to hallway by inventor lab
			bottomHallway(user);
			break;
		}
	} while (menuChoice != 4);
}

void topHallway(Player &user)
{
	//worker food court, can see gym, hero housing, hero training 1, medic area
	int menuChoice = 0;
	//describe setting (worker food court and gym, hero housing)
	do
	{
		//what like to do?
		cout<<"\tWhat would you like to do?"<<endl;
		cout << "\t   1: go to worker food court" << endl;
		cout << "\t   2: go to hero housing" << endl;
		cout << "\t   3: go to training area 1" << endl;
		cout << "\t   4: go to medic area" << endl;
		cout << "\t   5: go further up hallway" << endl;
		menuChoice = validateInteger(4, 1);
		switch (menuChoice)
		{
		case 1:	//go to worker food court
			cout << "DESCRIBE SETTING (CAN SEE GYM)" << endl << endl;;
			cout << "\tMarco: There's no time for that come on!" << endl;
			break;
		case 2:	//go to hero housing
			cout << "DESCRIBE SETTING" << endl<<endl;
			cout << "\tMarco: Do you have a death wish?! Come on!" << endl;
			break;
		case 3:	//go to training area 1
			trainingRoom1(user);
			break;
		case 4: //go to medic area
			medicArea(user);
			break;
		case 5:	//go further up hallway
			furtherUpHallway(user);
			break;
		}
	} while (menuChoice != 5);
}

//test it still
void trainingRoom4(Player &user)
{
	Enemy enemy;
	//describe setting 
	//hero inside 
	//maybe can sneak past
	cout << "DESCRIBE SETTING HERO INSIDE MAYBE CAN SNEAK PAST" << endl;
	enemy.setRole(1);
	if (user.getAlarm() == 1)
	{
		enemy.setAlarm();
	}
	fightScene(user,enemy);
}
#pragma endregion


//	INCOMPLETE
#pragma region incomplete


void trainingRoom1(Player &user)
{
	//describe setting
	//worker inside 
	//metal door that you can see roman is on the other side (fingerprint scan? password? keycard with higher clearance?)
	//hacking it would take to long and would get caught and have to fight nearby workers
}

void trainingRoom2(Player &user)
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

void trainingRoom3(Player &user)
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
		cout << endl << "\tWhat would you like to do?" << endl;
		cout << "\t   1: try and get through the door\n\t   2: go to hallway" << endl;
		userChoice = validateInteger(2, 1);
		switch (userChoice)
		{
		case 1:	//try and get through the door
			cout << "\tMarco: I could hack the scanner but it will take me a bit and might draw unwanted attention to us" << endl;
			cout << "\tStill want to get through the door?" << endl;
			cout << "\t   1: yes\n\t   2: no" << endl;
			breakIn = validateInteger(2, 1);
			break;
		case 2: //go to hallway
			bottomHallway(user);
			break;
		}
	} while (breakIn != 1);
	cout << "TRY TO BREAK INTO DOOR WITH RANDOM NUMBER GENERATOR FOR WHAT HAPPENS" << endl;
	//if random number is whatever things than fight worker or hero (maybe multiple)
	//one option for nothing happens and one option for sucsessfull
	//wanna keep trying (loop if yes if no then go to bottom hallway)
}
#pragma endregion
