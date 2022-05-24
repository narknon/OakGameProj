#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "GbxDataAsset.h"
#include "MusicSection.h"
#include "EOakMusicSection.h"
#include "OakMusicData.generated.h"

class UOakMusicSystemConfiguration;
class UWwiseEvent;
class UOakMusicAmbientPerformer;

UCLASS(BlueprintType)
class UOakMusicData : public UGbxDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UOakMusicSystemConfiguration* SystemConfiguration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UWwiseEvent* StartMusicEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UWwiseEvent* StopMusicEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 LayerUpdateFrequencyInBars;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 NumPickupBeats;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TMap<EOakMusicSection, FMusicSection> AssociatedMusicSections;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TSubclassOf<UOakMusicAmbientPerformer> AmbientMusicPerformerClass;
    
    UOakMusicData();
};

