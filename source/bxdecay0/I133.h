#ifndef BXDECAY0_I133_H
#define BXDECAY0_I133_H

namespace bxdecay0 {

  class i_random;
  class event;

  void I133(i_random & prng_,
	    event & event_,
	    const double tcnuc_,
	    double & tdnuc_);

} // end of namespace bxdecay0

#endif // BXDECAY0_I133_H

// Local Variables: --
// mode: c++ --
// End: --
