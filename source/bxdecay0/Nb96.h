#ifndef BXDECAY0_NB96_H
#define BXDECAY0_NB96_H

namespace bxdecay0 {

  class i_random;
  class event;

  void Nb96(i_random & prng_,
	    event & event_,
	    const double tcnuc_,
	    double & tdnuc_);

} // end of namespace bxdecay0

#endif // BXDECAY0_NB96_H

// Local Variables: --
// mode: c++ --
// End: --
