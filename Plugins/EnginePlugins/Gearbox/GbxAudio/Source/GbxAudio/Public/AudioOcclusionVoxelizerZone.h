#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "AudioOcclusionVoxelizerZone.generated.h"

UCLASS()
class GBXAUDIO_API AAudioOcclusionVoxelizerZone : public AActor {
    GENERATED_BODY()
public:
    AAudioOcclusionVoxelizerZone();
    UFUNCTION()
    void Voxelize();
    
    UFUNCTION()
    void ExportAsRLE();
    
    UFUNCTION()
    void ExportAsRaw();
    
};

