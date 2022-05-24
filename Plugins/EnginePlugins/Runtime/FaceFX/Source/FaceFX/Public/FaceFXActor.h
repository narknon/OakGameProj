#pragma once
#include "CoreMinimal.h"
#include "FaceFXAsset.h"
#include "FaceFXActorData.h"
#include "FaceFXActor.generated.h"

class UFaceFXAnim;

UCLASS()
class FACEFX_API UFaceFXActor : public UFaceFXAsset {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditInstanceOnly)
    TArray<FFaceFXActorData> PlatformData;
    
    UPROPERTY(EditInstanceOnly)
    TArray<UFaceFXAnim*> Animations;
    
public:
    UPROPERTY(EditAnywhere)
    bool bHasBonesFromMultipleSkeletons;
    
    UFaceFXActor();
};

