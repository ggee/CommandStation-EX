#ifndef Outputs_h
#define Outputs_h

#include <Arduino.h>

struct OutputData {
  uint8_t oStatus;
  uint8_t id;
  uint8_t pin; 
  uint8_t iFlag; 
};

class Output{
  public:
  void activate(int s);
  static Output* get(int);
  static bool remove(int);
  static void load();
  static void store();
  static Output *create(int, int, int, int=0);
  static void show(Stream & stream);
  static void showAll(Stream & stream);

  private:
  static Output *firstOutput;
  int num;
  struct OutputData data;
  Output *nextOutput;

}; // Output
  
#endif