                

#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <time.h>
#include <stdio.h>
#include <stdbool.h>
#include <unistd.h> //sleep timer

//Prototypes
void shuffle(int *a, int *b, int SIZE);
void combine(int *a, int *b, int *c, int *d, int *all);



int rando(void);
int gambleRandom(void);
int room12Spells(int *hp, int enDam);
int room7DiceRoll(int side);
void room7RandomNum(int *ptr, int size);
void room7SortNum(int *ptr, int size);

void stringStuff(char *ptr);

void printUpper(char *arr, int size);

void writeAnswers(void);
int checkAnswers(int *ptr);

int RolltheDiceman(void);
void casecheck(void);
void readfile(void);
void randomfill(void);


int getFileInfo(int num);
void gameOver(int winOrlose);
int checkInput(char option[10]);
void TypeWriter(char *arr);

void warning(int count);
char uppercase(char *str);
int randomize(int *num, int SIZE);

int main(void)
{

    int x,y,z,i,h,g,k,choice=0,pin=0;

  

    char name[256];
    int boxNum=0;
    int num = 6, guess= 0, a;


    srand(time(NULL));

    int power = 0;
    int diceroll;


    printf("Please enter your name: "); //Input any number of array inputs
    scanf("%s",name);

    printf("Hello %s welcome to the rpgGame!\n",name);

    while(choice != 99)
    {
        puts("You find yourself in a dark room and you are not sure how you got here.");
        puts("As you look around you see the room has 25 doors, each labeled with a number. You are not sure how such a small room can have 25 doors, sooo magic...");
        puts("The room starts filling with water and you must choose a door to open or you will likely drown. you may quit anytime by selecting option 99");
        puts("What door do you choose?");
        scanf("%d",&choice);
         
         switch(choice)
        {
            case 13:
                {

                #define RED(string)     "\x1b[31m" string "\x1b[0m"
                #define GREEN(string)    "\x1b[32m" string "\x1b[0m"
                #define YELLOW(string)  "\x1b[33m" string "\x1b[0m"
                #define BLUE(string)     "\x1b[34m" string "\x1b[0m"
                #define MAGENTA(string)  "\x1b[35m" string "\x1b[0m"
                #define CYAN(string)     "\x1b[36m" string "\x1b[0m"
                
                //Variables
                char str[20];
                int count;
                int select;
                int option;
                
                while(choice != 99)
                {
                    
                    //Story
                    puts("");
                    puts("" BLUE("You open the door and find a time traveling car. You're excited to drive the traveling car. You get in the car and start thinking of all the places in time you could visit. The car asks you...")"");
                    
                    //Question
                    puts("");
                    puts(""CYAN("WHAT TIME AND PLACE WOULD YOU LIKE TO TRAVEL?")"");
                    scanf("%s",str);
                    puts("\n");
                    
                    
                    puts("" YELLOW("EEEEEE      X     X    CCCCCCC     EEEEEE     L          L          EEEEEE    N      N    TTTTTTTTTTT   ")"");
                    puts("" YELLOW("E            X   X     C           E          L          L          E         N N    N         T        ")"");
                    puts("" YELLOW("E             X X      C           E          L          L          E         N  N   N         T        ")"");
                    puts("" YELLOW("EEEEE          X       C           EEEEE      L          L          EEEEE     N   N  N         T        ")"");
                    puts("" YELLOW("E             X X      C           E          L          L          E         N    N N         T        ")"");
                    puts("" YELLOW("E            X   X     C           E          L          L          E         N     NN         T        ")"");
                    puts("" YELLOW("EEEEEE      X     X    CCCCCCC     EEEEEE     LLLLLLL    LLLLLLL    EEEEEE    N      N         T        ")"");
                    
                    puts("\n");
                    puts("YOU WILL BE TRAVELING TO ");
                    printf("%c\t",uppercase(str));
                    //puts("");
                    
                    //Story
                    puts(""BLUE("\nYou look at your watch and the hands are turning backwards. You look around and see the wormhole around you. Everything is moving so fast! The time traveling car is trembling and now you are starting to feel really dizzy. You want it to stop but it continues to move faster. You reach out to press the red button in front of you. Suddenly...")"");
                    puts("");
                    sleep(7);
                    
                    //Warning
                    warning(count);
                    
                    //Sleep timer
                    sleep(1);
                    
                    //Story
                    puts(""BLUE("\nYou have fainted. You wake up you see a blurry light. You're trying to read what is says but your vision is still a little blurry")"");
                    
                    //Prints
                    puts("\n");
                    puts(""GREEN("\nY_____________________________________________________________O___________________U")"");
                    
                    //sleep timer
                    sleep(1);
                    //Prints
                    puts(""GREEN("\nH_______________________________________________________________A__________________________________V____________E")"");
                    
                    //sleep timer
                    sleep(1);
                    
                    puts(""GREEN("\nA_____________R________R____________________________________________________I_________________________________V___________________E_________________________D")"");
                    
                    //sleep timer
                    sleep(1);
                    
                    puts(""GREEN("\nT________________O Y____________O_______________U____________R")"");
                    
                    //sleep timer
                    sleep(1);
                    puts(""GREEN("\nD_____________E_________________________________S__________T_________________I______________________________N______________AT____ION")"");
                    
                    //Story
                    puts(""BLUE("\nYou wipe your eyes getting closer to the screen to read what it says...")"");
                    //sleep timer
                    sleep(3);
                    
                    puts(""GREEN("\nYOU HAVE ARRIVED TO YOUR DESTINATION")"");
                    
                    //Sleep
                    sleep(1);
                    
                    
                    //Story
                    puts(""BLUE("\nYou look out the window but you do not know where you have landed. You look out and you see a lot of trees and the foggy sky. You try turning on the time traveling car but the car is damaged and out of battery. You get out of the time traveling car and decide to wander around the forest. As you walk through the forest, you hear a sound. You do not know where it's coming from but then you hear it again. You want to know what it is so you follow the sound. You walk through the brushes. You ask yourself 'IS THAT REALLY WHAT I THINK IT IS. I HAVE TO HURRY!' You get closer and closer to the sound. I KNEW IT! IT'S A TRAIN! You search around but don't see anyone.Suddenly,the train starts to move...")"");
                    puts("\n\n");
                    
                    
                    //Question
                    
                    fseek(stdin,0,SEEK_END);
                    puts(YELLOW("What should you do?")"");
                    puts(YELLOW("Select (1) to proceed")"");
                    scanf("%d",&choice);
                    
                    
                    if(choice == 1)
                    {
                        fseek(stdin,0,SEEK_END);
                        puts(""YELLOW("(1) Get on the moving train?\t\t\t\tSELECT: (1)")"");
                        puts(""YELLOW("(2) Continue walking and search for a road?\t\tSELECT: (2)")"");
                        puts(""YELLOW("(3) Walk back to the time traveling car?\t\tSELECT: (3)")"");
                        scanf("%d",&choice);
                        
                        
                        
                        option = choice;
                        
                        if(option == 1)
                        {
                            //OPTION 1 CODE
                            char letter;
                            puts(""BLUE("You must hurry because the train is leaving. You begin to chase after the train and quickly jump on train. The train is smelly but its too late to get off because the train is now moving fast. So you have no other choice but to stay on the train until it arrives to its destination... You do not know what time it is but see the sky getting dark. You'll have to spend the night in the train.")"");
                            puts(""BLUE("You have fallen asleep and you are now waking up the train is arriving to its destintation. Should you get off right way or wait a little while?")"");
                            
                            fseek(stdin,0,SEEK_END);
                            puts(""YELLOW("Get off right away!\tSelect a:")"");
                            puts(""YELLOW("Wait a little while!\tSeleect b:")"");
                            scanf(" %c",&letter);
                            
                            
                            if(letter =='a' || letter =='A')
                            {
                                puts(""BLUE("You have get off the train right away. Some men in uniforms begin to shoot at you. You begin to run away and run into the woods and quicly hide behide a big log. Suddenly you hear a man say..")"");
                                puts("\n\n");
                                puts("NETTER VERSUCH");
                                puts("\n\n");
                                puts(""BLUE("He pulls the trigger.")"");
                                puts(""RED("You were shot. Game over.")"");
                                puts(""RED("Try again. You will be taken back to the time traveling car.\n")"");
                                
                            }
                            
                            if(letter =='b' || letter =='B')
                            {
                                puts(""BLUE("You have decided to wait for a while. You hear voices and quickly hide.... You stay on the train just to be safe. You finally get off the train. You see a village up ahead and begin to walk. As you arrive to the village you look up and see a sign that says  ")"");
                                puts("\n\n");
                                puts("AREBEIT MACHT FREI");
                                puts("\n\n");
                                
                                fseek(stdin,0,SEEK_END);
                                puts(""YELLOW("(1)Enter the village?\t\tSELECT: (1)")"");
                                puts(""YELLOW("(2)Walk back into the forest?\t\t\tSELECT: (2)")"");
                                scanf("%d",&choice);
                                
                                
                                if(option!=1)
                                {
                                    puts(""BLUE("You walk back into the woods but you do not know where to go. You have now been walking for several hours. You're lost. Its getting dark and you are also getting really cold. You cant feel your feet or hands. You will have to spend the night in the woods.")"");
                                    puts(""BLUE("You lay down on top of a big log and fall asleep.")"");
                                    puts(""RED("You feel asleep and never woke up. You froze to death. Game over.")"");
                                    puts(""RED("Try again. You will be taken back to the time traveling car.\n")"");
                                    
                                }
                                
                                option = choice;
                                
                                if(option  == 1)
                                {
                                    char letter;
                                    
                                    puts(""BLUE("It's starting to get dark. You must hurry and find a place to spend the night.  You enter the village and see several buildings. Should you spend the night in the building on your left or the building on your right?")"");
                                    
                                    fseek(stdin,0,SEEK_END);
                                    puts(""YELLOW("(a) Right!\t\t\t\tSELECT: (a)")"");
                                    puts(""YELLOW("(b) Left!\t\tSELECT: (b)")"");
                                    scanf(" %c",&letter);
                                    
                                    
                                    
                                    if(letter =='a' || letter =='A')
                                    {
                                        puts(""BLUE("You decided to enter the building on your right. You open the door and it is very dark but found a place to lay down.")"");
                                        puts(""BLUE("Suddenly you wake up with a whistle and the door opens. Many people begin to fill up the room. You ask someone...")"");
                                        puts("\n\n");
                                        puts("WHAT'S HAPPENING");
                                        puts("\n\n");
                                        puts(""BLUE("But the person responses in a language you do not understand")"");
                                        puts(""BLUE("You have no clue what is going on but see everyone taking off their clothes")"");
                                        puts(""BLUE("Suddenly smoke begins to fill up the room.")"");
                                        puts(""RED("You were in a gas chamber and have been poisoned. Game over.")"");
                                        puts(""RED("Try again. You will be taken back to the time traveling car.\n")"");
                                        
                                    }
                                    
                                    if(letter =='b' || letter =='B')
                                    {
                                        puts(""BLUE("You have decided to enter the building on your left. You open the door and suddenly see several people dressed in stripped clothing")"");
                                        puts(""BLUE("You decide to ask...")"");
                                        puts("\n\n");
                                        puts("COULD I SPEND THE NIGHT HERE? IM LOST AND I DO NOT THIS AREA.");
                                        puts("\n\n");
                                        puts(""BLUE("Then one person responses saying...")"");
                                        puts("YOU SHOULDN'T BE HERE! THEY HATE US ALL!");
                                        puts("\n\n");
                                        puts(""BLUE("The next morning a person in a uniform enters the room and yells out...")"");
                                        puts("WEIB JEMAND HIER,WIE MAN MATHE MACHT?");
                                        puts("\n\n");
                                        puts(""BLUE("Your friend translates for you that the person asked does someone here knows how to do math?. You quickly raise your hand.The person in the uniform approaches you and gives you a math problem to solve.")"");
                                        puts(""BLUE("But first says...")"");
                                        puts("\n\n");
                                        puts("ZUNACHST MUSSEN SIE JEDOCH WINE ZAHL ZWISCHEN 1 UND 10 AUSWAHLEN!(But first you must choose a number from 1 - 10)");
                                        puts("\n\n");
                                        
                                        
                                                    
                                        
    
                                        
                                        
                                    }
                                    break;
                                    
                                }
                            }
                        }
                        
                    }
                    else if(option == 2)
                    {
                        //OPTION 2 CODE
                        char letter;
                        puts(""BLUE("You have decided to continue walking and search for a road. As you continue walking you hear a motorcycle. The motorcycle is lonely. There is no one around. Should you take it?")"");
                        
                        fseek(stdin,0,SEEK_END);
                        puts(""YELLOW("Yes!\tSelect a:"));
                        puts(""YELLOW("No!\tSeleect b:"));
                        scanf(" %c",&letter);
                        
                        
                        if(letter =='a' || letter =='A')
                        {
                            puts(""BLUE("You quickly get on the motorcycle and start taking off. This is your first time driving a motorcycle. You press the acceleration to go faster. Then all of a sudden...")"");
                            puts(""RED("You lose control and crash. Game over.")"");
                            puts(""RED("Try again. You will be taken back to the time traveling car.\n")"");
                            
                        }
                        
                        if(letter =='b' || letter =='B')
                        {
                            puts(""BLUE("You have decided not to get on the motorcycle because you do not know how to drive. So you continue to walk along the side of the rode. As you continue to walk you hear something in the bushes you can not see what it is. You begin to walk faster but then you hear the noise again. You start to panic and begin to run. You're running and looking back to see if something is chasing you. Then all of a sudden...")"");
                            puts(""RED("You trip and hit your head against a big rock. Game over.")"");
                            puts(""RED("Try again. You will be taken back to the time traveling car.\n")"");
                            
                        }
                        
                    }
                    else if(option == 3)
                    {
                        //OPTION 3 CODE
                        char letter;
                        puts(""BLUE("You have decided to walk back and follow your shoe tracks. As you continue walking in the snow you begin to realize that the shoe tracks you were following were not your shoe tracks. Should you continue to follow the shoe tracks?")"");
                        
                        fseek(stdin,0,SEEK_END);
                        puts(""YELLOW("Yes!\tSelect a:"));
                        puts(""YELLOW("No!\tSeleect b:"));
                        scanf(" %c",&letter);
                        
                        
                        if(letter =='a' || letter =='A')
                        {
                            puts(""BLUE("You have continued to follow the shoe tracks and begin to hear voices. You still do not know who it is or understand what they are saying. You yell out.")"");
                            puts("HELLO? IS ANYONE THERE?");
                            puts(""BLUE("Suddenly, you feel a gun behind your head and someone saying..")"");
                            puts("NETTER VERSUCH");
                            puts("\n\n");
                            puts(""BLUE("He pulls the trigger.")"");
                            puts(""RED("You were shot. Game over.")"");
                            puts(""BLUE("Try again. You will be taken back to the time traveling car.\n")"");
                        }
                        
                        if(letter =='b' || letter =='B')
                        {
                            puts(""BLUE("You have decided to go back to find the time traveling car.You have now been walking for several hours. You're lost and do not know where to go. Its getting dark and you are also getting really cold. You cant feel your feet or hands. You will have to spend the night in the woods.")"");
                            puts(""RED("You lay down on top of a big log and fall asleep.")"");
                            puts(""RED("You feel asleep and never woke up. You froze to death. Game over.")"");
                            puts(""RED("Try again. You will be taken back to the time traveling car.\n")"");
                        }
                        
                        
                    }
                    else if(choice == 99)
                    {
                        puts("You quit the Game");
                    }
                    else
                    {
                        puts("Wrong input type. Try Again");
                        break;
                    }
                }
                break;
            }
        }
    }
}
int rando(void)
{
	int r = (rand() % 2) + 1;
	return r;
}
void shuffle(int *a, int *b, int SIZE)
{
	int i;
	int hold;
	for(i = 0; i < SIZE; i++)
	{
		hold = *(b + i);
		*(b + i) = *(a + i + 1);
		*(a + i + 1) = hold;
	}
}


