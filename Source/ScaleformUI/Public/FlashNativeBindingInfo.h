#pragma once
#include "CoreMinimal.h"
#include "FlashNativeBindingInfo.generated.h"

USTRUCT(BlueprintType)
struct FFlashNativeBindingInfo {
    GENERATED_BODY()
public:
    UPROPERTY(VisibleAnywhere)
    FString InstanceName;
    
    UPROPERTY(VisibleAnywhere)
    FString FullPath;
    
    UPROPERTY(VisibleAnywhere)
    FString ClosestParentInstanceName;
    
    SCALEFORMUI_API FFlashNativeBindingInfo();
};

