// Aragain

#pragma once

#include "CoreMinimal.h"
#include "Abilities/GameplayAbility.h"
#include "GAS_GameplayAbility.generated.h"

/**
 *
 */
UCLASS()
class GASGAME_API UGAS_GameplayAbility : public UGameplayAbility
{
	GENERATED_BODY()

public:
	UPROPERTY(EditDefaultsOnly, BlueprintReadonly, Category = "GAS|Debug")
	bool bDrawDebugs = false;


};
