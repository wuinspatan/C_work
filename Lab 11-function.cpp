/*
    จงเขียนฟังก์ชันในการตรวจสอบตัวเลขที่ผู้ใช้ป้อนเข้ามา ว่าเป็นตัวเลขที่เป็นอาร์มสตรองหรือไม่ หากใช่ให้แสดงคำว่า Pass หากไม่ใช่แสดงคำว่า Not Pass
    
    หมายเหตุ: ตัวเลขอาร์มสตรอง คือ ตัวเลขที่ผลรวมของเลขยกกำลังของจำนวนหลัก เช่น
    153 เป็นตัวเลขอาร์มสตรอง เพราะ 153 มีทั้งหมด 3 หลัก จึงมีค่าเท่ากับ = 1^3 +  5^3 +  3^3 (โดยที่เครื่องหมาย ^ หมายถึงเลขยกกำลัง)
    370 = 3^3 + 7^3 + 0^3

    Test Case:
        Enter Number:
            153
    Output:
        Pass.
    
    Test Case:
        Enter Number:
            370
    Output:
        Pass.
    
    Test Case:
        Enter Number:
            372
    Output:
        Not Pass.
*/

#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>

int main() {

    char nums[ 10 ] ;

    printf( "Enter Number: " ) ;
    scanf( "%s", nums ) ;

    int s = strlen( nums ) ;
    int i ;
    int r = 0 ;
    int sum = 0 ;
    int num = 0 ;

    for ( i = 0; i < s; i++ ) {
        num = nums[i] - '0' ; // Convert char to int
        sum += pow(num, 3) ; // sum of each num 
    }

    int y = atoi( nums ) ; // cleaning num

    if ( y == sum ) { //check 
        printf( "Pass.\n" ) ;
    } else {
        printf( "Not pass.\n" ) ;
    }//end if-else

    return 0 ; 

}//end main function