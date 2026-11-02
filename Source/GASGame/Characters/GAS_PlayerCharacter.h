// Aragain

#pragma once

#include "CoreMinimal.h"
#include "Characters/GAS_BaseCharacter.h"
#include "GAS_PlayerCharacter.generated.h"

class USpringArmComponent;
class UCameraComponent;

UCLASS()
class GASGAME_API AGAS_PlayerCharacter : public AGAS_BaseCharacter
{
	GENERATED_BODY()

public:
	AGAS_PlayerCharacter();
	virtual UAbilitySystemComponent* GetAbilitySystemComponent() const override;

	virtual void PossessedBy(AController* NewController) override;
	virtual void OnRep_PlayerState() override;

private:
	UPROPERTY(VisibleAnywhere, Category = "Camera")
	TObjectPtr<USpringArmComponent> CameraBoom;

	UPROPERTY(VisibleAnywhere, Category = "Camera")
	TObjectPtr<UCameraComponent> FollowCamera;
};
