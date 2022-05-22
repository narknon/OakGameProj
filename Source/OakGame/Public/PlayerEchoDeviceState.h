#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "EchoDeviceButtonState.h"
#include "EchoDeviceTargetFXPosition.h"
#include "PlayerEchoDeviceState.generated.h"

class AEchoDevice;
class UDataTable;

USTRUCT(BlueprintType)
struct FPlayerEchoDeviceState {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<AEchoDevice> EchoDeviceBlueprint;
    
    UPROPERTY(EditDefaultsOnly)
    UDataTable* OverrideScreenDataTable;
    
    UPROPERTY(EditDefaultsOnly)
    float OffsetInterpSpeed;
    
    UPROPERTY(EditDefaultsOnly)
    float RotationInterpSpeed;
    
    UPROPERTY(EditDefaultsOnly)
    FVector2D BaseScreenPositionOffset;
    
    UPROPERTY(EditDefaultsOnly)
    float DepthOffset;
    
    UPROPERTY(Transient)
    AEchoDevice* EchoDevice;
    
    UPROPERTY(Transient)
    bool bIsAttached;
    
private:
    UPROPERTY(Transient)
    FName IdleScreenName;
    
    UPROPERTY(Transient)
    FName CurrentScreenName;
    
    UPROPERTY(Transient)
    FName NextScreenName;
    
    UPROPERTY(Transient)
    FEchoDeviceButtonState ButtonStates[3];
    
    UPROPERTY(Transient)
    FVector2D DPadAxes;
    
    UPROPERTY(Transient)
    FVector2D LastDPadAxes;
    
    UPROPERTY(Transient)
    FName CurrentMenuName;
    
    UPROPERTY(Transient)
    FVector2D CurrentScreenPosition;
    
    UPROPERTY(Transient)
    FRotator CurrentRotationOffset;
    
    UPROPERTY(Transient)
    FEchoDeviceTargetFXPosition ProjectionFXPosition;
    
    UPROPERTY(Transient)
    FTransform CachedInMenuFXTransform;
    
public:
    OAKGAME_API FPlayerEchoDeviceState();
};

