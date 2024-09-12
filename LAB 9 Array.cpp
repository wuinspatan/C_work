#include <stdio.h>

//find prime number function
int is_prime(int num) { 
    
    int j ;
    
    if ( num <= 1) {
        return 0 ;
    }
    
    if ( num <= 3 ) {
        return 1 ;
    }
    
    if ( num > 3 ) {
        for ( j = 2 ; j <= num ; j++ ) {
            if ( num % j == 0 ) {
                return 0 ;
            } else if ( j == num - 1) {
                return 1 ;
            }
        }
    }
}

// main function
int main() { 
    
    int n ;
    int i , j, y, s ;
    
    // Input N 
    printf( "ENTER N : " ) ;
    scanf( "%d", &n ) ;
    
    /// Input Array
    int array[ n ] ;
    for ( i = 0 ; i < n ; i++ ) {
        printf( "Enter Num[%d] : ", i ) ;
        scanf( "%d", &array[ i ] ) ;
    }
    
    /// Output print Index
    printf( "Index : " ) ;
    for ( y = 0 ; y < n ; y++ ) {
        printf( "%d ", y ) ;
    }//end for
    
    printf( "\n" ) ; //new line
    
    /// Output Array
    printf("Array : ") ;
    for ( s = 0 ; s < n ; s++ ) {
        if ( is_prime( array[ s ] ) ) {
            printf( "%d ",array[ s ] ) ;
        } else {
            printf( "# " ) ;
        }
    }//end for
    
    return 0 ;
}//end main function
