//реалізація функцій
#include "sentence.h"
#include <iostream>
#include <string>
using namespace std;

string word, line;

void RemoveWord(string &line, string &word) {

  // Поки знайдено входження слова, видаляємо його
  size_t pos = line.find(word);
  while (pos != string::npos) {
    // Видаляємо слово з рядка
    line.erase(pos, word.length());
    // Продовжуємо пошук наступного входження слова
    pos = line.find(word);
  }
  }

int countWords(string &line) {
  // Створюємо копію оригінального рядка, оскільки в процесі видалення ми
  // модифікуємо вихідний рядок
  // string str;
  int count = 0;
  // Шукаємо всі входження слова та підраховуємо їх
  size_t pos = line.find(word);
  while (pos != string::npos) {
    count++;
    // Видаляємо слово з рядка
    line.erase(pos, word.length());
    // Продовжуємо пошук наступного входження слова
    pos = line.find(word);
  }
  return count;
}
