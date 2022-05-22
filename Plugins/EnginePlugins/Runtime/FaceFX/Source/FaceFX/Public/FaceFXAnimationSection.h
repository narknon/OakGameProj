#pragma once
#include "CoreMinimal.h"
#include "FaceFXAnimId.h"
#include "MovieSceneSection.h"
#include "FaceFXSkelMeshComponentId.h"
#include "FaceFXAnimationSection.generated.h"

class UFaceFXAnim;

UCLASS(MinimalAPI)
class UFaceFXAnimationSection : public UMovieSceneSection {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditAnywhere)
    FFaceFXSkelMeshComponentId SkelMeshComponentId;
    
    UPROPERTY(EditAnywhere)
    FFaceFXAnimId AnimationId;
    
    UPROPERTY(EditAnywhere)
    TSoftObjectPtr<UFaceFXAnim> Animation;
    
    UPROPERTY(EditAnywhere)
    float StartOffset;
    
    UPROPERTY(EditAnywhere)
    float EndOffset;
    
    UPROPERTY(Transient)
    uint8 bIsAnimationDurationLoaded: 1;
    
    UPROPERTY(Transient)
    float AnimationDuration;
    
public:
    UFaceFXAnimationSection();
};

