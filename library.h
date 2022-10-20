/**
 * @file movieCollection.h
 * @author Connor Walsh
 * @date 2022-10-19
 * @brief this is the library header file
 * 
 * This header file contains the definition of the Library class. 
 */


#ifndef LIBRARY_H
#define LIBRARY_H

#include <string>

class Library{
 private:
  struct movie{
    entry* next;
    std::string title;
    std::string director;
    int runtime;
    std::string format;
    float price;
    int year;
  };
  entry* head;
 public:
  Library();
  ~Library();
  void destructor_helper(entry* node);
  void read_from_file(std::string fileName);
  void push_front(std::string title, std::string director, int runtime, std::string format, float price, int year);
  void push_back(std::string title, std::string director, int runtime, std::string format, float price, int year);
  void write_to_file(std::string fileName);
  std::string find_movie(std::string title);
  std::string director_search(std::string name);
  void insert_sorted(std::string title, std::string director, int runtime, std::string format, float price, int year);
  void print();
  void remove(std::title);
};

#endif //LIBRARY_H