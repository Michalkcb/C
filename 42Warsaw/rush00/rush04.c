void ft_putchar(char c);

// Funkcja draw_line rysuje linię o zadanej długości i określonych znakach na początku, w środku i na końcu.
void draw_line(int longness, char start, char middle, char end)
{
    // Zmienna do śledzenia aktualnego indeksu w linii
    int i = 0;

    // Pętla while rysuje znaki w zależności od wartości indeksu i
    while (i < longness)
    {
        // Jeśli to pierwszy znak w linii, wypisz znak początkowy
        if (i == 0)
            ft_putchar(start);
        else
        {
            // Jeśli to ostatni znak w linii, wypisz znak końcowy
            if (i == longness - 1)
                ft_putchar(end);
            // W przeciwnym razie wypisz znak środkowy
            else
                ft_putchar(middle);
        }

        // Zwiększ indeks
        i++;
    }

    // Przejdź do nowej linii po zakończeniu rysowania linii
    ft_putchar('\n');
}

// Funkcja rush rysuje prostokątny kształt z określonymi znakami na brzegach i wypełnieniem.
void rush(int x, int y)
{
    // Zmienna do śledzenia aktualnego indeksu w kolumnie
    int i = 0;

    // Sprawdzenie, czy szerokość i wysokość są poprawne (nieujemne)
    if (x <= 0 || y <= 0)
        return;  // Zakończ funkcję, jeśli szerokość lub wysokość są niepoprawne.

    // Pętla while rysuje poszczególne wiersze prostokąta
    while (i < y)
    {
        // Jeśli to pierwszy wiersz, rysuj górną krawędź prostokąta
        if (i == 0)
            draw_line(x, 'A', 'B', 'C');
        else
        {
            // Jeśli to ostatni wiersz, rysuj dolną krawędź prostokąta
            if (i == y - 1)
                draw_line(x, 'C', 'B', 'A');
            // W przeciwnym razie rysuj środkowe wiersze prostokąta z wypełnieniem
            else
                draw_line(x, 'B', ' ', 'B');
        }

        // Zwiększ indeks
        i++;
    }
}
