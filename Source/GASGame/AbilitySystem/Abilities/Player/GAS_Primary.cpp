// Aragain


#include "AbilitySystem/Abilities/Player/GAS_Primary.h"
#include "Engine/OverlapResult.h"
#include "DrawDebugHelpers.h"

void UGAS_Primary::HitBoxOverlapTest()
{
	TArray<AActor*> ActorsToIgnoere;
	ActorsToIgnoere.Add(GetAvatarActorFromActorInfo());

	// Ensure that the overlap test ignores the avatar actor
	FCollisionQueryParams QueryParams;
	QueryParams.AddIgnoredActors(ActorsToIgnoere);

	FCollisionResponseParams ResponseParams;
	ResponseParams.CollisionResponse.SetAllChannels(ECR_Ignore);
	ResponseParams.CollisionResponse.SetResponse(ECC_Pawn, ECR_Block);

	TArray<FOverlapResult> OverlapResults;
	FCollisionShape Sphere = FCollisionShape::MakeSphere(HitBoxRadius);

	const FVector Forward = GetAvatarActorFromActorInfo()->GetActorForwardVector() * HitBoxForwardOffset;
	const FVector HitBoxLocation = GetAvatarActorFromActorInfo()->GetActorLocation() + Forward + FVector(0.0f, 0.0f, HitBoxElevationOffset);

	GetWorld()->OverlapMultiByChannel(
		OverlapResults,
		HitBoxLocation,
		FQuat::Identity,
		ECC_Visibility,
		Sphere,
		QueryParams,
		ResponseParams
	);

	if (bDrawDebugs)
	{
		DrawDebugSphere(GetWorld(), HitBoxLocation, HitBoxRadius, 16, FColor::Red, false, 3.0f);

		for (const FOverlapResult& Result : OverlapResults)
		{
			if (IsValid(Result.GetActor()))
			{
				FVector DebugLocation = Result.GetActor()->GetActorLocation();
				DebugLocation.Z += 100.0f;
				// Foreground depth priority so the sphere isn't hidden inside large meshes
				DrawDebugSphere(GetWorld(), DebugLocation, 30.0f, 10, FColor::Green, false, 3.0f, SDPG_Foreground);
			}
		}
	}
}
