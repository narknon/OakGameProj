#pragma once
#include "CoreMinimal.h"
#include "CameraBehavior.h"
#include "CameraBehavior_LimitPitch.generated.h"

UCLASS(EditInlineNew)
class GBXCAMERAMODES_API UCameraBehavior_LimitPitch : public UCameraBehavior {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float MinPitch;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float MaxPitch;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bUseInitialPitch;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float InitialPitch;
    
    UCameraBehavior_LimitPitch();
};

