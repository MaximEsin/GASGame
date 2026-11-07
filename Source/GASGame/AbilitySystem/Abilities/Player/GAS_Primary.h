// Aragain

#pragma once

#include "CoreMinimal.h"
#include "AbilitySystem/Abilities/GAS_GameplayAbility.h"
#include "GAS_Primary.generated.h"


UCLASS()
class GASGAME_API UGAS_Primary : public UGAS_GameplayAbility
{
	GENERATED_BODY()

public:
	UFUNCTION(BlueprintCallable, Category = "GAS|Abilities")
	void HitBoxOverlapTest();

private:
	UPROPERTY(EditDefaultsOnly, Category = "GAS|Abilities")
	float HitBoxRadius = 100.0f;

	UPROPERTY(EditDefaultsOnly, Category = "GAS|Abilities")
	float HitBoxForwardOffset = 200.0f;

	UPROPERTY(EditDefaultsOnly, Category = "GAS|Abilities")
	float HitBoxElevationOffset = 20.0f;
};
