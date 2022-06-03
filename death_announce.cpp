#include "library.h"
#include "Header/LoggerAPI.h"
#include "Header/EventAPI.h"
#include "MC/Player.hpp"
#include "LLAPI.h"
void death() {

    Event::PlayerDieEvent::subscribe([](const Event::PlayerDieEvent &ev) {
        Logger logger("Death Announce");
        int x,y,z;
        x =ev.mPlayer->getPosition().x;
        y =ev.mPlayer->getPosition().y;
        z =ev.mPlayer->getPosition().z;
        logger.warn("{} Died at {},{},{}",ev.mPlayer->getRealName(),x,y,z);
        logger.endl;
        return true;
    });
}
