#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "ForceSelection.h"
#include "UObject/NoExportTypes.h"
#include "HitReactionBlueprintLibrary.generated.h"

class UHitReactionData;
class UHitReactionLayer;
class UHitReactionTag;
class AActor;
class UGbxAction;
class UObject;

UCLASS(BlueprintType)
class GBXGAMESYSTEMCORE_API UHitReactionBlueprintLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UHitReactionBlueprintLibrary();
    UFUNCTION(BlueprintCallable)
    static void SetHitReactionData(AActor* Actor, UHitReactionData* HitReactionData);
    
    UFUNCTION(BlueprintCallable)
    static void ScriptHitReaction(AActor* Actor, AActor* Causer, UHitReactionTag* Tag, FVector LocalHitDirection, FName BoneName, FForceSelection Force);
    
    UFUNCTION(BlueprintCallable)
    static void ScriptDeath(AActor* Actor, AActor* Causer, UHitReactionTag* Tag, FVector LocalHitDirection, FName BoneName, FForceSelection Force);
    
    UFUNCTION(BlueprintCallable)
    static void ResourceUnlockHitReactions(AActor* Actor, FName Reason);
    
    UFUNCTION(BlueprintCallable)
    static void ResourceLockHitReactions(AActor* Actor, FName Reason);
    
    UFUNCTION(BlueprintCallable)
    static void RemoveHitReactionLiveLayer(AActor* Actor, TSubclassOf<UHitReactionLayer> Layer);
    
    UFUNCTION(BlueprintCallable)
    static void RemoveHitReactionDeathLayer(AActor* Actor, TSubclassOf<UHitReactionLayer> Layer);
    
private:
    UFUNCTION(BlueprintPure)
    static FVector K2_GetHitLocationFromAction(UGbxAction* Action);
    
    UFUNCTION(BlueprintPure)
    static FVector K2_GetHitDirectionFromAction(UGbxAction* Action, bool bLocalSpace);
    
    UFUNCTION(BlueprintPure)
    static UObject* K2_GetHitCauserFromAction(UGbxAction* Action);
    
    UFUNCTION(BlueprintPure)
    static float K2_GetHealthPercentFromAction(UGbxAction* Action);
    
    UFUNCTION(BlueprintPure)
    static float K2_GetForceFromAction(UGbxAction* Action);
    
    UFUNCTION(BlueprintPure)
    static int32 K2_GetBoneIndexFromAction(UGbxAction* Action);
    
public:
    UFUNCTION(BlueprintPure)
    static bool IsHitReactionTagActive(AActor* Actor, UHitReactionTag* Tag);
    
    UFUNCTION(BlueprintCallable)
    static void AddHitReactionLiveLayer(AActor* Actor, TSubclassOf<UHitReactionLayer> Layer);
    
    UFUNCTION(BlueprintCallable)
    static void AddHitReactionDeathLayer(AActor* Actor, TSubclassOf<UHitReactionLayer> Layer);
    
};

