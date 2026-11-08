// Aragain


#include "Utils/GAS_BlueprintLibrary.h"

EHitDirection UGAS_BlueprintLibrary::GetHitDirection(const FVector& TargetForward, const FVector& ActorInstigator)
{
	const float Dot = FVector::DotProduct(TargetForward, ActorInstigator);

	if (Dot < -0.5f)
	{
		return EHitDirection::Back;
	}
	else if (Dot > 0.5f)
	{
		return EHitDirection::Forward;
	}
	else
	{
		const FVector Cross = FVector::CrossProduct(TargetForward, ActorInstigator);
		if (Cross.Z > 0)
		{
			return EHitDirection::Right;
		}
		else
		{
			return EHitDirection::Left;
		}
	}
}

FName UGAS_BlueprintLibrary::GetHitDirectionName(const EHitDirection& HitDirection)
{
	switch (HitDirection)
	{
	case EHitDirection::Left:return FName("Left");
	case EHitDirection::Right:return FName("Right");
	case EHitDirection::Forward:return FName("Forward");
	case EHitDirection::Back:return FName("Back");
	default:return FName("Unknown");
	}
}