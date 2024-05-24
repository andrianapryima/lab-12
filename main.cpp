/*Написати програму, яка у заданому текстовому файлі видаляє введене з клавіатури слово та повертає кількість видалених слів.*/

#include <iostream>
#include "sentence.h"
#include <string>

using namespace std;

extern string word, line;

int main()
{
  string nameFile;
  cout << "Input name file: ";
  cin >> nameFile;
  cout << "Input word: ";
  cin >> word;
  RemoveWord(line, word);
  countWords(line);
  cout<< countWords(line)<< "Result: "<< line << endl;
   // int removedCount = processFile(nameFile, word);
  return 0;
}