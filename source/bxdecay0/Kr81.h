#ifndef BXDECAY0_KR81_H
#define BXDECAY0_KR81_H

namespace bxdecay0 {

  class i_random;
  class event;

  void Kr81(i_random & prng_,
	    event & event_,
	    const double tcnuc_,
	    double & tdnuc_);

} // end of namespace bxdecay0

#endif // BXDECAY0_KR81_H

// Local Variables: --
// mode: c++ --
// End: --