void stringStuff(char *ptr)
{
	printf("Here is your string before any manipulation: %s\n", ptr);

	int i;
	for(i = 0; i < 256; i++)	
	{
		if(isupper(*(ptr + i)))
		{
			*(ptr + i) = tolower(*(ptr+i));
		}
		else if(islower(*(ptr+i)))
		{
			*(ptr + i) = toupper(*(ptr + i));
		}
		else
		{
			continue;
		}
		ptr + i;
	}
	printf("Here is your string after i messed with it: %s\n", ptr);
	
}


void combine(int *a, int *b, int *c, int *d, int *all)
{
	int i;
	int j;
	int k;
	int l;
	int m;
	
	for(i = 0; i < 52; i++)
	{
		all[j++] = a[i++];
		all[k++] = b[i++];
		all[l++] = c[i++];
		all[m++] = d[i++];
	}
}

int gambleRandom(void)
{
	int r = (rand() % 14) + 1;
	return r;
}

int room12Spells(int *hp, int enDam)	//spell chanting
{
	char fire[] = "fire";
	char thun[] = "thunder";
	char heal[] = "heal";
	char ref[] = "reflect";
	char spell[9] = "";
	puts("Enter any of the following spells: fire, thunder, heal, or reflect");
	scanf("%s", spell);
	char *ch = spell;
	int i = 0, spellC = 0;
	for (i = 0, spellC = 0; i<4; i++)
	{
		if (*(ch + i) == fire[i])
		{
			spellC++;
		}
		else
		{
			break;
		}
	}
	if (spellC == 4)
	{
		puts("You casted the fire spell succesfully!");
		return 4;	//guarunteed 4 damage
	}
	for (i = 0, spellC = 0; i<4; i++)
	{
		if (*(ch + i) == heal[i])
		{
			spellC++;
		}
		else
		{
			break;
		}
	}
	if (spellC == 4)
	{
		if (*hp + 10>20)
		{
			*hp = 20;
		}
		else
		{
			*hp += 10;
		}
		puts("You casted the heal spell succesfully!");
		return 0;	//heal 10 hp
	}
	for (i = 0, spellC = 0; i<7; i++)
	{
		if (*(ch + i) == thun[i])
		{
			spellC++;
		}
		else
		{
			break;
		}
	}
	if (spellC == 7)
	{

		if (rand() % 2 == 1)
		{		//50% chance of hitting
			puts("You casted the thunder spell succesfully!");
			return 8;
		}
		else
		{
			puts("You casted the thunder spell unsuccesfully!");
			return 0;
		}
	}
	for (i = 0, spellC = 0; i<7; i++)
	{
		if (*(ch + i) == ref[i])
		{
			spellC++;
		}
		else
		{
			break;
		}
	}
	if (spellC == 7)
	{
		puts("You casted the reflect spell succesfully!");
		return enDam;	//reflect enemy damage
	}
	puts("You failed to cast any spell!");
	return 0;		//failed spell
}

