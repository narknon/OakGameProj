#pragma once
#include "CoreMinimal.h"
#include "Engine/EngineTypes.h"
#include "TeleportUserEdgeData.h"
#include "GbxUserEdgeState.generated.h"

class AAIController;
class AGbxNavWorld;
class UGbxNavComponent;
class UGbxActionComponent;

USTRUCT(BlueprintType)
struct FGbxUserEdgeState {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Transient)
    FBasedPosition EntryPosition;
    
    UPROPERTY(Transient)
    FBasedPosition ExitPosition;
    
    UPROPERTY(Transient)
    FTeleportUserEdgeData TeleportData;
    
    UPROPERTY(Transient)
    AGbxNavWorld* GbxNavWorld;
    
    UPROPERTY(Export, Transient)
    UGbxNavComponent* NavComp;
    
    UPROPERTY(Export, Transient)
    UGbxActionComponent* GbxActionComp;
    
    UPROPERTY(Transient)
    AAIController* AIController;
    
public:
    GBXNAV_API FGbxUserEdgeState();
};

