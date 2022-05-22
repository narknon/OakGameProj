#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "OakMusicAmbientPerformer.generated.h"

class AOakMusicProvider;

UCLASS(Blueprintable)
class UOakMusicAmbientPerformer : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, Transient)
    float ThreatLevel;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    float InterestLevel;
    
    UOakMusicAmbientPerformer();
    UFUNCTION(BlueprintImplementableEvent)
    void Tick(float AudioTimeSeconds);
    
    UFUNCTION(BlueprintImplementableEvent)
    void StopAmbientMusic();
    
    UFUNCTION(BlueprintImplementableEvent)
    void BeginAmbientMusic(AOakMusicProvider* MusicProvider, float AudioTimeSeconds);
    
};

