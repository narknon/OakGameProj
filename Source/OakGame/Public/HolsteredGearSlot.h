#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "HolsteredGearSlotOptions.h"
#include "EHolsteredGearState.h"
#include "HolsteredGearAttachmentSlot.h"
#include "HolsteredGearSlot.generated.h"

class UGbxActionComponent;

UCLASS(Transient)
class AHolsteredGearSlot : public AActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY()
    FHolsteredGearSlotOptions Options;
    
    UPROPERTY()
    FHolsteredGearAttachmentSlot AttachmentSlot1P;
    
    UPROPERTY()
    FHolsteredGearAttachmentSlot AttachmentSlot3P;
    
    UPROPERTY()
    AActor* PendingLikenessActor;
    
    UPROPERTY()
    AActor* CurrentLikenessActor;
    
    UPROPERTY(Export)
    UGbxActionComponent* ActionComponent;
    
    UPROPERTY()
    EHolsteredGearState CurrentState;
    
public:
    AHolsteredGearSlot();
};

