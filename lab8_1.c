#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <termios.h>
#include <unistd.h>
#include <fcntl.h>

int mygetch()
{
    struct termios oldt, newt;
    int c;
    tcgetattr( STDIN_FILENO, &oldt );
    newt = oldt;
    newt.c_lflag &= ~( ICANON | ECHO );
    tcsetattr( STDIN_FILENO, TCSANOW, &newt );
    c = getchar();
    tcsetattr( STDIN_FILENO, TCSANOW, &oldt );
    return c;
}

int is_functional(){
    int flags = fcntl(STDIN_FILENO, F_GETFL, 0);
    fcntl(STDIN_FILENO, F_SETFL, flags | O_NONBLOCK);
    char c;
    int nofchars = 0;
    //read all pending func-key's codes not to handle them in main loop
    do {
        c = getchar();
        nofchars++;
    } while (c!=EOF);

    fcntl(STDIN_FILENO, F_SETFL, flags);
    return nofchars!=1;
}

int main()
{
    int k = 0, d = 0;;
    char c = 0;
    while(1)
    {
        c = mygetch();
        if(c == 0x23)
        {
            if(!is_functional())
                break;
            continue;
        }
        else
        {
            printf("%c", c);

        }
    }
    if (k > 1 || d > 1)
        printf("Число не является верной записью вещественного числа\n");
        else
        printf("Число является верной записью вещественного чиcла\n");
        return 0;
}
