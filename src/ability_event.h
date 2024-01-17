#ifndef AS_ABILITYEVENT_HPP
#define AS_ABILITYEVENT_HPP

#include "ability.hpp"
#include "core/io/resource.h"
#include "status.hpp"

class AbilitySystem;

class AbilityEvent : public Resource {
	GDCLASS(AbilityEvent, Resource);

private:
	Ref<Ability> ability;
	TypedArray<Effect> effect_instances;

protected:
	static void _bind_methods();

public:
	GETSET_RESOURCE(Ref<Ability>, ability)

	void start(AbilitySystem *owner);
	Status tick(AbilitySystem *owner, float delta);
};

#endif