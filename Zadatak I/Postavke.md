 ## [**01 (NPP)**](01.cpp)
 
 Poštujući sve faze procesa programiranja, napisati program koji korisniku omogućava unos cijelog broja N, te izračunava vrijednost sume faktorijela neparnih brojeva u intervalu  [1, N]. Suma faktorijela prikazana je sljedećom formulom: S = 1! + 3! + 5! + ... + N!
 
  ## [**02 (NPP)**](02.cpp)
  
  Napisati program u kojem je potrebno unijeti odabrani broj cifara počevši od cifre najveće težinske vrijednosti, pa od njih sastaviti i napisati prirodni broj. Unos cifara se prekida kada se unese broj manji od 0, ukoliko korisnik unese cifru veću od 9, ispisati poruku da cifra nije validna, ali se unos ne prekida. 

**(Obavezno koristiti barem jednu korisnički definisanu funkciju)**

Ispis neka bude oblika:

```
Upisi cifru: 2

Upisi cifru: 8

Upisi cifru: 72

Cifra nije validna

Upisi cifru: -1

Broj sastavljen od zadanih cifara je 28.
```
## [**03 (NPP)**](03.cpp)

Napisati program koji korisniku omogućava unos cijelog broja N, te izračunava geometrijsku sredinu svih neparnih brojeva u intervalu [1, N] koji nisu djeljivi sa brojem 5. Rezlutat treba biti zaokruzen na dvije decimale. 

Geometrijska sredina n brojeva se računa po formuli:

![](https://user-images.githubusercontent.com/72500944/129444910-9c744111-c52d-4eff-aad7-81ac4e19caf4.png)



## [**04 (NPP)**](04.cpp)

Poštujući sve faze programiranja napisati program koji omogućava unos prirodnog broja n preko tastature te izračunava sumu:

![](https://user-images.githubusercontent.com/72500944/129444810-4ca8e00a-6922-44e3-a0da-9da7a83f1cc3.png)


## [**05 (NPP)**](05.cpp)

a) Omogućiti korisniku unos prirodnog broja i nakon toga napraviti funkciju koja će prebrojati koliko taj broj ima cifara

b) Za taj broj pronaći i ispisati prvu, srednju i zadnju cifu (koristiti zasebne funkcije)

c) Obrnuti cifre tom broju (npr. ako je broj bio 12345 treba biti 54321)


## [**06 (NPP)**](06.cpp)

Napišite program, poštujući sve faze procesa programiranja, koji će  ispisati sve troznamenkaste brojeve koji su jednaki sumi faktorijela  svojih znamenki.

**ABC = A! + B! + C!**

**145 je jedini trocifreni broj koji je jednak sumi faktorijela svojih znamenki**


## [**07 (NPP)**](07.cpp)

Napisati program koji će omogućiti unos prirodnog broja A (A > 100000), te kreirati i ispisati broj B koji će se sastojati od cifara broja A u obrnutom redoslijedu u kojem je svaka parna uklonjena. (npr. ako se unese 45362792 funkcija će vratiti 9735). Ispisati razliku brojeva A i B.

**(Obavezno koristiti bar jednu korisnički definiranu funkciju.)**


## [**08 (NPP)**](08.cpp)

Omogučiti unos dva broja X i Y iz intervala od 10 do 5000. Kreirati program koji će pronaći i ispisati sve brojeve od X do Y (uključujući granične vrijednosti) za koje važi da je obrnuti broj djeljiv sa njegovom sumom cifara. Za olakšanje rješenja zadataka napraviri funkcije za obrtanje poretka cifara i za sumu cifara. Npr. Za broj 144 vrijedi da mu je suma cifara 9 i da je broj koji se dobije nakon što se njegove cifre obrnu 441, djeljiv sa 9.

**Definišite vrijednosti intervala [X, Y]: 11, 150. Brojevi koji ispunjuju dati uslov: ...18, 20, 21, 24, 27...**



## [**09 (NPP)**](09.cpp)

Poštujući sve faze procesa programiranja, napišite program, koji za uneseni prirodni broj n i realni broj x izračunava:

![](https://user-images.githubusercontent.com/72500944/129476334-cf973814-1f30-4d21-9cec-65dfa84b1f4c.png)

## [**10 (NPP)**](10.cpp)

Napisati program koji korisniku omogućava unos cijelog broja n, te izračunava:

![](https://user-images.githubusercontent.com/72500944/129476452-178417fd-aca7-439d-98d3-806723758f62.png)

## [**11 (NPP)**](11.cpp)

Napisati program koji omogućava unos realnog broja x, cijelog broja m (m > 0) i odabir funkcije za proračun datog izraza. Korisnik bira funkciju unosom jednog od sljedećih karaktera: 's' (sabiranje), 'o' (oduzimanje), 'm' (množenje), 'd' (dijeljenje). U slučaju da korisnik unese karakter koji ne odgovara niti jednoj od predefinisanih vrijednosti ispisati odgovarajuću poruku i ponoviti odabir.

Za odabir funkcija izrazi su:

![image](https://user-images.githubusercontent.com/72500944/129476680-3e31f78d-da9a-454c-b2df-29ad704ec4e3.png)

**Broj faktora u izrazu odgovara unesenom broju m. U rješenju obavezno iskoristiti switch iskaz.**

## [**12 (NPP)**](12.cpp)

Postujuci sve faze procesa programiranja napisati program koji ce pronaci i ispisati sve brojeve od X do Y ( ukljucujuci granicne vrijednosti) koji su djeljivi svim svojim ciframa.


Brojeve X i Y unosi korisnik i oni moraju biti u opsegu od 10 do 6000.

**Na primjer, broj 36 je djeljiv svim svojim ciframa (36/6=6 i 36/3=12)**.

**Obavezno koristiti bar jednu funkciju.**

## [**13 (NPP)**](13.cpp)

Napisati program kojim će se izračunati 20 uzastopnih vrijednosti brzine i pređenog puta objekta u slobodnom padu u razmaku od po 3 sec. Prilikom računanja potrebno je i ispisati na ekran uzastopno brzinu i pređeni put zajedno za svaki period od 3sec. Obratiti pažnju da se koriste ispravni tipovi podataka. 

Formula za brzinu slobodnog pada je:

![](https://user-images.githubusercontent.com/72500944/129484863-416ca354-ea5d-4bb9-8f77-5b2802406fc7.png) ![](https://user-images.githubusercontent.com/72500944/129484959-d1539b7e-5969-4c41-bdd4-c73ed4060f51.png)


Formula za pređeni put pri slobodnom padu je:

![](https://user-images.githubusercontent.com/72500944/129484891-cd74de0b-908d-45cf-9f00-187e0a3f7edf.png)


Primjer izlaza:

```
Situacija u 3-oj sekundi je:
Brzina: 29.43
Predjeni put: 44.145
Situacija u 6-oj sekundi je:
Brzina: 58.86
Predjeni put: 176.58
Situacija u 9-oj sekundi je:
Brzina: 88.29
Predjeni put: 397.305
Situacija u 12-oj sekundi je:
Brzina: 117.72
Predjeni put: 706.32
Situacija u 15-oj sekundi je:
Brzina: 147.15
Predjeni put: 1103.63
```


