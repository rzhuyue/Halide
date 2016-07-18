#ifndef HALIDE_UNDEF_H
#define HALIDE_UNDEF_H

/** \file
 *
 * Defines Undef - the front-end handle on undefined value.
 */

#include "Type.h"

namespace Halide {

class FuncRefVar;
class FuncRefExpr;

/** Create an undef value of the given type (see \ref Halide::undef). */
class Undef {
private:
    Type _type;
public:
    /** Construct a Undef with type t. */
    Undef(Type t) : _type(t) {}

    Type type() const {return _type;}
};

}

#endif
