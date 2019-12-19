#include <stdio.h>
#include <stdlib.h>

void main() {

    // Variables
    char name[30], grade;
    int marks[20], n, i, j, sum, mean;

    // Establish a buffer area
    FILE * my_file;

    my_file = fopen( "students.txt", "w" );

    // Check if file exists.
    if( my_file == NULL ) {
        printf( "\nCan't open specified file\n" );
        exit(0);
    }

    // Prompt the user to enter the number of students.
    printf( "\nEnter number of students\n" );
    scanf( "%d", &n );

    // Start of loop for students
    for ( i = 0; i < n; i++ ) {
        
        // Prompt user to enter name for each student
        printf( "\n\nEnter name of student\n" );
        scanf( "%s", &name[i] );

        fprintf( my_file, "The student is called %s\n", &name[i] );
        fprintf( my_file, "%s scored as follows:\n", &name[i] );

        // Loop and capture marks for 7 units.
        for ( j = 0; j < 7; j++ ) {

            // Prompt user to enter marks for each unit.
            printf( "Enter marks for unit %d\n", j+1 );
            scanf( "%d", &marks[j] );

            // Grade each unit
            if ( marks[j] >= 80 ) {
                fprintf( my_file, " Grade A for unit %d\n", j+1 );
            } else if ( marks[j] >= 70 && marks[j] < 80 ) {
                fprintf( my_file, " Grade B for unit %d\n", j+1 );
            } else if ( marks[j] >= 60 && marks[j] < 70 ) {
                fprintf( my_file, " Grade C for unit %d\n", j+1 );
            } else if ( marks[j] >= 50 && marks[j] < 60 ) {
                fprintf( my_file, " Grade D for unit %d\n", j+1 );
            } else if ( marks[j] >= 40 && marks[j] < 50 ) {
                fprintf( my_file, " Grade E for unit %d\n", j+1 );
            } else if ( marks[j] < 40 ) {
                fprintf( my_file, " Grade F for unit %d\n", j+1 );
            }

            // Get the sum of all units
            sum += marks[j];
        }

        mean = sum / 7;
        
        // Grade total marks
        if ( mean >= 80 ) {
            fprintf( my_file, "\nThe average grade for %s is A\n", &name[i] );
        } else if ( mean >= 70 && mean < 80 ) {
            fprintf( my_file, "\nThe average grade for %s is B\n", &name[i] );
        } else if ( mean >= 60 && mean < 70 ) {
            fprintf( my_file, "\nThe average grade for %s is C\n", &name[i] );
        } else if ( mean >= 50 && mean < 60 ) {
            fprintf( my_file, "\nThe average grade for %s is D\n", &name[i] );
        } else if ( mean >= 40 && mean < 50 ) {
            fprintf( my_file, "\nThe average grade for %s is E\n", &name[i] );
        } else if ( mean < 40 ) {
            fprintf( my_file, "\nThe average grade for %s is F\n", &name[i] );
        }

        fprintf( my_file, "\n\n" );
    }
    
    fclose( my_file );

}