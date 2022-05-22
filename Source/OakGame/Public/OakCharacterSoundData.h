#pragma once
#include "CoreMinimal.h"
#include "CharacterSoundData.h"
#include "InheritableSoundMap.h"
#include "OakCharacterSoundData.generated.h"

class UWwiseEvent;

UCLASS()
class UOakCharacterSoundData : public UCharacterSoundData {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FInheritableSoundMap TiredSoundOverrides;
    
    UPROPERTY(EditAnywhere)
    bool bOverrideFirePainLoop;
    
    UPROPERTY(EditAnywhere)
    UWwiseEvent* FirePainLoop;
    
    UPROPERTY(EditAnywhere)
    UWwiseEvent* FirePainLoopStop;
    
    UPROPERTY(EditAnywhere)
    bool bOverrideCorrosivePainLoop;
    
    UPROPERTY(EditAnywhere)
    UWwiseEvent* CorrosivePainLoop;
    
    UPROPERTY(EditAnywhere)
    UWwiseEvent* CorrosivePainLoopStop;
    
    UPROPERTY(EditAnywhere)
    bool bOverrideShockPainLoop;
    
    UPROPERTY(EditAnywhere)
    UWwiseEvent* ShockPainLoop;
    
    UPROPERTY(EditAnywhere)
    UWwiseEvent* ShockPainLoopStop;
    
    UPROPERTY()
    bool bOverrideSlagPainLoop;
    
    UPROPERTY()
    UWwiseEvent* SlagPainLoop;
    
    UPROPERTY()
    UWwiseEvent* SlagPainLoopStop;
    
    UPROPERTY(EditAnywhere)
    bool bOverrideCryoPainLoop;
    
    UPROPERTY(EditAnywhere)
    UWwiseEvent* CryoPainLoop;
    
    UPROPERTY(EditAnywhere)
    UWwiseEvent* CryoPainLoopStop;
    
    UPROPERTY(EditAnywhere)
    bool bOverrideRadiationPainLoop;
    
    UPROPERTY(EditAnywhere)
    UWwiseEvent* RadiationPainLoop;
    
    UPROPERTY(EditAnywhere)
    UWwiseEvent* RadiationPainLoopStop;
    
    UOakCharacterSoundData();
};

