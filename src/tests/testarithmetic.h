/*  Boolector: Satisfiablity Modulo Theories (SMT) solver.
 *
 *  Copyright (C) 2007-2010 Robert Daniel Brummayer.
 *  Copyright (C) 2007-2012 Armin Biere.
 *
 *  All rights reserved.
 *
 *  This file is part of Boolector.
 *  See COPYING for more information on using this software.
 */

#ifndef TESTARITHMETIC_H_INCLUDED
#define TESTARITHMETIC_H_INCLUDED

void init_arithmetic_tests (void);

void run_arithmetic_tests (int argc, char **argv);

void finish_arithmetic_tests (void);

#endif