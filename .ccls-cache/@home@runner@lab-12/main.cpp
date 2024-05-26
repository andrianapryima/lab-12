/*Написати програму, яка у заданому текстовому файлі видаляє введене з клавіатури слово та повертає кількість видалених слів.*/

#include <iostream>
#include "sentence.h"
#include <string>
#include <fstream>

using namespace std;

extern string word, line;

int main()
{
  string nameFile;
  cout << "Input name file: ";
  cin >> nameFile;
  cout << "Input word: ";
  cin >> word;
  ifstream inputFile(nameFile);
  ofstream outputFile("result.txt");
  //Перевірка, чи файли вдалося відкрити
  if (!inputFile) {
    cout << "Unable to open input file!" << endl;
    return -1;
  }

  if (!outputFile) {
    cout << "Unable to open output file!" << endl;
    return -1;
  }
  string result = "";
  //string file_txt;
  // помістити з файла test.txt в змінну file_txt
  getline(inputFile, line);

  // cout << line << endl;
  cout << "Result: "<< countWords(line) << endl;
  RemoveWord(line, word);
  //записати вміст змінної result в файл result.txt
  outputFile << line;
  cout << line << endl;
  //закрити файли
  inputFile.close();
  outputFile.close();
    return 0;
}