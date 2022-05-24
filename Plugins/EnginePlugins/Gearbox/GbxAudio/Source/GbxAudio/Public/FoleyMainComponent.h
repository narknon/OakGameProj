#pragma once
#include "CoreMinimal.h"
#include "ExtraFoleyParameter.h"
#include "Components/ActorComponent.h"
#include "FoleyEventParams.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "FoleyMainComponent.generated.h"

class UWwiseEvent;
class UFoleyAccessoryComponent;
class UWwiseSwitch;

UCLASS(BlueprintType, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class GBXAUDIO_API UFoleyMainComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UWwiseEvent* FoleyMainWwiseEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UWwiseEvent* LoopStartWwiseEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UWwiseEvent* FootstepWwiseEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<UWwiseEvent*> PerFootFootstepWwiseEvents;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UWwiseSwitch* CharacterSizeSwitch;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float FoleyVolume;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float FoleyPitch;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float FootstepVolume;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float FootstepPitch;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<FName> FootstepFoleyComponentTags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float FoleyAccessoryVolume;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float FoleyAccessoryPitch;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<FExtraFoleyParameter> ExtraParameters;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere)
    float AttenuationScalingFactor;
    
    UPROPERTY(Transient)
    FFoleyEventParams CachedFootstepParams;
    
    UPROPERTY(Transient)
    UWwiseSwitch* LastMaterialSwitch;
    
    UPROPERTY(Transient)
    UWwiseEvent* SurfaceModifierEvent;
    
    UPROPERTY(Transient)
    float SurfaceModifierVolume;
    
    UPROPERTY(Transient)
    float SurfaceModifierFootstepVolumeMultiplier;
    
    UPROPERTY(Export, Transient)
    TArray<UFoleyAccessoryComponent*> AssociatedFoleyAccessories;
    
    UFoleyMainComponent();
    UFUNCTION(BlueprintCallable)
    void SetSurfaceModifier(UWwiseEvent* PlayEvent, float Volume, float FootstepVolumeMultiplier);
    
    UFUNCTION()
    void PlayFootstepEvent(FFoleyEventParams EventParams);
    
    UFUNCTION(BlueprintCallable)
    void PlayFootstep(FVector FootstepLocation, FRotator FootstepRotation, UWwiseSwitch* MaterialSwitch, float VolumeAdjustment, float PitchAdjustment, UWwiseEvent* ConfigureEvent, bool bPreview);
    
};