int room7DiceRoll(int side)
{
	int roll = (rand() % side) +1;
	return roll;
}

void room7RandomNum(int *ptr, int size)
{
	int i;
	for(i=0;i<5;i++)
	{
		for(i=0;i<size;i++)
		{
			*ptr = (rand()%100)+1;
			ptr++;
		}
	}
}

void room7SortNum(int *ptr, int size)
{
	int i, j;
	int temp;
	for(i=0;i<size;i++)
	{
		for(j=i+1;j<size;j++)
		{
			if(*(ptr+i)<=*(ptr+j))
			{
				temp = *(ptr+i);
				*(ptr+i) = *(ptr+j);
				*(ptr+j) = temp;
			}
		}
	}
}

void writeAnswers()
{
    int input = 0;
	FILE *wptr;

    wptr = fopen("output.txt", "w");


        puts("Enter the magicNumber: ");
        scanf("%d", &input);

        fprintf(wptr, "%d\n", input);

        puts("Enter the weight Balance: ");
        scanf("%d", &input);

        fprintf(wptr, "%d\n", input);

	fclose(wptr);
}


int checkAnswers(int *ptr)
{
    FILE *rptr;
    int i;
	int ptrInt = 0;
	int correct = 0;

	if((rptr = fopen("output.txt", "r")) == NULL)
	{
		puts("File could not be opened");
	}
	else
    {
        while(!feof(rptr))
		{
            fscanf(rptr, "%d", ptrInt);

            for(i = 0; i < 2; i++)
            {
                if(ptrInt == *ptr)
                {
                    correct++;
                    ptr++;
                }
            }
			//compare reader with ptr

		}
    }
    rewind(rptr);
    fclose(rptr);
    return correct;

}
void printUpper(char *arr, int size)
{
	int i;
	for(i=0;i<size;i++)
	{
		if(islower(arr[i]))
		{
			*(arr+i) = toupper(*(arr+i));
		}
	}
	printf("%s",arr);
}
int RolltheDiceman(void)
{
	int a;
	a = (rand() % 6) + 1;
	return a;
}

