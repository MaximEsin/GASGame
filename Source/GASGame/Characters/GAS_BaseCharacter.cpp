// Aragain


#include "Characters/GAS_BaseCharacter.h"

// Sets default values
AGAS_BaseCharacter::AGAS_BaseCharacter()
{
	PrimaryActorTick.bCanEverTick = false;

	// Tick and refresh bone transforms whether rendered or not - for bone updates on a dedicated server
	GetMesh()->VisibilityBasedAnimTickOption = EVisibilityBasedAnimTickOption::AlwaysTickPoseAndRefreshBones;

}

UAbilitySystemComponent* AGAS_BaseCharacter::GetAbilitySystemComponent() const
{
	return nullptr;
}


