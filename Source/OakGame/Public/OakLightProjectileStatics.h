#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "OakLightProjectileInitializationData.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "OakLightProjectileStatics.generated.h"

class AActor;
class ULightProjectileData;

UCLASS(BlueprintType)
class OAKGAME_API UOakLightProjectileStatics : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UOakLightProjectileStatics();
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    static void ThrowLightProjectileFromData(AActor* Thrower, const FOakLightProjectileInitializationData& Data, FName SourceSocket, float MaxPredication, float Speed, float AnglePercent, FRotator DirectionOffset, AActor* TargetOverride, FVector LocalTargetOffset, FName TargetSocket, bool bSpawnAsync);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    static void ThrowLightProjectile(AActor* Thrower, TSubclassOf<ULightProjectileData> Data, int32 Flags, FName SourceSocket, float MaxPredication, float Speed, float AnglePercent, FRotator DirectionOffset, AActor* TargetOverride, FVector LocalTargetOffset, FName TargetSocket, bool bSpawnAsync);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    static void CreateOakLightProjectileFromDataAsync(const FOakLightProjectileInitializationData& InitData, float ForceSpawnTimer);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    static void CreateOakLightProjectileFromData(const FOakLightProjectileInitializationData& InitData);
    
};

