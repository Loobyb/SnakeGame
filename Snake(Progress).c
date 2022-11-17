#include<stdlib.h>
#include<string.h>
#include<stdio.h>
#include<unistd.h>
#include<curses.h>


int a,b, fruit1, fruit2, randx, randy;
int height, width;
int score;
int head;
int lose = 0;
//Set Fruit to be within boundaries
void fruit(){

    //Stores height and width for fruit
    a = height / 5;
    b = width / 5;
label1:

    fruit1 = rand() % 20;
    if(randx == 0){
        goto label1;
    }
   

label2:

    fruit2 = rand() % 20; 
    if(randy == 0){
        goto label2;

    }
    
    score = 0;

   
}

void PlaceFruit(){
     if(fruit1 == head && fruit2 == head ){
        int place1 = 0;
        




    }
}

int main(int ac, char *av[]){
     initscr();              // initialize the curses library
    clear();                // clear the screen
    curs_set(0);            // hide the cursor
    noecho();               // do not echo the user input to the screen
    keypad(stdscr,TRUE);    // enables working with the arrow keys
    move(0,0);
    addstr("Press any key...");
    while(1){
        int ch=getch();
        char buf[100];
        move(0,0);

        switch(ch) {
            case KEY_UP:
                addstr("You pressed the UP arrow                         ");
                break;
            case KEY_DOWN:
                addstr("You pressed the DOWN arrow                         ");
                break;
            case KEY_LEFT:
                addstr("You pressed the LEFT arrow                         ");
                break;
            case KEY_RIGHT:
                addstr("You pressed the RIGHT arrow                         ");
                break;
            case 10:
            case KEY_ENTER:
                addstr("You pressed the ENTER key                         ");
                break;
            case 'x':       // pressing 'x' or 'X' will exit the program
            case 'X':
                endwin();   // close curses
                return 0;
            default:
                printf(buf,"You pressed a \"%c\" key, ASCII code %d...", (char)ch, ch);
                addstr(buf);
                break;
        }
        refresh();
    }
   

}




