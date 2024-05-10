#include <stdio.h>

char lower (char c){
    if( c >= 'A' && c <= 'Z' ) return c - 'A' + 'a';

    return c;
}

int main( int argc, char* argv[] )
{
    if( argc != 2 ){
        printf("error");
    }
    else{
        for( ; *argv[1] != '\0'; argv[1]++){
            switch(lower(*argv[1])){
                case 'a':
                    printf( " \'A\' \n" );
                    break;
                case 'e':
                    printf( " \'E\' \n" );
                    break;
                case 'i':
                    printf( " \'I\' \n" );
                    break;
                case 'o':
                    printf( " \'O\' \n" );
                    break;
                case 'u':
                    printf( " \'U\' \n" );
                    break;
                default:
                    printf( "%c is not a vowel.\n", *argv[1]);
            }
        }
    }

    return 0;
}
