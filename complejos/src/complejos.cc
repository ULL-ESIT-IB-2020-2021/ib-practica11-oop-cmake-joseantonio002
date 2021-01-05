#include "complejos.h"

Complejo Add(Complejo a,Complejo b){
  Complejo c{a.real_+b.real_,a.im_+b.im_};
  return c;
}

Complejo Subs(Complejo a,Complejo b){
  Complejo c{a.real_-b.real_,a.im_-b.im_};
  return c;
}
