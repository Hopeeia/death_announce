// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "MoveInput.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class MoveInputHandler : public MoveInput {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_MOVEINPUTHANDLER
public:
    class MoveInputHandler& operator=(class MoveInputHandler const &) = delete;
    MoveInputHandler(class MoveInputHandler const &) = delete;
#endif

public:
    /*0*/ virtual ~MoveInputHandler();
    /*1*/ virtual void tick(struct IPlayerMovementProxy &);
    /*2*/ virtual void __unk_vfn_2();
    /*3*/ virtual void __unk_vfn_3();
    /*4*/ virtual void clearInputState();
    /*5*/ virtual void __unk_vfn_5();
    /*9*/ virtual bool isChangeHeight() const;
    /*11*/ virtual bool isPlayerMoving() const;
    /*12*/ virtual class Vec3 const & getGazeDirection() const;
    /*13*/ virtual struct MoveInputComponent extractInputComponent() const;
    /*14*/ virtual void fillInputPacket(class PlayerAuthInputPacket &);
    /*15*/ virtual void __unk_vfn_15() = 0;
    /*16*/ virtual std::unique_ptr<struct IReplayableActorInput> createSnapshot();
    /*
    inline  ~MoveInputHandler(){
         (MoveInputHandler::*rv)();
        *((void**)&rv) = dlsym("??1MoveInputHandler@@UEAA@XZ");
        return (this->*rv)();
    }
    */
    MCAPI bool wantsMoveForward() const;

protected:
    MCAPI MoveInputHandler();

private:

};