#include "Place.h"

// Place has no data members of its own - Location, Region, and
// PlaceDecorator each own whatever they need. The destructor still
// needs a body here (even though it's empty) so every derived class's
// destructor chain has something to call into after its own cleanup runs.
Place::~Place() {}
