/*Написати програму, яка у заданому текстовому файлі видаляє введене з клавіатури слово та повертає кількість видалених слів.*/

#include <iostream>
#include "sentence.h"

using namespace std;

extern string word, line;

int main()
{
  inputData();
  RemoveWord (&str, string &word);
  cout<< countWords(&line)<< "Result: "<< line << endl;
    
  return 0;
}