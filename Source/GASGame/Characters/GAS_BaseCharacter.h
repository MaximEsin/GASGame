// Aragain

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "AbilitySystemInterface.h"
#include "GAS_BaseCharacter.generated.h"

UCLASS(Abstract)
class GASGAME_API AGAS_BaseCharacter : public ACharacter, public IAbilitySystemInterface
{
	GENERATED_BODY()

public:
	AGAS_BaseCharacter();
	virtual UAbilitySystemComponent* GetAbilitySystemComponent() const override;
};
