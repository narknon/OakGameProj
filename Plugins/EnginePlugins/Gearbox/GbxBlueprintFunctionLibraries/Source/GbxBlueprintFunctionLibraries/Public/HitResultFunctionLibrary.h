#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "Engine/EngineTypes.h"
#include "UObject/NoExportTypes.h"
#include "HitResultFunctionLibrary.generated.h"

class UPrimitiveComponent;
class UPhysicalMaterial;
class AActor;

UCLASS(BlueprintType)
class UHitResultFunctionLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UHitResultFunctionLibrary();
    UFUNCTION(BlueprintPure)
    static bool IsBlockingHit(FHitResult HitResult);
    
    UFUNCTION(BlueprintPure)
    static UPhysicalMaterial* GetPhysMaterial(FHitResult HitResult);
    
    UFUNCTION(BlueprintPure)
    static FVector GetHitNormal(FHitResult HitResult);
    
    UFUNCTION(BlueprintPure)
    static FVector GetHitLocation(FHitResult HitResult);
    
    UFUNCTION(BlueprintPure)
    static float GetHitDistance(FHitResult HitResult);
    
    UFUNCTION(BlueprintPure)
    static UPrimitiveComponent* GetHitComponent(FHitResult HitResult);
    
    UFUNCTION(BlueprintPure)
    static AActor* GetHitActor(FHitResult HitResult);
    
    UFUNCTION(BlueprintPure)
    static FName GetBoneName(FHitResult HitResult);
    
};

