#pragma once
#include "CoreMinimal.h"
#include "GbxDataAsset.h"
#include "ECinematicAudioMode.h"
#include "CinematicModeData.generated.h"

UCLASS()
class GBXGAMESYSTEMCORE_API UCinematicModeData : public UGbxDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    bool bCinematicMode;
    
    UPROPERTY(EditAnywhere)
    bool bHidePlayer;
    
    UPROPERTY(EditAnywhere)
    bool bHidePlayerOwnedVehicles;
    
    UPROPERTY(EditAnywhere)
    bool bHideNPC;
    
    UPROPERTY(EditAnywhere)
    bool bAffectsHUD;
    
    UPROPERTY(EditAnywhere)
    bool bAffectsMovement;
    
    UPROPERTY(EditAnywhere)
    bool bAffectsPawnRotation;
    
    UPROPERTY(EditAnywhere)
    bool bAffectsTurning;
    
    UPROPERTY(EditAnywhere)
    bool bCinematicSplitScreen;
    
    UPROPERTY(EditAnywhere)
    bool bEnableGodMode;
    
    UPROPERTY(EditAnywhere)
    bool bEnableNoTarget;
    
    UPROPERTY(EditAnywhere)
    ECinematicAudioMode AudioMode;
    
    UCinematicModeData();
};

