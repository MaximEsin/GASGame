// Aragain

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerState.h"
#include "AbilitySystemInterface.h"
#include "GAS_PlayerState.generated.h"

class UAbilitySystemComponent;

UCLASS()
class GASGAME_API AGAS_PlayerState : public APlayerState, public IAbilitySystemInterface
{
	GENERATED_BODY()

public:
	AGAS_PlayerState();
	virtual UAbilitySystemComponent* GetAbilitySystemComponent() const override;

private:
	UPROPERTY(VisibleAnywhere, Category = "GAS|Abilities")
	TObjectPtr<UAbilitySystemComponent> AbilitySystemComponent;
};
