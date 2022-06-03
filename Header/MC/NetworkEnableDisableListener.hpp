// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Bedrock.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class NetworkEnableDisableListener {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_NETWORKENABLEDISABLELISTENER
public:
    class NetworkEnableDisableListener& operator=(class NetworkEnableDisableListener const &) = delete;
    NetworkEnableDisableListener(class NetworkEnableDisableListener const &) = delete;
    NetworkEnableDisableListener() = delete;
#endif

public:
    /*0*/ virtual ~NetworkEnableDisableListener();
    /*
    inline  ~NetworkEnableDisableListener(){
         (NetworkEnableDisableListener::*rv)();
        *((void**)&rv) = dlsym("??1NetworkEnableDisableListener@@UEAA@XZ");
        return (this->*rv)();
    }
    */
    MCAPI NetworkEnableDisableListener(class Bedrock::NonOwnerPointer<class AppPlatform> const &);
    MCAPI void disable();
    MCAPI bool isDisabled() const;
    MCAPI bool isEnabled() const;
    MCAPI bool isNetworkAllowed() const;
    MCAPI bool isUninitialized() const;
    MCAPI void tryEnable();
    MCAPI void uninitialize();

protected:

private:

};