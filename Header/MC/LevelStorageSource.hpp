// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class LevelStorageSource {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_LEVELSTORAGESOURCE
public:
    class LevelStorageSource& operator=(class LevelStorageSource const &) = delete;
    LevelStorageSource(class LevelStorageSource const &) = delete;
    LevelStorageSource() = delete;
#endif

public:
    /*0*/ virtual ~LevelStorageSource();
    /*
    inline  ~LevelStorageSource(){
         (LevelStorageSource::*rv)();
        *((void**)&rv) = dlsym("??1LevelStorageSource@@UEAA@XZ");
        return (this->*rv)();
    }
    */
    MCAPI static class std::chrono::duration<__int64, struct std::ratio<1, 1000000000>> const WORLD_SAVE_FLUSH_INTERVAL;
    MCAPI static class std::chrono::duration<__int64, struct std::ratio<1, 1000000000>> const WORLD_SAVE_MENU_FLUSH_INTERVAL;

protected:

private:

};