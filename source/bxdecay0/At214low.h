#ifndef BXDECAY0_AT214LOW_H
#define BXDECAY0_AT214LOW_H

namespace bxdecay0 {

  class i_random;
  class event;

  void At214low(i_random & prng_,
		event & event_,
		const int levelkev_);

} // end of namespace bxdecay0

#endif // BXDECAY0_AT214LOW_H

// Local Variables: --
// mode: c++ --
// End: --