void casecheck(void)
{
	char input[] ={'"','T','h','e','y',' ','D','i','d',' ','S','u','r','g','e','r','y',' ','O','n',' ','A',' ','G','R','A','P','E','!','"'};
	int upper=0, lower=0, guessadd,i;
	for(i=0;i<input[i]!='\0';i++)
	{
		if(isupper(input[i]))
		{
			upper++;
		}
		if(islower(input[i]))
		{
			lower++;
		}
		printf("%c",input[i]);
	}
	puts("\nHow many lowercase and uppercase letters are in the string you entered?\n");
	scanf("%d", &guessadd);
	if(guessadd == (upper+lower))
	{
		printf("Correct! There were %d lowercase letters and %d uppercase letters\n", lower, upper);
		puts("You may leave.... Never come back...muahahah");
	}
	else
	{
		printf("Incorrect! There were %d lowercase letters and %d uppercase letters\n", lower, upper);
		puts("I will now freeze you to death!!!!\n");
		puts("----- GAME OVER -----\n");
	}
}

void readfile(void)
{
	char accountuser[30] = {0};
	FILE *wptr;
	FILE *rptr;
	unsigned int account = 0;
	double balance = 0;
	double balanceguess = 0;

	if((rptr = fopen("input.txt", "r")) == NULL)
	{
		puts("File could not be opened" );
		puts("REQUIRES A 'input.txt' file \n");
	}
	else
	{
		puts("If you add Tim's balance with Roman's balance what do you get?\n");
		puts("Displaying all balance accounts.\n");
		fscanf(rptr,"%d%s%lf", &account, accountuser, &balance );
		rewind(rptr);
		while(!feof(rptr))
		{
			fscanf(rptr,"%d%s%lf", &account, accountuser, &balance );
			printf("%d %s %.2f\n", account, accountuser, balance);
		}
	}
	scanf("%lf", &balanceguess);
	if(balanceguess == 62.78)
	{
		puts("Correct! You may leave.... \n");
	}
	else
	{
		puts("I will now throw the knife back at you!!!!\n");
		puts("----- GAME OVER -----\n");
	}
}

