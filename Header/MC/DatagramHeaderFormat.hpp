// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "RakNet.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class DatagramHeaderFormat {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_DATAGRAMHEADERFORMAT
public:
    class DatagramHeaderFormat& operator=(class DatagramHeaderFormat const &) = delete;
    DatagramHeaderFormat(class DatagramHeaderFormat const &) = delete;
    DatagramHeaderFormat() = delete;
#endif

public:
    MCAPI void Deserialize(class RakNet::BitStream *);
    MCAPI void Serialize(class RakNet::BitStream *);

protected:

private:

};