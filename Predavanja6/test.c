main() {
    // izpis "velikosti" podatkovnega tipa int 
    // (pricakovana vrednost: 4 bajti == 32 bitov)
    printf("%d\n", sizeof(int));
    
    // zvoncek
    printf("%c", 7);
    
    // enacenje stevilk in znakov
    printf("%c", 65);  // izpise se crka A
    printf("%d", 'A'); // izpise se stevilak 65

    
    // to ne gre ... ce zacnemo z 0, gre za stevilo v osmiskem sistemu
    // int a = 09;

    // pri uporabi tabele moramo biti previdni, da ne prekoracimo 
    // rezerviranega prostora; 
    int a[50];
    a[50] = 5;  // ... NAPAKA - pisemo po pomnilniku, ki ni nas
    
    printf("%d\n", a[0]);
}