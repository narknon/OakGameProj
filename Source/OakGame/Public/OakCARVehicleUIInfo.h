#pragma once
#include "CoreMinimal.h"
#include "CARPreviewMesh.h"
#include "OakCARMenuStatValue.h"
#include "CARPreviewParticleSystem.h"
#include "UObject/NoExportTypes.h"
#include "Engine/Scene.h"
#include "OakCARVehicleUIInfo.generated.h"

class UWwiseEvent;
class UTexture;

USTRUCT(BlueprintType)
struct OAKGAME_API FOakCARVehicleUIInfo {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FText DisplayName;
    
    UPROPERTY(EditAnywhere)
    FText Description;
    
    UPROPERTY(EditAnywhere)
    TSoftObjectPtr<UTexture> PartIconTexture;
    
    UPROPERTY(EditAnywhere)
    TArray<FOakCARMenuStatValue> DisplayStats;
    
    UPROPERTY(Transient)
    bool bIsLoading;
    
    UPROPERTY(Transient)
    bool bIsEmpty;
    
    UPROPERTY(Transient)
    bool bIsLocked;
    
    UPROPERTY(EditAnywhere)
    TArray<FCARPreviewMesh> PreviewMesh;
    
    UPROPERTY(EditAnywhere)
    TArray<FCARPreviewParticleSystem> PreviewParticles;
    
    UPROPERTY(EditAnywhere)
    UWwiseEvent* OnEquipSound;
    
    UPROPERTY(EditAnywhere)
    bool OverridePreviewLookAtTransform;
    
    UPROPERTY(EditAnywhere)
    FTransform PreviewLookAtTransform;
    
    UPROPERTY(EditAnywhere)
    bool BlendPostProcess;
    
    UPROPERTY(EditAnywhere)
    FPostProcessSettings PostProcessSetting;
    
    FOakCARVehicleUIInfo();
};

