# #Zadanie 1
# Utwórz listę z imionami (conajmniej 10 imion, część powinna się powtarzać)
# określ indeks (numer wiersza) w której znajduje się imie osoby, nazwę osoby podaje użytkownik
# ile osób o imieniu wskazanym przez użytkownika znajduje się na liście
# dołącz nowe imie do listy do końca listy
# dołącz nowe imię jako 3 pozycję na liście
# posortuj obiekty w liście, usuń ostatni element z listy
# utwórz nową listę z 3 imionami i dołącz do listy
# # lista=['Zosia', 'Palina', 'Lera', 'Daria', 'Zosia', 'Maria', 'Maria', 'Marta', 'Ksienia', 'Tania']
# # imie=input('podaj imie: ')
# # ind=lista.index(imie)
# # print('indeks: ', ind)
# # ind2=lista.count(imie)
# # print('osob o imieniu ', imie, ind2)
# lista.append('Nina')
# print(lista)
# lista.insert(3, 'Anna')
# print(lista)
# lista.sort()
# lista.pop()
# print(lista)
# lista2=['Angelina', 'Ola', 'Ala']
# lista.extend(lista2)
# print(lista)

######################Zadanie 2
# Utwórz słownik zawierający  trzy klucze: imie, nazwisko, wiek
# jako wartości w/w kluczy wpisz listy 3-elementowe zawierające dowolne dane osobowe
# następnie wyświetl kompletne dane osoby o numerze wskazanej przez użytkownika
######################Zadanie 3
# Do poprzednio utworzonego słownika dodaj nowy klucz o nazwie "kierunek_studiów", wartość w/w klucza dowolna
# wskazana przez użytkownika
######################Zadanie 4
# Wyświetl nazwy kluczy poprzednio utworzonego słownika, oraz ilość jego elementów
# ###########################################
# osoby={'imie': ['Palina', 'Marta', 'Ksienia'],
#        'nazwisko': ['Sakowicz', 'Nowak', 'Kowalska' ],
#        'wiek': [18,19,20]}
#
# kierunki=[]
# kierunek1 = input('Podaj kierunek studiów dla Palina: ')
# kierunek2 = input('Podaj kierunek studiów dla Marta: ')
# kierunek3 = input('Podaj kierunek studiów dla Ksienia: ')
# kierunki1=[kierunek1,kierunek2,kierunek3]
# kierunki.extend(kierunki1)
# osoby['kierunek_studiow'] = kierunki
#
# print(osoby.keys())
# ilosc=len(osoby.keys())
# print(ilosc)
# numer=int(input('podaj numer(0-2): '))
# print('Dane osobowe: ')
# print('imie: ', osoby['imie'][numer])
# print('nazwisko: ', osoby['nazwisko'][numer])
# print('wiek: ', osoby['wiek'][numer])
# print('kierunek studiow: ', osoby['kierunek_studiow'][numer])



## 1. Sprawdź wynik działań
# 0 > 1
# 0 <= 1
# 0 >= 1
# 1 == 0
# 1 == 1
# 1 != 0
# 1 != 1
# print(0>1)
# print(0<=1)
# print(0>=1)
# print(1==0)
# print(1==1)
# print(1!=0)
# print(1!=1)

# 2. Oblicz wyrażenie 2x+5y   gdzie: x,y to dowolne dwie liczby które podaje użytkownik (w konsoli)
# x=int(input('podaj 1 liczbe(x): '))
# y=int(input('podaj 2 liczbe(y): '))
# print('2x+5y=', 2*x+5*y)

#3. Wyświetl zdanie "Jestem a b mam c lat studiuję d",
##  gdzie : a-imie, a-nazwisko, c-liczba, d-kierunek studiów są dowolne zmienne które podaje użytkownik (wczytywane z klawiatury)
# a=input('podaj imie: ')
# b=input('podaj nazwisko: ')
# c=int(input('podaj wiek: '))
# d=input('podaj kierunek: ')
# print("jestem {} {} mam {} lat studiuje {}".format(a,b,c,d))

# 4. Sprawdź/porównaj czy 1+2+10+20000001+4+347586970885 jest równa 321784560456434534646
#print(1+2+10+20000001+4+347586970885==321784560456434534646)
# # 5. Sprawdź czy suma dowolnych dwóch liczb podanych przez użytkownika jest liczbą parzystą czy nieparzystą wyświetl właściwy komunikat
# liczba1=int(input('podaj 1 liczbe: '))
# liczba2=int(input('podaj 2 liczbe: '))
# print('suma liczb jest parzysta:', (liczba1+liczba2)%2==0)

# 6. Utwórz prosty kalkulator dla 2 zmiennych podanych przez użytkownika, który obliczy: sumę, różnicę,
## iloczyn, iloraz, potęgę tych liczb, nie zapomnij o stosownych komentarzach informacyjnych dla użytkownika.
# liczba1 = float(input('Podaj pierwszą liczbe: '))
# liczba2 = float(input('Podaj druga liczbe: '))
# suma = liczba1 + liczba2
# roznica = liczba1 - liczba2
# iloczyn = liczba1 * liczba2
# if liczba2 != 0:
#     iloraz = liczba1 / liczba2
# else:
#     iloraz = "Nie można dzielić przez zero"
# potega = liczba1 ** liczba2
#
# print('Suma: ', suma)
# print('Różnica: ', roznica)
# print('Iloczyn: ', iloczyn)
# print('Iloraz: ', iloraz)
# print('Potega: ', potega)

# 7. Dla dowolnego x sprawdź wynik działań (x > 1 and x < 13) oraz (x != 5 or x < 0)
# x = float(input("Podaj  x: "))
# print('(x > 1 and x < 13): ', x > 1 and x < 13)
# print('(x != 5 or x < 0): ', x != 5 or x < 0)

# 1. Wykonaj mini ankietę tj. poproś użytkownika o następujące informacje: imie, nazwisko, wiek, zadaj mu pytania: "Czy zdrowo się odżywiasz?",
# , "Czy lubisz sport?" i dodatkowo 3 inne własne. Po uzyskaniu wszystkich odpowiedzi wyświetl ich podsumowanie.
# imie=input('podaj imie: ')
# nazwisko=input('podaj nazwisko: ')
# wiek=int(input('podaj wiek: '))
# zdrowo_odzywenie=input('czy zdrowo się odzywiasz?(tak/nie')
# sport=input('czy')
