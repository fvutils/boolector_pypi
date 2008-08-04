#ifndef MAXXOR_H_INCLUDED
#define MAXXOR_H_INCLUDED

#include "../../boolector.h"

BtorExp *btor_maxxor (Btor *btor,
                      BtorExp *a_in,
                      BtorExp *b_in,
                      BtorExp *c_in,
                      BtorExp *d_in,
                      BtorExp *m_in,
                      int num_bits);

#endif
