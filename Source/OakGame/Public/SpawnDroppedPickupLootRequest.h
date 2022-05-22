#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "AttributeEffectData.h"
#include "ESpawnDroppedPickupLootRequestType.h"
#include "SelectedInventoryInfo.h"
#include "ELootInstancingPolicy.h"
#include "EPickupLootAttachmentMode.h"
#include "SpawnDroppedPickupLootAsyncDelegateDelegate.h"
#include "SpawnDroppedPickupLootRequest.generated.h"

class AOakPlayerController;
class AActor;
class ULootSpawnPatternData;
class UItemPoolListInterface;
class UGbxAction;
class USceneComponent;

USTRUCT(BlueprintType)
struct OAKGAME_API FSpawnDroppedPickupLootRequest {
    GENERATED_BODY()
public:
    UPROPERTY()
    AActor* ContextActor;
    
    UPROPERTY()
    TArray<FSelectedInventoryInfo> SelectedInventoryInfos;
    
    UPROPERTY(BlueprintReadWrite)
    UItemPoolListInterface* ItemPools;
    
    UPROPERTY(BlueprintReadWrite)
    ELootInstancingPolicy InstancingPolicy;
    
    UPROPERTY(BlueprintReadWrite)
    AOakPlayerController* PlayerToInstanceFor;
    
    UPROPERTY(BlueprintReadWrite)
    bool bStartHidden;
    
    UPROPERTY(BlueprintReadWrite)
    bool bRandomizeActivateDelay;
    
    UPROPERTY(BlueprintReadWrite)
    float ActivateDelay;
    
    UPROPERTY(BlueprintReadWrite)
    float MaxSpawnDelay;
    
    UPROPERTY(BlueprintReadWrite)
    float InitialLootMassScale;
    
    UPROPERTY()
    TSubclassOf<UGbxAction> LootSpawnAction;
    
    UPROPERTY(BlueprintReadWrite)
    FName SocketName;
    
    UPROPERTY(BlueprintReadWrite)
    ESpawnDroppedPickupLootRequestType RequestType;
    
    UPROPERTY(BlueprintReadWrite)
    TArray<FAttributeEffectData> AttributeEffects;
    
    UPROPERTY(BlueprintReadWrite)
    bool bDroppedFromAI;
    
    UPROPERTY(BlueprintReadWrite)
    ULootSpawnPatternData* DropPattern;
    
    UPROPERTY(Export)
    USceneComponent* AttachComponent;
    
    UPROPERTY(BlueprintReadWrite)
    EPickupLootAttachmentMode AttachmentMode;
    
    UPROPERTY(BlueprintReadWrite)
    FSpawnDroppedPickupLootAsyncDelegate PickupSpawned;
    
    FSpawnDroppedPickupLootRequest();
};

