#pragma once
#include "CoreMinimal.h"
#include "InventoryAspectData.h"
#include "WeaponAudioStreamingAspectData.generated.h"

class UWwiseEvent;

UCLASS(EditInlineNew)
class UWeaponAudioStreamingAspectData : public UInventoryAspectData {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    TArray<UWwiseEvent*> EventsToPrepareForStreaming;
    
    UWeaponAudioStreamingAspectData();
};

