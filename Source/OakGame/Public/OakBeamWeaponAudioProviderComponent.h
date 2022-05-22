#pragma once
#include "CoreMinimal.h"
#include "OakWeaponAudioProviderBase.h"
#include "OakBeamWeaponAudioProviderComponent.generated.h"

class UWwiseEvent;

UCLASS(EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UOakBeamWeaponAudioProviderComponent : public UOakWeaponAudioProviderBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    UWwiseEvent* BeamStartEvent;
    
    UPROPERTY(EditAnywhere)
    UWwiseEvent* BeamBreakEvent;
    
    UOakBeamWeaponAudioProviderComponent();
};

