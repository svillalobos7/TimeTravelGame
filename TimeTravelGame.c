                

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