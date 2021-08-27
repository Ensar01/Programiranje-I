## [**Zadatak 01**](01.cpp)

Kreirati dvodimenzionalni dinamički niz čiji su elementi objekti tipa fudbaler.

***Fudbaler je struktura čija su obilježja data u nastavku:***

```c++
struct fudbaler{
int ID;
char*ime_i_Prezime;
char* pozicija;//prihvati samo slova N, O i V (napad, vezni i odbrana);
int *broj_golova;
};
```

Omogućiti korisniku da unese dimenzije niza te omogućiti unos elemenata. Redovi 2D niza predstavljaju različite klubove, a kolone različite fudbalere (igrače). Radi jednostavnosti rješenja, predpostaviti da svaki klub ima isti broj fudbalera.Ovisno o unesenoj poziciji (N,O ili V) identificira se da li je dati fudbaler napadač,odbrambeni ili vezni igrač. U različitim klubovima mogu igrati različiti brojevi napadača, veznih igrača ili odbrambenih igrača.

***(Npr. klub 1 može imati 10 veznih, 3 napadača i 5 odbrambenih igrača, dok klub 2 može imati 12 veznih, 2 napadača i 6 odbrambenih igrača i sl.)***

Izračunati i ispisati prosječan broj golova po poziciji igrača za sve klubove. Zatim omogućiti korisniku izbor jednog tipa fudbalera (N,O ili V) i prema korisničkom izboru pronaći klub koji ima najbolji prosjek postignutih zgoditaka tog tipa igraca (npr. ako se unese slovo V za klub 1 računa se prosjek za 10 veznih igrača dok se za klub 2 računa prosjek 12 veznih igrača i ti prosjeci se porede).


**(U ovom zadatku je zabranjeno indexirati elemente niza uglastim zagradama. Obavezno koristiti aritmetiku pokazivača. Obavezno voditi računa o dealociranju dinamički alocirane memorije.)**


## [**Zadatak 02**](02.cpp)

Kreirati dinamički dvodimenzionalni niz čiji su elementi objekti tipa fudbaler (fudbaler je struktura čija su obilježja data u nastavku). Omogućiti korisniku da unese dimenzije niza.

```c++
struct fudbaler
{
    int* godRodjenja;
    int* brojIgraca;
    int* golovi;
};
```

Redovi dvodimenzionalnog niza predstavljaju različite timove, a kolone predstavljaju igrače u tim timovima.

Omogućiti korisniku unos svih podataka za sve igrače, te napraviti (i testirati u main funkciji) funkciju koja će pronaći tim sa najvećim prosjekom. Zatim napraviti (i testirati u main funkciji) funkciju koja će pronaći igrača sa najviše golova u timu sa najlošijim prosjekom golova. 

***Radi lakšeg testiranja programa obavezno u funkciji unosa podataka omogućiti da se podaci generišu kao sljedeće:***

```c++
godRodjenja: 1980 + rand() % ((2000 + 1) - 1980) // Generiše brojeve u rangu 1980 - 2000
brojIgraca: rand() % 30 + 1
golovi: rand() % 5
```

**(U ovom zadatku je zabranjeno indexirati elemente niza uglastim zagradama. Obavezno koristiti aritmetiku pokazivača.)**

## [**Zadatak 03**](03.cpp)

Kreirati dinamički dvodimenzionalni niz čiji su elementi objekti tipa vozilo (vozilo je struktura čija su obilježja data u nastavku). Omogućiti korisniku da unese dimenzije niza.

```c++
struct vozilo
{
    char *markaVozila;
    char *brojSasije;
    char *tipVozila; //dozvoliti unos samo vrijednosti "A", "B", ili "C"
    int *kubnihCM;
};
```
Redovi dvodimenzionalnog niza predstavljaju različite firme a u kolone različita vozila u tim firmama (radi jednostavnosti rješenja podrazumijevati da svaka firma ima isti broj vozila). **Omogućiti korisniku unos svih podataka za sva vozila.**

Napisati i testirati funkciju koja će pronaći (firmu) koja ima največu prosječnu kubikazu vozila (prosjek vrijednosti kubnihCM).

Zatim napisati i testirati funkciju koja će pronaći i ispisati porosječnu kubikažu vozila (prosjek vrijednosti kubnihCM) svih vozila tipova "A" te posebno svih vozila tipa "B" u cijeloj matrici

