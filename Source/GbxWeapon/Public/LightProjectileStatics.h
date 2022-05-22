#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "LightProjectileEventDelegate.h"
#include "LightProjectileQueryData.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "ELightProjectileFlag.h"
#include "UObject/NoExportTypes.h"
#include "ELightProjectileSplitPattern.h"
#include "LightProjectileInitializationData.h"
#include "LightProjectileStatics.generated.h"

class UDamageSource;
class ULightProjectile;
class ULightProjectileData;
class APawn;
class AActor;
class UGbxDamageType;
class UImpactData;

UCLASS(BlueprintType)
class GBXWEAPON_API ULightProjectileStatics : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    ULightProjectileStatics();
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    static void SplitLightProjectile(ULightProjectile* Projectile, TSubclassOf<ULightProjectileData> Data, ELightProjectileSplitPattern Pattern, int32 Count, float SpreadAngle, float RotateAngle, float OffsetDistance, bool bDestroySource);
    
    UFUNCTION(BlueprintCallable)
    static void SetProjectileFlag(UPARAM(Ref) FLightProjectileInitializationData& InitData, ELightProjectileFlag Flag);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    static void SetHomingState(const FLightProjectileQueryData& Query, bool bIsHoming);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    static void RemoveLightProjectilesByActor(const FLightProjectileQueryData& Query);
    
    UFUNCTION(BlueprintPure)
    static bool IsProjectileFlagSet(const FLightProjectileInitializationData& InitData, ELightProjectileFlag Flag);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    static void ForEachLightProjectile(const FLightProjectileQueryData& Query, const FLightProjectileEvent& Callback);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    static void DetonateLightProjectiles(const FLightProjectileQueryData& Query, float StackingEnemyBonusDamage, float MinDetonationDelay, float MaxDetonationDelay);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    static void CreateLightProjectileFromSource(ULightProjectile* SourceProjectile, TSubclassOf<ULightProjectileData> Data, FVector Location, FVector Direction, float Damage);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    static void CreateLightProjectileFromDataAsync(const FLightProjectileInitializationData& InitData, float ForceSpawnTimer);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    static void CreateLightProjectileFromData(const FLightProjectileInitializationData& InitData);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    static void CreateLightProjectile(TSubclassOf<ULightProjectileData> Data, FVector Location, FVector Direction, APawn* Instigator, AActor* Source, AActor* DamageCauser, float Damage, TSubclassOf<UGbxDamageType> DamageType, TSubclassOf<UDamageSource> DamageSource, UImpactData* ImpactDataOverride);
    
    UFUNCTION(BlueprintCallable)
    static void ClearProjectileFlag(UPARAM(Ref) FLightProjectileInitializationData& InitData, ELightProjectileFlag Flag);
    
};

