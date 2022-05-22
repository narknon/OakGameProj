#include "OakLightProjectileStatics.h"
#include "Templates/SubclassOf.h"

class AActor;
class ULightProjectileData;

void UOakLightProjectileStatics::ThrowLightProjectileFromData(AActor* Thrower, const FOakLightProjectileInitializationData& Data, FName SourceSocket, float MaxPredication, float Speed, float AnglePercent, FRotator DirectionOffset, AActor* TargetOverride, FVector LocalTargetOffset, FName TargetSocket, bool bSpawnAsync) {
}

void UOakLightProjectileStatics::ThrowLightProjectile(AActor* Thrower, TSubclassOf<ULightProjectileData> Data, int32 Flags, FName SourceSocket, float MaxPredication, float Speed, float AnglePercent, FRotator DirectionOffset, AActor* TargetOverride, FVector LocalTargetOffset, FName TargetSocket, bool bSpawnAsync) {
}

void UOakLightProjectileStatics::CreateOakLightProjectileFromDataAsync(const FOakLightProjectileInitializationData& InitData, float ForceSpawnTimer) {
}

void UOakLightProjectileStatics::CreateOakLightProjectileFromData(const FOakLightProjectileInitializationData& InitData) {
}

UOakLightProjectileStatics::UOakLightProjectileStatics() {
}

