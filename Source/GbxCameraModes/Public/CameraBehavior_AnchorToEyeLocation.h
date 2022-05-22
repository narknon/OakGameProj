#pragma once
#include "CoreMinimal.h"
#include "CameraBehavior.h"
#include "CameraBehavior_AnchorToEyeLocation.generated.h"

UCLASS(EditInlineNew)
class GBXCAMERAMODES_API UCameraBehavior_AnchorToEyeLocation : public UCameraBehavior {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    uint8 bSetRotation: 1;
    
    UCameraBehavior_AnchorToEyeLocation();
};

