// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class LookControl {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_LOOKCONTROL
public:
    class LookControl& operator=(class LookControl const &) = delete;
    LookControl(class LookControl const &) = delete;
#endif

public:
    /*0*/ virtual ~LookControl();
    /*1*/ virtual void __unk_vfn_1();
    /*2*/ virtual void tick(class Mob &);
    /*
    inline void initializeInternal(class Mob & a0){
        void (LookControl::*rv)(class Mob &);
        *((void**)&rv) = dlsym("?initializeInternal@LookControl@@UEAAXAEAVMob@@@Z");
        return (this->*rv)(std::forward<class Mob &>(a0));
    }
    inline  ~LookControl(){
         (LookControl::*rv)();
        *((void**)&rv) = dlsym("??1LookControl@@UEAA@XZ");
        return (this->*rv)();
    }
    */
    MCAPI LookControl();

protected:

private:

};