#ifndef BXDECAY0_TE124LOW_H
#define BXDECAY0_TE124LOW_H

namespace bxdecay0 {

  class i_random;
  class event;

  void Te124low(i_random & prng_,
		event & event_,
		const int levelkev_);

} // end of namespace bxdecay0

#endif // BXDECAY0_TE124LOW_H

// Local Variables: --
// mode: c++ --
// End: --
