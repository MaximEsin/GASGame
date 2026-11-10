// Aragain

#pragma once

#include "CoreMinimal.h"
#include "AttributeSet.h"
#include "AbilitySystemComponent.h"
#include "GAS_AttributeSet.generated.h"

#define ATTRIBUTE_ACCESSORS(ClassName, PropertyName) \
	GAMEPLAYATTRIBUTE_PROPERTY_GETTER(ClassName, PropertyName) \
	GAMEPLAYATTRIBUTE_VALUE_GETTER(PropertyName) \
	GAMEPLAYATTRIBUTE_VALUE_SETTER(PropertyName) \
	GAMEPLAYATTRIBUTE_VALUE_INITTER(PropertyName)


UCLASS()
class GASGAME_API UGAS_AttributeSet : public UAttributeSet
{
	GENERATED_BODY()

public:
	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

	UPROPERTY(BlueprintReadonly, ReplicatedUsing = OnRep_Health)
	FGameplayAttributeData Health;

	UFUNCTION()
	void OnRep_Health(const FGameplayAttributeData& OldValue);

	ATTRIBUTE_ACCESSORS(ThisClass, Health);

	UPROPERTY(BlueprintReadonly, ReplicatedUsing = OnRep_MaxHealth)
	FGameplayAttributeData MaxHealth;

	UFUNCTION()
	void OnRep_MaxHealth(const FGameplayAttributeData& OldValue);

	ATTRIBUTE_ACCESSORS(ThisClass, MaxHealth);

	UPROPERTY(BlueprintReadonly, ReplicatedUsing = OnRep_Mana)
	FGameplayAttributeData Mana;

	UFUNCTION()
	void OnRep_Mana(const FGameplayAttributeData& OldValue);

	ATTRIBUTE_ACCESSORS(ThisClass, Mana);

	UPROPERTY(BlueprintReadonly, ReplicatedUsing = OnRep_MaxMana)
	FGameplayAttributeData MaxMana;

	UFUNCTION()
	void OnRep_MaxMana(const FGameplayAttributeData& OldValue);

	ATTRIBUTE_ACCESSORS(ThisClass, MaxMana);
};
