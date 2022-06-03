// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class StackResultStorageEntity {

#define AFTER_EXTRA
// Add Member There
public:

inline class EntityContext& getStackRef() {
    return _getStackRef();
}

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_STACKRESULTSTORAGEENTITY
public:
    class StackResultStorageEntity& operator=(class StackResultStorageEntity const &) = delete;
    StackResultStorageEntity(class StackResultStorageEntity const &) = delete;
    StackResultStorageEntity() = delete;
#endif

public:

protected:
    MCAPI StackResultStorageEntity(class StackResultStorageEntity &&);
    MCAPI StackResultStorageEntity(class OwnerStorageEntity const &);
    MCAPI StackResultStorageEntity(class WeakStorageEntity const &);
    MCAPI class EntityContext & _getStackRef() const;
    MCAPI bool _hasValue() const;

private:

};