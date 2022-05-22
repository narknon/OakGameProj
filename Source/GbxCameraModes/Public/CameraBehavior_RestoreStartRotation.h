#pragma once
#include "CoreMinimal.h"
#include "CameraBehavior.h"
#include "UObject/NoExportTypes.h"
#include "CameraBehavior_RestoreStartRotation.generated.h"

UCLASS(EditInlineNew)
class GBXCAMERAMODES_API UCameraBehavior_RestoreStartRotation : public UCameraBehavior {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FRotator Rotation;
    
public:
    UCameraBehavior_RestoreStartRotation();
};

