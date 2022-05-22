#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Volume.h"
#include "GbxBlockingVolume.generated.h"

UCLASS()
class GBXBLOCKINGVOLUMES_API AGbxBlockingVolume : public AVolume {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    bool bAlwaysRender;
    
    UPROPERTY(EditAnywhere)
    bool bBlockRockets;
    
    UPROPERTY(EditAnywhere)
    bool bBlockProjectiles;
    
    UPROPERTY(EditAnywhere)
    bool bBlockTossed;
    
    UPROPERTY(EditAnywhere)
    bool bBlockEnemyPawns;
    
    UPROPERTY(EditAnywhere)
    bool bBlockEnemyVehicles;
    
    UPROPERTY(EditAnywhere)
    bool bBlockFriendlyPawns;
    
    UPROPERTY(EditAnywhere)
    bool bBlockPlayerVehicles;
    
    UPROPERTY(EditAnywhere)
    bool bBlockUsingThings;
    
    UPROPERTY(EditAnywhere)
    bool bAllowStandingOn;
    
    UPROPERTY(EditAnywhere)
    bool bBlockCamera;
    
    UPROPERTY()
    bool bEnemyPawnsPropEnabled;
    
    UPROPERTY()
    bool bEnemyVehiclesPropEnabled;
    
    UPROPERTY()
    bool bFriendlyPawnsPropEnabled;
    
    UPROPERTY()
    bool bPlayerVehiclesPropEnabled;
    
    AGbxBlockingVolume();
};

