#pragma once
#include "CoreMinimal.h"
#include "PawnAttachCameraModeOptions.generated.h"

USTRUCT(BlueprintType)
struct FPawnAttachCameraModeOptions {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    float AttachingBlendInTimeOverride;
    
    UPROPERTY(EditAnywhere)
    float PersistentBlendInTimeOverride;
    
    UPROPERTY(EditAnywhere)
    float PersistentBlendOutTimeOverride;
    
    UPROPERTY(EditAnywhere)
    float DetachingBlendOutTimeOverride;
    
    UPROPERTY(EditAnywhere)
    FName AttachingMode;
    
    UPROPERTY(EditAnywhere)
    FName PersistentMode;
    
    UPROPERTY(EditAnywhere)
    FName DetachingMode;
    
    OAKGAME_API FPawnAttachCameraModeOptions();
};

