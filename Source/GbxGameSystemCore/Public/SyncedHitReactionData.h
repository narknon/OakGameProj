#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "Engine/NetSerialization.h"
#include "Engine/NetSerialization.h"
#include "SyncedHitReactionData.generated.h"

class UHitReactionTag;
class UGbxAction;

USTRUCT(BlueprintType)
struct GBXGAMESYSTEMCORE_API FSyncedHitReactionData {
    GENERATED_BODY()
public:
    UPROPERTY()
    UHitReactionTag* Tag;
    
    UPROPERTY()
    TSubclassOf<UGbxAction> Action;
    
    UPROPERTY()
    TSubclassOf<UGbxAction> CensoredAction;
    
    UPROPERTY()
    float DamageAmount;
    
    UPROPERTY()
    FVector_NetQuantizeNormal Direction;
    
    UPROPERTY()
    float Force;
    
    UPROPERTY()
    int32 HitBoneIndex;
    
    UPROPERTY()
    FVector_NetQuantize100 HitLocation;
    
    UPROPERTY()
    uint32 Flags;
    
    FSyncedHitReactionData();
};

