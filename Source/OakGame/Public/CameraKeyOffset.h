#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "CameraKeyOffset.generated.h"

USTRUCT(BlueprintType)
struct FCameraKeyOffset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool TeleportFromStart;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FVector LookAtLocationOffset;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FVector LocalCameraLocationOffset;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FRotator LocalCameraRotationOffset;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float AddedFOV;
    
    OAKGAME_API FCameraKeyOffset();
};

