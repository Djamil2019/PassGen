#include <windows.h>
#include <iostream>
#include <fstream>
#include <ctime>

using namespace std;

int main()
{
  SetConsoleCP(1251);
  SetConsoleOutputCP(1251);

  char test[] = {'A', 'a', 'B', 'b', 'C', 'c', 'D', 'd', 'E', 'e',
  'F', 'f', 'G', 'g', 'H', 'h', 'I', 'i', 'J', 'j', 'K', 'k', 'L',
  'l', 'M', 'm', 'N', 'n', 'O', 'o', 'P', 'p', 'Q', 'q', 'R', 'r',
  'S', 's', 'T', 't', 'U', 'u', 'V', 'v', 'W', 'w', 'X', 'x', 'Y',
  'y', 'Z', 'z', '0', '1', '2', '3', '4', '5', '6', '7', '8', '9',};

  unsigned short Passwords, Characters, size = sizeof(test) / sizeof(test[0]);
  srand(time(0));

  cout << "Количество паролей: ";
  cin >> Passwords;

  cout << "Количество символов в пароле: ";
  cin >> Characters;
  const unsigned short SaveCharacters = Charakters;

  ofctream outFile("PassGen.txt");
    for(; Passwords > 0; Passwords--)
    {
      for(; Characters > 0; Characters--)
      {
        outfile << test[rand() % size];
      }
      if(characters == 0)
      {
        Characters = SaveCharacters;
        outFile << endl;
      }
    }
  outFile.close();

  cout << "Пароли сохранены в файл PassGen.txt\n";

  system("pause");

  return 0;
}
