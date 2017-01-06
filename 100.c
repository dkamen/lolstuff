#include <stdio.h>

/*
 * Count from 1 to 100. 
 * Constraints:
 * -Less than 100 statements
 * -No references to 100
 * -No loops
 * -No goto
 * -Portable code (no reliance on undefined behavior)
 * -No terribly obvious references to counting from 1 to 100
 * -Return exit status OK
 */

int lol(int arg)
{
    if (10-(arg % 17) % 51) {
        printf("%d%d\n",10-(arg % 17),0);

        return
            ((arg % 17) > 0?
             printf("%d%d\n", 10-(arg % 17),6+
                    printf("%d%d\n", 10-(arg % 17),5+
                           printf("%d%d\n", 10-(arg % 17),4+
                                  printf("%d%d\n", 10-(arg % 17),3+
                                         printf("%d%d\n", 10-(arg % 17),2+
                                                printf("%d%d\n", 10-(arg % 17),1+
                                                        printf("%d%d\n", 10-(arg % 17),0+
                                                                printf("%d%d\n", 10-(arg % 17),(-1)+
                                                                        printf("%d%d\n",10-(arg % 17),1
                                                                              ))))))))):
             0);
    }
    else {
        printf("%d\n", 0);

        return
            printf("%d\n",7+
                   printf("%d\n", 6+
                          printf("%d\n", 5+
                                 printf("%d\n", 4+
                                        printf("%d\n", 3+
                                               printf("%d\n", 2+
                                                       printf("%d\n", 1+
                                                               printf("%d\n", 0+
                                                                       printf("%d\n", (-1)+
                                                                               printf("%d\n", 1
                                                                                     ))))))))));
    }
}


int main() {
    return -lol(27)+lol(9)-lol('*')+lol(24)-lol(6)+lol('9')-lol(4)+lol(3)-lol(2)+lol(1)-lol(170);
}
