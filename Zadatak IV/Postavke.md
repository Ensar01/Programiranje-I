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
