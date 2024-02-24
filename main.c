#include <stdio.h>
#include <stdlib.h>
#include <time.h>

char * generatePassword( int p_length ) {
    if ( p_length <= 5 ) {
        return "Passwort muss mindestens 5 Bustaben haben";
    }

    srand( time( 0L ) );

    char * password = malloc( sizeof( char ) * p_length );
    const char * charset = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ1234567890!?[]{}()!?[]{}()!?[]{}()!?[]{}()";
    
    for (int i = 0; i < p_length; i++) {
        int index = rand() % 93;
        password[i] = charset[index];
    }

    return password;
}

int main() {

    char * password = generatePassword( 12 );
    printf( "Passwort:%s\n", password );

    free( password );

    return 0;
}

