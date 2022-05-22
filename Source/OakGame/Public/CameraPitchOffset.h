#pragma once
#include "CoreMinimal.h"
#include "CameraPitchOffset.generated.h"

USTRUCT(BlueprintType)
struct FCameraPitchOffset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float KeyYawAngle;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float ForwardOffset;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float UpwardOffset;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float DampingBankingRatio;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool CloneSymmetricalKey;
    
    OAKGAME_API FCameraPitchOffset();
};

