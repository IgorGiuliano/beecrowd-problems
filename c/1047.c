#include <stdio.h>
 
int main() {
    int h_i,h_f,m_i,m_f,t_h,t_m;
    scanf("%d %d %d %d",&h_i,&m_i,&h_f,&m_f);
    t_h = h_f - h_i;
    if(t_h<0) {
        t_h= 24 + (h_f-h_i);
    }
    t_m = m_f - m_i;
    if(h_i==h_f&&m_f<m_i) {
        t_h= 24 + (h_f-h_i);
        t_m = 60 + (m_f-m_i);
        t_h--;
    } else  if(t_m<0) {
        t_m = 60 + (m_f-m_i);
        t_h--;
    }
    if(h_i==h_f&&m_i==m_f) {
        printf("O JOGO DUROU 24 HORA(S) E 0 MINUTO(S)\n");
    } else {
        printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n",t_h,t_m);
    }
    return 0;
}