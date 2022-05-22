#include "LightProjectileStatics.h"
#include "Templates/SubclassOf.h"

class ULightProjectile;
class ULightProjectileData;
class APawn;
class AActor;
class UGbxDamageType;
class UDamageSource;
class UImpactData;

void ULightProjectileStatics::SplitLightProjectile(ULightProjectile* Projectile, TSubclassOf<ULightProjectileData> Data, ELightProjectileSplitPattern Pattern, int32 Count, float SpreadAngle, float RotateAngle, float OffsetDistance, bool bDestroySource) {
}

void ULightProjectileStatics::SetProjectileFlag(FLightProjectileInitializationData& InitData, ELightProjectileFlag Flag) {
}

void ULightProjectileStatics::SetHomingState(const FLightProjectileQueryData& Query, bool bIsHoming) {
}

void ULightProjectileStatics::RemoveLightProjectilesByActor(const FLightProjectileQueryData& Query) {
}

bool ULightProjectileStatics::IsProjectileFlagSet(const FLightProjectileInitializationData& InitData, ELightProjectileFlag Flag) {
    return false;
}

void ULightProjectileStatics::ForEachLightProjectile(const FLightProjectileQueryData& Query, const FLightProjectileEvent& Callback) {
}

void ULightProjectileStatics::DetonateLightProjectiles(const FLightProjectileQueryData& Query, float StackingEnemyBonusDamage, float MinDetonationDelay, float MaxDetonationDelay) {
}

void ULightProjectileStatics::CreateLightProjectileFromSource(ULightProjectile* SourceProjectile, TSubclassOf<ULightProjectileData> Data, FVector Location, FVector Direction, float Damage) {
}

void ULightProjectileStatics::CreateLightProjectileFromDataAsync(const FLightProjectileInitializationData& InitData, float ForceSpawnTimer) {
}

void ULightProjectileStatics::CreateLightProjectileFromData(const FLightProjectileInitializationData& InitData) {
}

void ULightProjectileStatics::CreateLightProjectile(TSubclassOf<ULightProjectileData> Data, FVector Location, FVector Direction, APawn* Instigator, AActor* Source, AActor* DamageCauser, float Damage, TSubclassOf<UGbxDamageType> DamageType, TSubclassOf<UDamageSource> DamageSource, UImpactData* ImpactDataOverride) {
}

void ULightProjectileStatics::ClearProjectileFlag(FLightProjectileInitializationData& InitData, ELightProjectileFlag Flag) {
}

ULightProjectileStatics::ULightProjectileStatics() {
}

