// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class JsonSaver {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_JSONSAVER
public:
    class JsonSaver& operator=(class JsonSaver const &) = delete;
    JsonSaver(class JsonSaver const &) = delete;
    JsonSaver() = delete;
#endif

public:
    /*0*/ virtual ~JsonSaver();
    /*
    inline  ~JsonSaver(){
         (JsonSaver::*rv)();
        *((void**)&rv) = dlsym("??1JsonSaver@@UEAA@XZ");
        return (this->*rv)();
    }
    */
    MCAPI std::string toString();

protected:

private:

};