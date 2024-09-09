#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {

    //--| YOUR CODE HERE
    int ans ;
    int win = 0 ;
    
    // Play or not
    printf( "Do you want to play game (1=play,-1=exit)\n    : " ) ;
    scanf( "%d", &ans ) ;

    while ( ans == 1 || -1 ) {

        // Do not play (-1)
        if ( ans == -1 ) {
            printf("\nGood Bye See you naext time!!\n\n") ;
            break ;

        } else if ( ans == 1 ) { 

            // Play 
            while (ans == 1) {

                /// Start game ///

                /* Random Num */
                srand( time( NULL ) ) ;
                int random = rand() % 100 + 1 ;

                /* กำหนดตัวแปร */
                int blood = 100 ;
                int guess_num ;
                int maxnum = 100 ;
                int minnum = 1 ;

                // Let's start guess number (player input number)
                printf( "Your Score start 100 !\n" ) ;
                printf( ">>> Guess the winning number (%d - %d) : ", minnum, maxnum ) ;
                scanf( "%d", &guess_num ) ;

                // Repeat loop until guessed correctly or score reaches 0
                do {

                    // If score == 0 game done 
                    if ( blood == 0 ) {
                        printf( "GM : Sad you fail\n" ) ;
                        printf("Your score=0\n") ;
                        break ;
                    }

                    // If player guess numner less than random num
                    if ( guess_num < random ) {
                        
                        blood -= 10 ;
                        printf( "Sorry, the winning number is \033[4mHIGHER\033[m than %d. (Score=%d)\n\n", guess_num, blood ) ;
                        printf( ">>> Guess the winning number (%d - %d) : ", minnum = guess_num + 1, maxnum ) ;
                        scanf( "%d", &guess_num ) ;
                    }

                    // If player guess numner less than random num
                    if ( guess_num > random ) {

                        blood -= 10 ;
                        printf( "Sorry, the winning number is \033[4mLOWER\033[0m than %d. (Score=%d)\n\n", guess_num, blood ) ;
                        printf( ">>> Guess the winning number (%d - %d) : ", minnum, maxnum = guess_num - 1 ) ;
                        scanf( "%d", &guess_num ) ;
                    }

                } while ( guess_num != random ) ; 

                // If player correct the guess number 
                if ( guess_num == random ) { 
                    printf("That is correct! The winning number is %d.\n", random ) ; //Congratuation
                    printf("Score this game: %d.\n\n", blood ) ; // Total Score left
                    win += 1 ; // Count Total Win
                }

                // รับค่า Play or not 
                printf( "You Win : %d\n", win) ;
                printf( "Do you want to play a new game (1=play,-1=exit)\n    : " ) ;
                scanf( "%d", &ans ) ;

                // Do not play (-1)
                if ( ans == -1 ) {
                    printf("\n    Good Bye See you naext time!!\n\n") ;
                    break; /// run out of loop
                }
                // go loop again with answer 1, -1
            }//end loop

        // if ans is not 1 or -1 (Let's ask again)
        } else {
            printf( "Do you want to play a new game (\033[4mInput only!! 1=play,-1=exit\033[0m)\n    : " ) ;
            scanf( "%d", &ans ) ;
        }
        // go loop again with answer 1, -1


    }//end loop

    return 0 ;

}//end main function