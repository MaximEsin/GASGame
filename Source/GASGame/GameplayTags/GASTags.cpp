#include "GameplayTags/GASTags.h"

namespace GASTags
{
	namespace GASAbilities
	{
		UE_DEFINE_GAMEPLAY_TAG_COMMENT(Primary, "GASTags.GASAbilities.Primary", "Tag for the Primary ability");
		UE_DEFINE_GAMEPLAY_TAG_COMMENT(Secondary, "GASTags.GASAbilities.Secondary", "Tag for the Secondary ability");
		UE_DEFINE_GAMEPLAY_TAG_COMMENT(Tertiary, "GASTags.GASAbilities.Tertiary", "Tag for the Tertiary ability");

		UE_DEFINE_GAMEPLAY_TAG_COMMENT(ActivateOnGiven, "GASTags.GASAbilities.ActivateOnGiven", "Tag for the ability that should activate immediately once given");
	}

	namespace Events
	{
		namespace Enemy
		{
			UE_DEFINE_GAMEPLAY_TAG_COMMENT(HitReact, "GASTags.Events.Enemy.HitReact", "Tag for the enemy HitReact Event");
		}
	}
}