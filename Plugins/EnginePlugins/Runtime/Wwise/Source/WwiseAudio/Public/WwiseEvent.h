#pragma once
#include "CoreMinimal.h"
#include "WwiseObject.h"
#include "UObject/NoExportTypes.h"
#include "WwiseEvent.generated.h"

class UWwiseSwitch;
class UWwiseBank;

UCLASS(BlueprintType)
class WWISEAUDIO_API UWwiseEvent : public UWwiseObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UWwiseBank* RequiredBank;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    float MaxAttenuationRadius;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool bEcho;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FName ClosedCaptionName;
    
    UPROPERTY(VisibleAnywhere)
    FFloatInterval DurationRange;
    
    UPROPERTY(EditAnywhere)
    TArray<UWwiseSwitch*> ActionSetSwitches;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    uint8 bOneShot: 1;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    uint8 bSimple: 1;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    uint8 bHighImportance: 1;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    uint8 bLocalizedVoice: 1;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    uint8 bUsesSpeedParameter: 1;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    uint8 bUsesApproachSpeedParameter: 1;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    uint8 bUsesRotationalSpeedParameter: 1;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    uint8 bUsesComponentRelativeSpeedParameter: 1;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    uint8 bUsesPhysicalMaterialSwitch: 1;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    uint8 bSupportsLiveVoice: 1;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    uint8 bSupportsEchoVoice: 1;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    uint8 bEchoWasForcedOff: 1;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    uint8 bUsesPerspectiveParameter: 1;
    
protected:
    UPROPERTY(Transient)
    int32 PrepareEventRefCount;
    
    UPROPERTY(Transient)
    bool bPrepareEventDidLoadAllGameSyncs;
    
public:
    UWwiseEvent();
    UFUNCTION(BlueprintPure)
    float GetMaxDuration() const;
    
};

