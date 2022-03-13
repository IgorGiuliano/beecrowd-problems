#include <stdio.h>
 
int main() {
    
    float nota_um, nota_dois, nota_tres, nota_quatro, nota_exame, media, media_a;
    scanf("%f %f %f %f",&nota_um,&nota_dois,&nota_tres,&nota_quatro);
    media = ((nota_um * 0.2) + (nota_dois * 0.3) + (nota_tres * 0.4) + (nota_quatro * 0.1));
    if(media >= 7) {
        printf("Media: %.1f\n",media);
        printf("Aluno aprovado.\n");
    } else if((media >= 5) && (media <= 6.9)) {
        scanf("%f.1",&nota_exame);
        media_a = ((media+nota_exame)/2);
        if(media_a>=5) {
            printf("Media: %.1f\n",media);
            printf("Aluno em exame.\n");      
            printf("Nota do exame: %.1f\n",nota_exame);
            printf("Aluno aprovado.\n");
            printf("Media final: %.1f\n",media_a);
        }else {
            printf("Media: %.1f\n",media);
            printf("Aluno em exame.\n");      
            printf("Nota do exame: %.1f\n",nota_exame);
            printf("Aluno reprovado.\n");
            printf("Media final: %.1f\n",media_a);
        }
    }else {
        printf("Media: %.1f\n",media);
        printf("Aluno reprovado.\n");
    }
    return 0;
}