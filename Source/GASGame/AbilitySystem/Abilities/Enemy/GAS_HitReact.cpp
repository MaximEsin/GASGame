// Aragain


#include "AbilitySystem/Abilities/Enemy/GAS_HitReact.h"

void UGAS_HitReact::CacheHitDirection(AActor* Instigator)
{
	AvatarForward = GetAvatarActorFromActorInfo()->GetActorForwardVector();

	const FVector AvatarLocation = GetAvatarActorFromActorInfo()->GetActorLocation();
	const FVector InstigatorLocation = Instigator->GetActorLocation();

	ToInstigator = (InstigatorLocation - AvatarLocation).GetSafeNormal();
}
