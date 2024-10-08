#include <stdio.h>
#include <string.h>

struct Student // student data
{
    char Name[10] ;
    char ID[10] ;
    float Point[5] ;

} typedef S ; // name of struct "S"

void grade(float P[5]) { // grading function 
    int i ;

    for (i = 0; i < 5; i++ ) { // for loop i to checking the grade

        if ( P[i] >= 80 ) { // checking and show the answer
            printf("A ") ;
        } else if ( P[i] >= 75 ) {
            printf("B+ ") ;
        } else if ( P[i] >= 70 ) {
            printf("B ") ;
        } else if ( P[i] >= 65 ) {
            printf("C+ ") ;
        } else if ( P[i] >= 60 ) {
            printf("C ") ;
        } else if ( P[i] >= 55 ) {
            printf("D+ ") ;
        } else if ( P[i] >= 50 ) {
            printf("D ") ;
        } else {
            printf("F ") ;
        }
    }//end loop i

    printf("\n") ; //newline
    
}// end grading function

void Average( float Sc[5] ) { // find average of score function
    int i ;
    float sum = 0 ;
    for ( i = 0; i < 5; i++ ) { // for loop i to sum the score
        sum += Sc[i] ;
    }//end loop i

    printf("Avaerage : %.2f", sum /= 5) ; // show average score answer
    printf("\n") ; //newline

}//end function

int main() { // main function

    S ST[3] ; // set we are have 3 of student
    int i, j, k, d, x ; 

    // Input process

    for ( i = 0; i < 3; i++ ) { // for i for list and input student's data
        printf("Name Student %d : ", i + 1) ; // input name
        scanf("%9s", ST[i].Name) ;
        printf("ID Student %d : ", i + 1) ; // input id
        scanf("%9s", ST[i].ID) ;
        
        for (j = 0; j < 5; j++) { // for loop for input score subject
            printf("Scores in Subject %d : ", j + 1) ; // input score subject
            scanf("%f", &ST[i].Point[j]) ;
        }//end loop j
        printf("\n") ;
    }//end loop i

    // Output

    for ( k = 0; k < 3; k++ ) { // for loop k to show output list by list
        printf("Student %d\n", k + 1) ; // show number student
        printf("Name : %s\n", ST[k].Name) ; // show name
        printf("ID : %s\n", ST[k].ID) ; // show id

        for ( d = 0; d < 5; d++ ) { // for loop d to show score 
            printf("Score Student %d", k + 1) ; // student num
            printf("%.1f ", ST[k].Point[d]) ; // point subject by subject
            printf("\n") ; // newline
        }
        printf("\n") ;
        grade(ST[k].Point) ; // show grade
        Average(ST[k].Point) ; // show average score
        printf("\n\n") ; // double newline
    }

    return 0 ;

}//end main function 