***(Pošto se trazi u istoj funkciji, vodite računa o optimizaciji petlji jer to utiče na broj bodova).***

**(U ovom zadatku je zabranjeno indexirati elemente niza uglastim zagradama. Obavezno koristiti aritmetiku pokazivača.)**

## [**Zadatak 04**](04.cpp)

Kreirati dinamički dvodimenzionalni niz čiji su elementi objekti tipa student (student je struktura čija su obilježja data u nastavku). Omogućiti korisniku da unese dimenzije niza.

```c++
struct student
{
    char *ID;
    char *imePrezime;
    float *prosjek;
};
```

Kompletan 2D niz predstavlja univerzitet. Redovi dvodimenzionalnog niza predstavljaju različite fakultete,a kolone studente (radi jednostavnosti rješenja podrazumijevati da svaki fakultet ima isti broj studenata). Omogućiti korisniku unos svih podataka za sve studente, te napraviti funkciju koja će pronaći fakultet sa najvećim prosjekom te ispisati koji je to redni broj fakulteta (index reda sa najvećim prosjekom). Zatim pronaći i ispisati ID studenta koji ima najveći prosjek na cijelom univerzitetu.

**(U ovom zadatku je zabranjeno indexirati elemente niza uglastim zagradama. Obavezno koristiti aritmetiku pokazivača. Obavezno voditi računa o dealociranju dinamički alocirane memorije.)**


## [**Zadatak 05**](05.cpp)

Kreirati dinamički dvodimenzionalni niz čiji su elementi objekti tipa uposlenik (uposlenik je struktura čija su obilježja data). Omogućiti korisniku da unese dimenzije niza.

```c++
struct uposlenik
{
    char *ID;
    char *imePrezime;
    float *plata;
};
```

Redovi dvodimenzionalnog niza predstavljaju različite odjele firme u kojima rade različiti radnici (radi jednostavnosti rješenja podrazumijevati da svaki odjel ima isti broj radnika).

Omogućiti korisniku unos svih podataka za sve radnike, te napraviti funkciju koja će naći najveći prosjek plate po odjelima firme te ispisati koji je to redni broj odjela (indeks reda sa najvećim prosjekom) i koji je najveći prosjek plate.

**(U ovom zadatku je zabranjeno indexirati elemente niza uglastim zagradama. Obavezno koristiti aritmetiku pokazivača. Obavezno voditi računa o dealociranju dinamički alocirane memorije.)**


## [**Zadatak 06**](06.cpp)

Kreirati dinamički dvodimenzionalni niz čiji su elementi objekti tipa vozilo (vozilo je struktura čija su obilježja data u nastavku). Omogućiti korisniku da unese dimenzije niza.

```c++
struct vozilo
{
    char *markaVozila;
    char *nazivVozila;
    char *tipVozila; // omogućiti unos samo 'A', 'B','C'
    float *potrosnja_goriva_po_km;
};
```

Redovi matrice predstavljaju firme, kolone automobile. Izračunati u kojoj je firmi najveća potrošnja goriva po km.

Naći i ispisati prosjek potrošnje goriva po km u vozilima tipa C u cijeloj matrici.

**(U ovom zadatku je zabranjeno indexirati elemente niza uglastim zagradama. Obavezno koristiti aritmetiku pokazivača.)**

## [**Zadatak 07**](07.cpp)

Kreirati dinamički dvodimenzionalni niz čiji su elementi objekti tipa košarkaš (košarkaš je struktura čija su obilježja data u nastavku). Omogućiti korisniku da unese dimenzije niza.
```c++
struct kosarkas
{
    char *ID;
    char *imePrezime;
    int *postignutiKosevi;
};
```

Redovi dvodimenzionalnog niza predstavljaju različite košarkaše a kolone različite klubove. Omogućiti korisniku unos svih podataka za sve košarkaše, te napraviti funkciju koja će pronaći najuspješniji klub (klub u kojem je postignut najveći broj koševa). Također je potrebno pronači najuspješnijeg košarkaša u tom timu (ne mora biti najuspješniji u ligi) i najlošijeg košarkaša u kompletnoj ligi te izračunati razliku u broju postignutih koševa ta dva košarkaša.

**(Funkcija treba vratiti pokazivač na memorijsku lokaciju u kojoj je upisana ta razlika.)**
