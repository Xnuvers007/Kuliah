#include<iostream>
#define WINDOWS 1
using namespace std;

void console_clear_screen() {
  #ifdef WINDOWS
  system("cls");
  #endif
  #ifdef LINUX
  system("clear");
  #endif
}

int main()
{
  /* your code put here */
  console_clear_screen();
  return 0;
}
