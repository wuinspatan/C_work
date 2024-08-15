#include <stdio.h>

int main() {
    
    int n ; 
    
    printf("Enter Num: ") ;
    scanf("%d", &n) ;
    
    for ( int i = 1; i <= n; i++) { //Loop i
        
        for ( int j = 1; j <= n; j++ ) { //Loop j
        
            //Left to right
            if ( n % 2 == 0 ) { 
                if ( j == i ) {
                    printf("1") ;
                } else {
                    printf("0") ;
                }
            }
            
            //Right to Left
            if ( n % 2 == 1 ) { 
                if ( j == n - i + 1) {
                    printf("1") ;
                } else {
                    printf("0") ;
                }
            }
            
        }//end for j
        
        printf("\n") ; //new line 
        
    }//end for i

    return 0;
    
}//end function