#pragma once
#include "CoreMinimal.h"
#include "CameraBehavior.h"
#include "UObject/NoExportTypes.h"
#include "CameraBehavior_LimitLook.generated.h"

UCLASS(EditInlineNew)
class GBXCAMERAMODES_API UCameraBehavior_LimitLook : public UCameraBehavior {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FRotator Min;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FRotator Max;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    uint8 bYawRelativeToBase: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    uint8 bPitchRelativeToBase: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    uint8 bRollRelativeToBase: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    uint8 bSnapOnStart: 1;
    
    UCameraBehavior_LimitLook();
};

