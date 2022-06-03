// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "ScriptActorComponent.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class ScriptLeashableComponent : public ScriptActorComponent {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SCRIPTLEASHABLECOMPONENT
public:
    class ScriptLeashableComponent& operator=(class ScriptLeashableComponent const &) = delete;
    ScriptLeashableComponent(class ScriptLeashableComponent const &) = delete;
    ScriptLeashableComponent() = delete;
#endif

public:
    /*0*/ virtual ~ScriptLeashableComponent();
    /*
    inline  ~ScriptLeashableComponent(){
         (ScriptLeashableComponent::*rv)();
        *((void**)&rv) = dlsym("??1ScriptLeashableComponent@@UEAA@XZ");
        return (this->*rv)();
    }
    */
    MCAPI ScriptLeashableComponent(class WeakEntityRef const &, class Scripting::WeakLifetimeScope const &, std::string const &);
    MCAPI class Scripting::Result<float> getSoftDistance() const;
    MCAPI class Scripting::Result<void> leash(class ScriptActor &) const;
    MCAPI class Scripting::Result<void> unleash() const;
    MCAPI static class Scripting::ClassBindingBuilder<class ScriptLeashableComponent> bind(struct Scripting::Version);

protected:

private:

};