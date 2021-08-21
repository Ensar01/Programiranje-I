## [**Zadatak 01**](01.cpp)
 
 Napisati program koji simulira bacanje 3 kockice (jedna kockica ima 6 strana i na tim stranama su brojevi 1 - 6). Simuliranje bacanja svake kockice ostvariti funkcijom rand() % 6 + 1. Simulirati konstantno bacanje sve tri kockice dok se u dva uzastopna bacanja ne desi da se dobiju isti brojevi na sve tri kockice (npr. u šestom bacanju se dobiju brojevi 2, 2, 2, a u sedmom 4, 4, 4 na sve tri kockice).

**Ispisati koliko je ukupno bilo bacanja dok se nije ispunio navedeni uslov.**

**Nije potrebno tražiti bilo kakav unos od korisnika.**

 ## [**Zadatak 02**](02.cpp)
 
 Napisati program koji će omogućiti korisniku unos broja n (uz uslov 10 <= n <= 1000). Zatim simulirati unos n slučajnih vrijednosti. Simuliranje unosa ostvariti funkcijom rand() % 1000 + 1. Izračunati statističke podatke u kojem procentu se od n generisanih slučajnih vrijednosti pojavljuje prost broj.

***Npr. Ako je generisano 10 brojeva (n = 10): 5,7,4,13,17,20,25,23,30,45, u ovom uzorku od 10 brojeva postoji 5 prostih brojeva pa je procenat prostih brojeva u ovom slučaju 50%.***

**(Napomena: Po želji kreirati dodatne funkcije da se olakša rješavanje zadatka.)**

 ## [**Zadatak 03**](03.cpp)
 
 Napisati program koji ce omoguciti korisniku unos broj n (uz uslov 10<=n<=1000). Zatim simulirati unos n slucajnih vrijednosti. Simuliranje unosa ostvariti funkcijom rand()%1000+1. Izracunati statisticke podatke u kojem procentu se od n generisanih slucajnih vrijednosti pojavljuje savrsen broj. 
 
**Za neki broj se kaze da je savrsen ukoliko je jednak sumi svih svojih djelilaca (ne ukljucujUci njega samog).**

*Na primjer, 28 je savrsen broj: njegovi djelioci su 1, 2, 4, 7 i 14, a 1 + 2 + 4 + 7 + 14 = 28. Jedini savrseni brojevi u opsegu od 1 do 100 su brojevi 6 i 28.*

## [**Zadatak 04**](04.cpp)

Napisati program koji omogućava unos pozitivnog broja n te pronalazi njegove parne cifre i formira novi broj u kojem su parne cifre zamijenjene cifrom '5'.

**Dodatno program treba ispisati razliku unesenog i broja koji se dobije nakon zamjene.**

## [**Zadatak 05**](05.cpp)

Svaki paran broj se može prikazati kao suma dva prosta broja (tkz. Goldbachovo pravilo). Napisati program koji će najprije učitati dva prirodna broja n1 i n2 (n2 > n1).

Zatim prikazati sve parne brojeve u intervalu od n1 do n2 kao sumu dva prosta broja.

**(U glavnom programu samo unijeti navedena dva prirodna broja i pozvati funkciju koja obavlja zadani posao.)**

## [**Zadatak 06**](06.cpp)

Napisati program koji će omogućiti unos prirodnog broja A (A > 100000), te kreirati i ispisati broj B koji će se sastojati od cifara broja A u obrnutom redoslijedu gdje je svaka parna cifra uklonjena.

***Npr. ako se unese 45362792, funkcija treba vratiti 9735 i ispisati razliku brojeva A i B***

**(Obavezno koristiti bar jednu korisnički definisanu funkciju)**

## [**Zadatak 07**](07.cpp)

Napisati program koji omogućava korisniku unos integer vrijednosti veće od 100. Napisati funckiju koja će provjeriti da li je uneseni broj u isto vrijeme i prost i "palindrom", odnosno da li je isti broj i kada se obrnnu sve cifre. 

***Po potrebi koristiti dodatne funkcije. ***

**Npr. brojevi 383, 727, 757, 787, 797, 919, 929 su u isto vrijeme i prosti brojevi i "palindromi".**


## [**Zadatak 08**](08.cpp)

Omogućiti unos dva prirodna broja A i B (A>100000, B>50000). Napisati program koji će kreirati i ispisati broj C koji će se sastojati od cifara broja A u obrnutom redoslijedu ali bez cifara koje se pojavljuju u broju B. 

**Obavezno koristiti bar jednu funkciju. Ispsati razliku brojeva A i C.**

## [**Zadatak 09**](09.cpp)

Napisati program koji će omogućiti korisniku unos broja n ( 10 <= n <= 1000). Zatim simulirati n bacanja kockice (kockica ima 6 strana i na tim stranicama su brojevi 1-6). Simuliranje bacanja svake kockice ostvariti funkcijom rand() % 6 + 1. Izračunati statičke podatke u kojem procentu ukupnog bacanja se dobiva svaki od mogućih brojeva 1-6. 

