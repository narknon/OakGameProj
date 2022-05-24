#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "HitReactionParams.h"
#include "HitReactionState.generated.h"

class UHitReactionData;
class UHitReactionTag;
class UAIDodgeComponent;
class UGbxAction;
class UBrainComponent;
class UDamageComponent;
class UHitReactionLayer;
class UGbxActionComponent;
class AGbxCharacter;

USTRUCT(BlueprintType)
struct GBXGAMESYSTEMCORE_API FHitReactionState {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditAnywhere)
    UHitReactionData* HitReactionData;
    
    UPROPERTY(EditAnywhere)
    TArray<UHitReactionTag*> NoLockTags;
    
    UPROPERTY(EditAnywhere)
    UHitReactionTag* BackupDeathTag;
    
    UPROPERTY(EditAnywhere)
    TSubclassOf<UGbxAction> DefaultDeathAction;
    
    UPROPERTY(EditAnywhere)
    bool bCensorDeaths;
    
    UPROPERTY(Transient)
    UHitReactionData* CurrHitReactionData;
    
    UPROPERTY(Export, Transient)
    UDamageComponent* DamageComp;
    
    UPROPERTY(Export, Transient)
    UAIDodgeComponent* DodgeComp;
    
    UPROPERTY(Export, Transient)
    UGbxActionComponent* ActionComp;
    
    UPROPERTY(Export, Transient)
    UBrainComponent* BrainComp;
    
    UPROPERTY(Transient)
    FName DeathOverrideId;
    
    UPROPERTY(Transient)
    UHitReactionTag* DeathOverride;
    
    UPROPERTY(Transient)
    TArray<TSubclassOf<UHitReactionLayer>> LiveLayers;
    
    UPROPERTY(Transient)
    TArray<TSubclassOf<UHitReactionLayer>> DeathLayers;
    
    UPROPERTY(Transient)
    TMap<UHitReactionTag*, float> TagTimeStartMap;
    
    UPROPERTY(Transient)
    TMap<UHitReactionTag*, float> TagTimeEndMap;
    
    UPROPERTY(Transient)
    UHitReactionTag* ActiveTag;
    
    UPROPERTY(Transient)
    TArray<FHitReactionParams> Hits;
    
    UPROPERTY(Transient)
    AGbxCharacter* SoundCharacter;
    
public:
    FHitReactionState();
};

