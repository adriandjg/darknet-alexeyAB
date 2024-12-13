#ifndef CLASSIFIER_H
#define CLASSIFIER_H

#include "list.h"
#ifdef __cplusplus
extern "C" {
#endif
list *read_data_cfg(char *filename);

//added by adrian 
int get_epoch(); // Add this line
extern int epoch;


#ifdef __cplusplus
}
#endif
#endif
