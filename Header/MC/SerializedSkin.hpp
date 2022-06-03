// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "persona.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class SerializedSkin {

#define AFTER_EXTRA
// Add Member There
    char filler[620];
#undef AFTER_EXTRA

public:
    MCAPI SerializedSkin(class SerializedSkin &&);
    MCAPI SerializedSkin();
    MCAPI SerializedSkin(class SerializedSkin const &);
    MCAPI SerializedSkin(class ConnectionRequest const &);
    MCAPI SerializedSkin(class SubClientConnectionRequest const &);
    MCAPI float getAnimationFrames(enum persona::AnimatedTextureType) const;
    MCAPI std::string const & getName() const;
    MCAPI bool isTrustedSkin() const;
    MCAPI class SerializedSkin & operator=(class SerializedSkin const &);
    MCAPI bool read(class ReadOnlyBinaryStream &);
    MCAPI void setIsTrustedSkin(bool);
    MCAPI void updateGeometryName();
    MCAPI bool useBlinkingAnimation() const;
    MCAPI void write(class BinaryStream &) const;
    MCAPI ~SerializedSkin();

protected:

private:

};