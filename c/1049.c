#include <string.h>
 
int main() {
    char vertebrado[] = "vertebrado", invertebrado[] = "invertebrado";
    char ave[] = "ave", mamifero[] = "mamifero", inseto[] = "inseto", anelideo[] = "anelideo";
    char carnivoro[] = "carnivoro", onivoro[] = "onivoro", herbivoro[] = "herbivoro", hematofago[] = "hematofago";
    char aguia[] = "aguia", pomba[] = "pomba", homem[] = "homem", vaca[] = "vaca", pulga[] = "pulga";
    char lagarta[] = "lagarta", sanguessuga[] = "sanguessuga", minhoca[] = "minhoca";
    char a[22], b[22], c[22];
    scanf("%s", a);
    if(0 == strcmp(a, vertebrado)){
      scanf("%s",b);
      if(0 == strcmp(b, ave)){
        scanf("%s",c);
        if(0 == strcmp(c, carnivoro))
          printf("%s\n", aguia);
        else if(0 == strcmp(c, onivoro))
          printf("%s\n", pomba);
      }
      if(0 == strcmp(b, mamifero)){
        scanf("%s", c);
        if(0 == strcmp(c, onivoro))
          printf("%s\n", homem);
        else if(0 == strcmp(c, herbivoro))
          printf("%s\n", vaca);
      }
    }
    else if(0 == strcmp(a, invertebrado)) {
      scanf("%s",b);
      if(0 == strcmp(b, inseto)){
        scanf("%s",c);
        if(0 == strcmp(c, hematofago))
          printf("%s\n",pulga);
        else if(0 == strcmp(c, herbivoro))
          printf("%s\n", lagarta);
      }
      if(0 == strcmp(b, anelideo)){
        scanf("%s",c);
        if(0 == strcmp(c, hematofago))
          printf("%s\n", sanguessuga);
        else if(0 == strcmp(c, onivoro))
          printf("%s\n", minhoca);
      }
    }
    return 0;
}