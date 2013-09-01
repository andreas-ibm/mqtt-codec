#include <string.h>

#include "errors.h"

const char* mqtt_error_strings[] = {
  NULL,
  "the parser was left in an invalid state",
  "the remaining length field was too high"
};

const char* mqtt_error_string(mqtt_error_t error) {
  return mqtt_error_strings[error];
}