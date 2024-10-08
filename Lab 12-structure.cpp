#include <stdio.h>
#include <string.h>

struct Student
{
    char Name[10] ;
    char ID[10] ;
    float Point[5] ;

} typedef S ;

void grade(float P[5]) {
    int i ;

    for (i = 0; i < 5; i++ ) {

        if ( P[i] >= 80 ) {
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
    }
    printf("\n") ;
}

void Average( float Sc[5] ) {
    int i ;
    float sum = 0 ;
    for ( i = 0; i < 5; i++ ) {
        sum += Sc[i] ;
    }
    printf("Avaerage : %.2f", sum /= 5) ;
    printf("\n") ;

}

int main() {

    S ST[3] ;
    int i, j, k, d, x ;  

    // Input process

    for ( i = 0; i < 3; i++ ) {
        printf("Name Student %d : ", i + 1) ;
        scanf("%9s", ST[i].Name) ;
        printf("ID Student %d : ", i + 1) ;
        scanf("%9s", ST[i].ID) ;
        
        for (j = 0; j < 5; j++) {
            printf("Scores in Subject %d : ", j + 1) ;
            scanf("%f", &ST[i].Point[j]) ;
        }
        printf("\n") ;
    }

    // Output

    for ( k = 0; k < 3; k++ ) {
        printf("Student %d\n", k + 1) ;
        printf("Name : %s\n", ST[k].Name) ;
        printf("ID : %s\n", ST[k].ID) ;

        for ( d = 0; d < 5; d++ ) {
            printf("Score Student %d", k + 1) ;
            printf("%.1f ", ST[k].Point[d]) ;
            printf("\n") ;
        }
        printf("\n") ;
        grade(ST[k].Point) ;
        Average(ST[k].Point) ;
        printf("\n\n") ;
    }
    return 0 ;
}