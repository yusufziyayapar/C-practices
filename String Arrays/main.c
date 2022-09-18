#include <stdio.h>
#include <string.h>

int main(){
 // string dizisi
 // games[][içerdeki her elemanın büyüklüğü]
char games[][15] = {"Valorant","CounterStrike","Lol"};

for (int i = 0; i < sizeof(games)/sizeof(games[0]); i++)
{
printf("%s\n", games[i]);
}
printf("\nDeğişiklikten sonra :\n\n");
strcpy(games[0],"Metin2");
// karakter dizilerinde bir değeri değiştirmek için strcpy kullanılır.

for (int i = 0; i < sizeof(games)/sizeof(games[0]); i++)
{
printf("%s\n", games[i]);
}


    return 0;
}