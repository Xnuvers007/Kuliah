#include <iostream>
#include <string.h>
#include <cstdlib>

using namespace std;

struct movies_t
{
    char title[50];
    int year;
}
    mine, yours;

void printfmovie (movies_t movie);
int main()
{
    char buffer [50];
    strcpy (mine.title, "2001 A Space Odyssey");
    mine.year = 1968;
    cout<< "masukan judul film favorit: ";
    cin.getline (yours.title,50);
    cout<< " masukan tahun :";
    cin.getline (buffer,50);
    yours.year = atoi (buffer);
    cout<< "judul film favorit yang ada:\n ";
    printfmovie (mine);
    cout<< " judul film favorit kamu adalah :\n ";
    printfmovie (yours);
    return 0;
}

void printfmovie (movies_t movie)
{
    cout<< movie.title;
    cout<<" ( " << movie.year << ") \n";
}