**Obavezno koristiti switch statement za zbrajanje rezultata bacanja kockice.**

***Napomena: Po želji kreirati dodatne funkcije da se olakša rješavanje zadataka.***

## [**Zadatak 10**](10.cpp)

Napisati program koji omogućava korisniku unos prirodnog broja N (50 < N < 5000000). Zatim uneseni broj proslijediti funkciji kao parametar po referenci. U funkciji je od unesenog broja potrebno kreirati novi broj teko što će se poredak cifri unesenog broja obrnuti. Prilikom obrtanja potrebno je odbaciti neparne cifre.

***Npr. Za uneseni broj 1234567 obrnuti broj bez neparnih cifara je 642.***

## [**Zadatak 11**](11.cpp)

Napisati program koji na osnovu unesenog cijelog broja N pronalazi i ispisuje srednju cifru ako broj N ima neparan broj cifara, odnosno aritmeticku sredinu (tip float) srednje dvije cifre ako broj N ima parni broj cifara, a zatim pronaci najmanji broj tipa int sa kojim se srednja cifra ili aritmeticka sredina srednjih cifri treba pomnoziti da bi se dobio broj koji je veci od inicijalnog zadanog broja.

Npr. za broj 75631 srednja cifra je 6, najmanja integer vrijednost sa kojom treba pomnoziti broj 6 da bi se dobio broj veci od 75631 je 12606 jer je 12606 * 6 = 75636, 75636 > 75631 ili za broj 984354 aritmeticka sredina srednje dvije cifre je 3.5, najmanja integer vrijednost sa kojom treba pomnoziti broj 3.5 da bi se dobio broj veci od 984354 je 281245 jer je 281245 * 3.5 = 984357.5, 984357.5 > 984354

***(Napomena: Potrebno je voditi računa o tipovima podataka.)***

## [**Zadatak 12**](12.cpp)

Napisati program koji će uzastopno učitavati cijele brojeve m i n (1 <= m <= 50, 1 <= n <= 500) i pronalaziti srednju cifru njihovog proizvoda/umnoška. Program treba ispisivati srednju cifru samo ako je veća od prethodno izračunate srednje cifre. Prva pronađena srednja cifra se svakako ispisuje. Program se forsirano prekida ako korisnik unese n = 0. Program se prirodno završava ako je pronađena srednja cifra 9. 

***Primjer izvršenja:**
```c++
unesi m i n: 10, 15
srednja cifra/sredina proizvoda brojeva 10 i 15 (10 * 15 = 150) je: 5
unesi m i n: 10, 42
srednja cifra/sredina proizvoda brojeva 10 i 42 (10 * 42 = 420) je: ne ispisuje se
unesi m i n: 12, 31
srednja cifra/sredina proizvoda brojeva 12 i 31 (12 * 31 = 372) je: 7
unesi m i n: 149, 20
srednja cifra/sredina proizvoda brojeva 149 i 20 (149 * 20 = 2980) je: 8.5
unesi m i n: 150, 0
forsirani prekid...
```

## [**Zadatak 13**](13.cpp)

Napišite program, u kojem ćete omogućiti unos dva prirodna broja manja od 500 koji predstavljaju granice intervala, te pronaći i ispisati kojom znamenkom završava najveći prosti broj u zadanom intervalu ne uključujući granične vrijednosti.

## [**Zadatak 14**](14.cpp)

Napisati program koji će omogućiti korisniku unos dva minimalno trocifrena prirodna broja m i n (n > m, m > 100, n < 500). Zatim napraviti funkciju koja će vratiti aritmetičku sredinu svih srednjih cifara svih brojeva u rangu od m do n.

***Također ta funkcija treba ispisati najveću srednju cifru navedenog ranga.***

## [**Zadatak 15**](15.cpp)

Napisati program koji izračunava ukupan zbir faktorijela od svih prostih brojeva koji su članovi prvih 100 elemenata Fibonacci niza (tzv. fibonacci prime).

***Napomena: Pazljivo pročitajte zadatak. Obavezno voditi računa da se uradi tačno ono što je trazeno u zadatku i da zadatak bude logicki ispravan.***

**Obavezno koristiti bar jednu funkciju kojoj ćete proslijediti parametar po referenci.**

## [**Zadatak 16**](16.cpp)
 
 Napisati program koji korisniku omogućava unos realnog broja x, cijelog broja m i odabir funkcije za proračun datog izraza. Korisnik bira funkciju unosom sljedećih karaktera 's' (sin), 'c' (cos), 'q' (sqrt), 'p' (pow). U slučaju da korisnik unese karakter koji ne odgovara niti jednoj od predefinisanih vrijednosti ispisati odgovarajuću poruku i ponoviti odabir.Za funkciju pow() drugi parametar treba biti 3.

***Za odabranu funkciju izraz je:***

![](https://user-images.githubusercontent.com/72500944/130335682-a8c83aba-8789-45f2-a58f-5cb1efba6faa.png)

**Broj faktora u izrazu odgovara unesenom broju m. U rješenju obavezno iskoristiti switch iskaz.**


