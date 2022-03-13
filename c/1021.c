#include <stdio.h>
 
int main() {
    double valor, aux1;
    int notas, cem, cinquenta, vinte, dez, cinco, dois,
    um, m_cinq, m_vin, m_dez, m_cinc, m_um, aux2;
    int a,b,c,d,e,f,g,h,i,j;
    scanf("%lf",&valor);
    notas = valor;
    cem = notas / 100;
    notas = notas - (cem * 100);
    cinquenta = notas / 50;
    notas = notas - (cinquenta * 50);
    vinte = notas / 20;
    notas = notas - (vinte * 20);
    dez = notas / 10;
    notas = notas - (dez * 10);
    cinco = notas / 5;
    notas = notas - (cinco * 5);
    dois = notas / 2;
    notas = notas - (dois * 2);
    um = notas / 1;
    aux1=valor * 100;
    aux2=(int)aux1;
    a = aux2 % 100;
    m_cinq = a / 50;
    a = a - (m_cinq * 50);
    m_vin = a / 25;
    a = a - (m_vin * 25);
    m_dez = a / 10;
    a = a - (m_dez * 10);
    m_cinc = a / 5;
    a = a - (m_cinc * 5);
    m_um = a / 1;
    printf ("NOTAS:\n");
    printf ("%d nota(s) de R$ 100.00\n", cem);
    printf ("%d nota(s) de R$ 50.00\n", cinquenta);
    printf ("%d nota(s) de R$ 20.00\n", vinte);
    printf ("%d nota(s) de R$ 10.00\n", dez);
    printf ("%d nota(s) de R$ 5.00\n", cinco);
    printf ("%d nota(s) de R$ 2.00\n", dois);
    printf ("MOEDAS:\n");
    printf ("%d moeda(s) de R$ 1.00\n", um);
    printf ("%d moeda(s) de R$ 0.50\n", m_cinq);
    printf ("%d moeda(s) de R$ 0.25\n", m_vin);
    printf ("%d moeda(s) de R$ 0.10\n", m_dez);
    printf ("%d moeda(s) de R$ 0.05\n", m_cinc);
    printf ("%d moeda(s) de R$ 0.01\n", m_um);
    return 0;
}