void randomfill(void)
{
	srand(time(NULL));
	int i=0,y=0,z=0,swap;
	int firstArray[5] = {0};
	int secondArray[5] = {0};
	
	for(i=0;i<5;i++)
	{
		firstArray[i] = rand() % (200 + 1);
		i++;
	}
	for(i=0;i<5;i++)
	{
		secondArray[i] = rand() % (200 + 1);
		i++;
	}
		
	puts("Before Swap \n");
	for(i=0;i<5;i++)
	{
		printf("firstArray[%d]=%d, secondArray[%d]=%d\n", i, firstArray[i], i, secondArray[i]);
	}
        puts("\n");
	puts("After Swap \n");
	for(y=0;y<5;y++)
	{
		swap = firstArray[y];
                firstArray[y]=secondArray[y];
		secondArray[y] = swap;
		
	}
        for(z=0;z<5;z++)
        {
		printf("firstArray[%d]=%d, secondArray[%d]=%d\n", z, firstArray[z], z, secondArray[z]);
	}
	puts("To be honest, this choice shouldn't even be an option....\n");
	puts("I guess I have no other choice but to kill you.... muahahaha\n");
	puts("----- GAME OVER -----\n");
}



int checkInput(char option[10]){
	
	//return 0 if alphanumeric
	//return 1 if has alpha characters
	//return 2 if has numbers
	for(int i = 0; i < 10; i++){
		if(isalnum(option[i])){
			if(isalpha(option[i])){
				return 0; //alpha character
				break;
			}
			
			if(isdigit(option[i])){
				return 1; // a integer
				break;
				
			}
			
		}else{
			return -1;
			break;
		}
	}
	
	return -1;
}


