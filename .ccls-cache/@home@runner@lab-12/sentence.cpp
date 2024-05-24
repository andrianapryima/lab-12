//реалізація функцій
#include "sentence.h"
#include <iostream>
#include <string>
using namespace std;

string str;

void inputData()

{
  cout << "Enter a sentence:"<< endl;
  getline(cin, str);
}



void RemoveWord (string &str, const string &word)
{
  // Шукаємо перше входження слова у рядок
  size_t pos = str.find(word);
  // Поки знайдено входження слова, видаляємо його
  while (pos != string::npos) {
      // Видаляємо слово з рядка
      str.erase(pos, word.length());
      // Продовжуємо пошук наступного входження слова
      pos = str.find(word);
  }
  
}

int countWords(string *line)
{
  // Створюємо копію оригінального рядка, оскільки в процесі видалення ми модифікуємо вихідний рядок
     // string str = originalStr;
      int count = 0;
      // Шукаємо всі входження слова та підраховуємо їх
      size_t pos = str.find(word);
      while (pos != string::npos) 
      {
          count++;
          // Видаляємо слово з рядка
          str.erase(pos, word.length());
          // Продовжуємо пошук наступного входження слова
          pos = str.find(word);
      }
      return count;
  }
