// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Json.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class CameraItemComponentLegacy {

#define AFTER_EXTRA
// Add Member There
public:
enum UseAction;

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_CAMERAITEMCOMPONENTLEGACY
public:
    class CameraItemComponentLegacy& operator=(class CameraItemComponentLegacy const &) = delete;
    CameraItemComponentLegacy(class CameraItemComponentLegacy const &) = delete;
    CameraItemComponentLegacy() = delete;
#endif

public:
    /*0*/ virtual ~CameraItemComponentLegacy();
    /*1*/ virtual void __unk_vfn_1();
    /*2*/ virtual void __unk_vfn_2();
    /*3*/ virtual void __unk_vfn_3();
    /*4*/ virtual void __unk_vfn_4();
    /*5*/ virtual void __unk_vfn_5();
    /*6*/ virtual void __unk_vfn_6();
    /*7*/ virtual bool canPlace(class ItemStack const &, class Actor &, class BlockPos const &, unsigned char) const;
    /*8*/ virtual void takePictureNow(class Player &, class Actor *, class Actor *);
    /*9*/ virtual void __unk_vfn_9();
    /*10*/ virtual void use(class ItemStack &, class Player &);
    /*11*/ virtual void releaseUsing(class ItemStack &, class Player &, int);
    /*12*/ virtual bool useOn(class ItemStack &, class Actor &, class BlockPos const &, unsigned char, class Vec3 const &);
    /*
    inline float pictureDuration() const{
        float (CameraItemComponentLegacy::*rv)() const;
        *((void**)&rv) = dlsym("?pictureDuration@CameraItemComponentLegacy@@UEBAMXZ");
        return (this->*rv)();
    }
    inline float blackBarsDuration() const{
        float (CameraItemComponentLegacy::*rv)() const;
        *((void**)&rv) = dlsym("?blackBarsDuration@CameraItemComponentLegacy@@UEBAMXZ");
        return (this->*rv)();
    }
    inline float blackBarsScreenRatio() const{
        float (CameraItemComponentLegacy::*rv)() const;
        *((void**)&rv) = dlsym("?blackBarsScreenRatio@CameraItemComponentLegacy@@UEBAMXZ");
        return (this->*rv)();
    }
    inline float shutterDuration() const{
        float (CameraItemComponentLegacy::*rv)() const;
        *((void**)&rv) = dlsym("?shutterDuration@CameraItemComponentLegacy@@UEBAMXZ");
        return (this->*rv)();
    }
    inline float slideAwayDuration() const{
        float (CameraItemComponentLegacy::*rv)() const;
        *((void**)&rv) = dlsym("?slideAwayDuration@CameraItemComponentLegacy@@UEBAMXZ");
        return (this->*rv)();
    }
    inline float shutterScreenRatio() const{
        float (CameraItemComponentLegacy::*rv)() const;
        *((void**)&rv) = dlsym("?shutterScreenRatio@CameraItemComponentLegacy@@UEBAMXZ");
        return (this->*rv)();
    }
    inline void registerCallbacks(class CameraCallbacks * a0){
        void (CameraItemComponentLegacy::*rv)(class CameraCallbacks *);
        *((void**)&rv) = dlsym("?registerCallbacks@CameraItemComponentLegacy@@UEAAXPEAVCameraCallbacks@@@Z");
        return (this->*rv)(std::forward<class CameraCallbacks *>(a0));
    }
    */
    MCAPI CameraItemComponentLegacy(class Item &);
    MCAPI bool init(class Json::Value &, class SemVersion const &);

protected:

private:
    MCAPI enum CameraItemComponentLegacy::UseAction _tryPlace(class ItemStack const &, class Actor &, class BlockPos const &, unsigned char, class Vec3 &) const;

};