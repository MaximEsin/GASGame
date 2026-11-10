// Aragain

#pragma once

#include "CoreMinimal.h"
#include "Characters/GAS_BaseCharacter.h"
#include "GAS_EnemyCharacter.generated.h"

class UAttributeSet;
class UAbilitySystemComponent;

UCLASS()
class GASGAME_API AGAS_EnemyCharacter : public AGAS_BaseCharacter
{
	GENERATED_BODY()

public:
	AGAS_EnemyCharacter();
	virtual UAbilitySystemComponent* GetAbilitySystemComponent() const override;

protected:
	virtual void BeginPlay() override;

private:
	UPROPERTY(VisibleAnywhere)
	TObjectPtr<UAbilitySystemComponent> AbilitySystemComponent;

	TObjectPtr<UAttributeSet> AttributeSet;
};
