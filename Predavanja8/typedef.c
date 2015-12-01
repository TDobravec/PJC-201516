#include <stdio.h>

// Z rezervirano besedo typedef definiramo nov tip. 

// Osnovno pravilo pri uporabi rezervirane besede typedef se glasi: za uvedbo 
// novega tipa napisemo deklaracijo, kot bi jo napisali, ce bi zeleli deklarirati 
// spremenljivko tega tipa, pred deklaracijo pa napisemo typedef. S tem smo uvedli 
// nov tip, katerega ime je enako imenu, kot bi ga imela spremenljivka, ce bi 
// besedo typedef izpustili.

 typedef int stevilo; // stevilo postane sinonim za int
 stevilo a;           // spremenljivka tipa int

 // tabela znakov kot kazalec (string)
 typedef char * niz;   
 niz s1,s2;

 // tabele
 typedef char kratkaTabela[10], dolgaTabela[100];
 kratkaTabela kt;  // tabela znakov velikosti 10
 dolgaTabela  dt;  // tabela znakov velikosti 100  

 // strukture
 struct tocka {   // struktura 'tocka' z dvema koord.
   int x, y;
 };

 typedef struct tocka t; // nov tip (t)
 t A, B;                 // tocki a in b


// strukture (krajse)
 typedef struct kompleksno { // uvedba tipa cplx
   float re, im;
 } cplx;
 cplx w, z;  // kompleksni stevili w in z


int main(int argc, char **argv)
  a=5;  // a je tipa stevilo (int)

  kt[1]  = 13;
  dt[42] = 17;

  // w je struktura s polji x in y
  w.re = 5.3;
  w.im = 2e-1;

  A.x = 3;
  A.y = 1;

  return 0;
}

