/*
    เขียนโปรแกรมภาษาซีเพื่อรับข้อมูลพนักงานของบริษัทซอร์ฟแวร์ โดยรับข้อมูล รหัสประจำตัวพนักงาน , จำนวนชั่วโมงที่ทำงาน , รายได้ต่อชั่วโมง จากนั้นให้แสดงข้อมูลเลขประจำตัวพนักงาน พร้อมกับรายได้ทั้งหมดที่หนักงานจะได้รับทั้งหมด

    Test case:
        Input the Employees ID(Max. 10 chars): 
            0342
        Input the working hrs: 
            8
        Salary amount/hr: 
            15000
    Output:
        Expected Output:
        Employees ID = 0342
        Salary = U$ 120000.00

    Test case:
        Input the Employees ID(Max. 10 chars): 
            0000500349
        Input the working hrs: 
            11
        Salary amount/hr: 
            34000
    Output:
        Expected Output:
        Employees ID = 0000500349
        Salary = U$ 374000.00
*/

#include <stdio.h>
int main() {

    //--| YOUR CODE HERE

    /// Varialble :
    char employees_id[10] ;
    int workingHR ;
    int salaryHR ;
    float saraly ;

    printf( "Input:\n" ) ;

    // Input ID employees :
    printf( "|   Input the Employees ID(Max. 10 chars): \n|   |   " ) ;
    scanf( "%s", employees_id ) ;

    // Input Working time :
    printf( "|   Input the working hrs: \n|   |   " ) ;
    scanf( "%d", &workingHR ) ;

    // Input your Salary/hr :
    printf( "|   Salary amount/hr: \n|   |   " ) ;
    scanf( "%d", &salaryHR ) ;

    // Calculate Salary/month :
    saraly = salaryHR * workingHR ;

    // Output :
    printf( "Output:\n" ) ;
    printf( "|   Expected Output: \n" ) ;
    printf( "|   Employees ID = %s \n" , employees_id ) ;
    printf( "|   Salary = U$ %.2f \n", saraly ) ;
    printf( "\n" ) ;

    return 0 ;
    
}//end main function
