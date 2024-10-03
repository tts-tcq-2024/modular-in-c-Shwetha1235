#include <stdio.h>
#include "colorPair"

bool printColorCodeReference(int numberOfMajorColors, int numberOfMinorColors){
  int pairnumber=1;
  for(int i; i < numberOfMajorColors; i++){
    for(int j; j < numberOfMinorColors ; j++){
       printf(%d, %s-%s\n, pairnumber, MajorColorNames[i],MinorColorNames[j]);
       pairnumber++;
    }
  }
}
