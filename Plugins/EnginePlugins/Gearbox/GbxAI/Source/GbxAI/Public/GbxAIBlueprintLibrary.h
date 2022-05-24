#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "BehaviorTree/BehaviorTreeTypes.h"
#include "UObject/NoExportTypes.h"
#include "ETerritoryType.h"
#include "GbxAIBlueprintLibrary.generated.h"

class UGbxNavAreaData;
class AActor;
class UHavokPathFindingData;
class UBlackboardComponent;
class UBTNode;
class UAIAction;

UCLASS(BlueprintType)
class GBXAI_API UGbxAIBlueprintLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UGbxAIBlueprintLibrary();
    UFUNCTION(BlueprintCallable)
    static void SetPerceivableToAllAI(AActor* Actor, bool bPerceivable);
    
    UFUNCTION(BlueprintCallable)
    static void SetAIPathFindingData(AActor* InActor, UHavokPathFindingData* PathFindingData);
    
    UFUNCTION(BlueprintCallable)
    static void SetAINavAreaData(AActor* InActor, UGbxNavAreaData* NavAreaData);
    
    UFUNCTION(BlueprintCallable)
    static void ResetTeamForAllAIChildren(AActor* Actor);
    
    UFUNCTION(BlueprintPure)
    static bool IsActorThreatened(AActor* InActor);
    
    UFUNCTION(BlueprintCallable)
    static bool GetValueAsActorAndLocation(UBlackboardComponent* Blackboard, const FBlackboardKeySelector& Key, AActor*& Actor, FVector& Location);
    
    UFUNCTION(BlueprintCallable)
    static bool GetBlackboardValueAsActorAndLocation(UBTNode* BTNode, const FBlackboardKeySelector& Key, AActor*& Actor, FVector& Location);
    
    UFUNCTION(BlueprintCallable)
    static void AIScriptedUseWeapon(AActor* Actor, bool bUseWeapon);
    
    UFUNCTION(BlueprintCallable)
    static void AIScriptedAction(AActor* Actor, TSubclassOf<UAIAction> Action);
    
    UFUNCTION(BlueprintPure)
    static bool AIIsWithinTerritory(AActor* AIActor, ETerritoryType Zone);
    
};

