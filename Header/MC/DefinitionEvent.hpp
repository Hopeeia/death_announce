// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class DefinitionEvent {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

public:
    MCAPI DefinitionEvent(class DefinitionEvent const &);
    MCAPI DefinitionEvent();
    MCAPI DefinitionEvent(class DefinitionEvent &&);
    MCAPI void evaluateEvent(class RenderParams &, std::vector<struct DefinitionModifier> &) const;
    MCAPI void evaluateGroups(class Actor &, std::vector<struct DefinitionModifier> &, class VariantParameterList const &);
    MCAPI class DefinitionEvent & operator=(class DefinitionEvent const &);
    MCAPI ~DefinitionEvent();

protected:

private:

};