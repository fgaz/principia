#ifndef _LEDBUFFER__H_
#define _LEDBUFFER__H_

#include "entity.hh"

#define LEDBUFFER_MAX 512

#define LED_Z_OFFSET .05f

class ledbuffer
{
  public:
    static void _init();
    static void reset();
    static void upload();
    static void add(float x, float y, float z, float col);
    static tms::entity *get_entity();
};

#endif
