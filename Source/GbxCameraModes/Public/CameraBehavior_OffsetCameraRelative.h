#pragma once
#include "CoreMinimal.h"
#include "CameraBehavior.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "CameraBehavior_OffsetCameraRelative.generated.h"

UCLASS(EditInlineNew)
class GBXCAMERAMODES_API UCameraBehavior_OffsetCameraRelative : public UCameraBehavior {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FVector LocationOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FRotator RotationOffset;
    
    UCameraBehavior_OffsetCameraRelative();
};

