#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "PhotoModeOptionSet.h"
#include "GbxDataAsset.h"
#include "PhotoModeGlobals.generated.h"

class UGbxMenuData;
class APhotoModeController;
class UGameStatData;
class UTexture;

UCLASS()
class OAKGAME_API UPhotoModeGlobals : public UGbxDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    UGbxMenuData* PhotoModeMenuData;
    
    UPROPERTY(EditAnywhere)
    TSubclassOf<APhotoModeController> PhotoModeControllerType;
    
    UPROPERTY(EditAnywhere)
    TArray<FPhotoModeOptionSet> PhotoModeOptions;
    
    UPROPERTY(EditAnywhere)
    float MinFOV;
    
    UPROPERTY(EditAnywhere)
    float MaxFOV;
    
    UPROPERTY(EditAnywhere)
    float MinDOFIntensity;
    
    UPROPERTY(EditAnywhere)
    float MaxDOFIntensity;
    
    UPROPERTY(EditAnywhere)
    float MinFocalDistance;
    
    UPROPERTY(EditAnywhere)
    float MaxFocalDistance;
    
    UPROPERTY(EditAnywhere)
    float MinFocalRegion;
    
    UPROPERTY(EditAnywhere)
    float MaxFocalRegion;
    
    UPROPERTY(EditAnywhere)
    float MinContrast;
    
    UPROPERTY(EditAnywhere)
    float MaxContrast;
    
    UPROPERTY(EditAnywhere)
    float MinSaturation;
    
    UPROPERTY(EditAnywhere)
    float MaxSaturation;
    
    UPROPERTY(EditAnywhere)
    float MinGamma;
    
    UPROPERTY(EditAnywhere)
    float MaxGamma;
    
    UPROPERTY(EditAnywhere)
    float MinGain;
    
    UPROPERTY(EditAnywhere)
    float MaxGain;
    
    UPROPERTY(EditAnywhere)
    float MinQuality;
    
    UPROPERTY(EditAnywhere)
    float MaxQuality;
    
    UPROPERTY(EditAnywhere)
    float MinRoll;
    
    UPROPERTY(EditAnywhere)
    float MaxRoll;
    
    UPROPERTY(EditAnywhere)
    float CameraModeBlendInTime;
    
    UPROPERTY(EditAnywhere)
    float CameraModeBlendOutTime;
    
    UPROPERTY(EditAnywhere)
    float CameraForwardBackScale;
    
    UPROPERTY(EditAnywhere)
    float CameraForwardBackClamp;
    
    UPROPERTY(EditAnywhere)
    float CameraLeftRightScale;
    
    UPROPERTY(EditAnywhere)
    float CameraLeftRightClamp;
    
    UPROPERTY(EditAnywhere)
    float CameraUpDownScale;
    
    UPROPERTY(EditAnywhere)
    float CameraUpDownClamp;
    
    UPROPERTY(EditAnywhere)
    float CameraDeadZone;
    
    UPROPERTY(EditAnywhere)
    float CameraInputPitchScale;
    
    UPROPERTY(EditAnywhere)
    float CameraInputYawScale;
    
    UPROPERTY(EditAnywhere)
    float MinFringeIntensity;
    
    UPROPERTY(EditAnywhere)
    float MaxFringeIntensity;
    
    UPROPERTY(EditAnywhere)
    TArray<UTexture*> FilterList;
    
    UPROPERTY(EditDefaultsOnly)
    UGameStatData* StylizeStat;
    
    UPhotoModeGlobals();
};

