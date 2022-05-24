#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "EGbxPathType.h"
#include "UObject/NoExportTypes.h"
#include "GbxNavBlueprintLibrary.generated.h"

class UGbxNavMeshLayer;
class AActor;
class UObject;

UCLASS(BlueprintType)
class GBXNAV_API UGbxNavBlueprintLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UGbxNavBlueprintLibrary();
    UFUNCTION(BlueprintCallable)
    static void SetAINavPathType(AActor* Actor, EGbxPathType PathType);
    
    UFUNCTION(BlueprintCallable)
    static void ResourceUnlockAvoidance(AActor* Actor, FName Reason);
    
    UFUNCTION(BlueprintCallable)
    static void ResourceLockAvoidance(AActor* Actor, FName Reason);
    
    UFUNCTION(BlueprintCallable)
    static void ForceNavMeshLayer(AActor* Actor, UGbxNavMeshLayer* ForcedNavMeshLayer);
    
    UFUNCTION(BlueprintPure)
    static bool FindNavMeshPointForActor(AActor* Actor, const FVector& Point, float Radius, FVector& Result);
    
    UFUNCTION(BlueprintPure)
    static bool FindNavMeshPoint(UObject* WorldContextObject, const FVector& Point, float Radius, FVector& Result, UGbxNavMeshLayer* Layer);
    
};

