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
