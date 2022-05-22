#pragma once
#include "CoreMinimal.h"
#include "CameraBehavior.h"
#include "UObject/NoExportTypes.h"
#include "CameraBehavior_OffsetAbsolute.generated.h"

UCLASS(EditInlineNew)
class GBXCAMERAMODES_API UCameraBehavior_OffsetAbsolute : public UCameraBehavior {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FVector LocationOffset;
    
    UCameraBehavior_OffsetAbsolute();
};

