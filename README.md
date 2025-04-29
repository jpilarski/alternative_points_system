# Alternatywny system punktowania meczów piłkarskich

W tym projekcie zastanawiam się, co by było, gdyby do standardowych ```3, 1, 0``` punktów przyznawanych drużynie za wynik meczu, były dodawane (lub odejmowane) punkty cząstkowe wynikające z różnicy miejsc w tabeli przed rozegraniem spotkania.

## Zasada działania

Przed rozpoczęciem kolejki zapamiętywane są aktualne pozycje drużyn w tabeli. Punkty są przyznawane w następujący sposób:
1. Za zwycięstwo przyznawane są 3 punkty i bonus wynikający z różnicy miejsc w tabeli:
  - TBD
2. Za remis przyznawany jest 1 punkt
  - TDB
3. Za porażkę nie są przyznawane żadne punkty
  - TBD

## Przykład

Tabela przedstawia poglądowo zasady przyznawania punktów dla ligi z 18 drużynami:

| Wynik A-B    | Miejsce A | Miejsce B | Różnica miejsc | Punkty A | Punkty B |
|:------------:|:---------:|:---------:|:--------------:|:--------:|:--------:|
| Zwycięstwo A |           |           |                |          |          |
| Zwycięstwo B |           |           |                |          |          |
| Remis        |           |           |                |          |          |
| Zwycięstwo A |           |           |                |          |          |
| Zwycięstwo B |           |           |                |          |          |
| Remis        |           |           |                |          |          |

## Wymagane pliki wejściowe

```teams.csv``` zawierający dane o drużynach

```results.csv``` zawierający wyniki spotkań i daty ich rozgrywania

## Wynik

Plik ```tables.csv``` zawierający tabelę po każdej kolejce

##  Technologie
- C++
- Excel do tworzenia wykresów

Projekt będzie rozwijany.