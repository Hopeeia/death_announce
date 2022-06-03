// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "JsonUtil.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class HurtOnConditionDefinition {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_HURTONCONDITIONDEFINITION
public:
    class HurtOnConditionDefinition& operator=(class HurtOnConditionDefinition const &) = delete;
    HurtOnConditionDefinition(class HurtOnConditionDefinition const &) = delete;
    HurtOnConditionDefinition() = delete;
#endif

public:
    MCAPI void addDamageCondition(struct DamageCondition const &);
    MCAPI static void buildSchema(class std::shared_ptr<class JsonUtil::JsonSchemaObjectNode<class JsonUtil::EmptyClass, class HurtOnConditionDefinition>> &);

protected:

private:

};