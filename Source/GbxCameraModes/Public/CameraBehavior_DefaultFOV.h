#pragma once
#include "CoreMinimal.h"
#include "CameraBehavior.h"
#include "CameraBehavior_DefaultFOV.generated.h"

UCLASS(EditInlineNew)
class GBXCAMERAMODES_API UCameraBehavior_DefaultFOV : public UCameraBehavior {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float Scale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float ScaleSplitScreenHorizontal;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float ScaleSplitScreenVertical;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float ScaleSplitScreenQuad;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float MaxFOV;
    
    UCameraBehavior_DefaultFOV();
};

