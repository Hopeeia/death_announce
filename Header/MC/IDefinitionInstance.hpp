// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class IDefinitionInstance {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_IDEFINITIONINSTANCE
public:
    class IDefinitionInstance& operator=(class IDefinitionInstance const &) = delete;
    IDefinitionInstance(class IDefinitionInstance const &) = delete;
    IDefinitionInstance() = delete;
#endif

public:
    /*0*/ virtual ~IDefinitionInstance();
    /*1*/ virtual unsigned short getRuntimeTypeId() const;
    /*
    inline  ~IDefinitionInstance(){
         (IDefinitionInstance::*rv)();
        *((void**)&rv) = dlsym("??1IDefinitionInstance@@UEAA@XZ");
        return (this->*rv)();
    }
    */

protected:

private:

};