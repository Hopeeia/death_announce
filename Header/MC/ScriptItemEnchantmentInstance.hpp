// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

struct ScriptItemEnchantmentInstance {

#define AFTER_EXTRA

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SCRIPTITEMENCHANTMENTINSTANCE
public:
    ScriptItemEnchantmentInstance(struct ScriptItemEnchantmentInstance const &) = delete;
    ScriptItemEnchantmentInstance() = delete;
#endif

public:
    MCAPI ScriptItemEnchantmentInstance(class EnchantmentInstance const &);
    MCAPI struct ScriptItemEnchantmentInstance & operator=(struct ScriptItemEnchantmentInstance const &);
    MCAPI ~ScriptItemEnchantmentInstance();

protected:

private:

};