#pragma once
#include "CoreMinimal.h"
#include "MissionObjectiveReference.h"
#include "CinematicData.generated.h"

class UOakCinematicTag;
class ULevelSequence;
class UCinematicModeData;
class UMediaSource;
class UParticleSystem;

USTRUCT(BlueprintType)
struct FCinematicData {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    UOakCinematicTag* CinematicTag;
    
    UPROPERTY(EditAnywhere)
    ULevelSequence* Sequence;
    
    UPROPERTY(EditAnywhere)
    UMediaSource* Movie;
    
    UPROPERTY(EditAnywhere)
    UCinematicModeData* IntroCinematicMode;
    
    UPROPERTY(EditAnywhere)
    bool bRepeatable;
    
    UPROPERTY(EditAnywhere)
    bool bDisallowCutsceneSkip;
    
    UPROPERTY(EditAnywhere)
    float IntroTime;
    
    UPROPERTY(EditAnywhere)
    UParticleSystem* IntroScreenParticle;
    
    UPROPERTY(EditAnywhere)
    UCinematicModeData* PlayingCinematicMode;
    
    UPROPERTY(EditAnywhere)
    FMissionObjectiveReference MissionObjective;
    
    OAKGAME_API FCinematicData();
};