void gameOver(int winOrlose){
	
	int gamesPlayed = 0;
	int totalDeaths = 0;
	int totalWins = 0;
	
	FILE *rptr;
	FILE *wptr;

	
	wptr = fopen("stats.txt","a");
	

	if((rptr = fopen("stats.txt","r")) == NULL)
	{
		puts("File could not be opened");
	}
	else{
		
		while(!feof(rptr)){
			//int ok,ok1,ok2;
			fscanf(rptr,"%d %d %d",&gamesPlayed,&totalWins,&totalDeaths);
			
			gamesPlayed++;
			
			if(winOrlose == 1){
				//win
				totalWins++;
			}else if(winOrlose == 0){
				//loss
				totalDeaths++;
			}
		
			wptr = fopen("stats.txt","w");
			fprintf(wptr,"%d %d %d",gamesPlayed,totalWins,totalDeaths);
			
			fclose(rptr);
			fclose(wptr);
			
			exit(0);
		}
	}
}

int getFileInfo(int num){
	
	int gamesPlayed = 0;
	int totalDeaths = 0;
	int totalWins = 0;
	
	FILE *rptr;
	
	if((rptr = fopen("stats.txt","r")) == NULL)
	{
		fopen("stats.txt","w");
	}
	else{
		while(!feof(rptr)){
			
			fscanf(rptr,"%d %d %d",&gamesPlayed,&totalWins,&totalDeaths);
			
			//printf("%d %d %d\n",gamesPlayed,totalDeaths,longestTime);
			//fprintf(wptr," %d %d %d\n",gamesPlayed,totalDeaths,longestTime);
			
			if(num == 1){
				return(gamesPlayed);
			}else if(num == 2){
				return(totalWins);
			}else{
				return(totalDeaths);
			}
			
			fclose(rptr);
			
			break;
		}
	}
	
	return 0;
}


int randomize(int *num, int SIZE)
{
    int i;
    for(i=0;i<SIZE;i++)
    {
        *num = (rand()%10)+1;
        num++;
    }
    return -1;
}
char uppercase(char *str)
{
    int c = 0;
    char ch;
    
    while (str[c] != '\0')
    {
        ch = str[c];
        if (ch >= 'a' && ch <= 'z'){
            str[c] = str[c] - 32;
    }
        c++;
}
    
    return printf("%s", str);
}

void warning(int count)
{
    #define RED(string)     "\x1b[31m" string "\x1b[0m"

    for(count = 0;count<1000;count++)
    {
        if(count!=99)
        {
            printf(""RED("WARNING! TIME SYSTEM MALFUNCTION!")"");
        }
        
    }
}

void TypeWriter(char *arr){
    int len = strlen(arr);
    int i;
    for(i = 0; i < len; i++) {
        putchar(arr[i]);
        usleep(30000);  /* sleep for 35 milliSeconds */
		fflush(stdout);
    }
}
