#pragma once
#include "CoreMinimal.h"
#include "CameraBehavior.h"
#include "CameraBehavior_ViewWeaponFOV.generated.h"

UCLASS(EditInlineNew)
class UCameraBehavior_ViewWeaponFOV : public UCameraBehavior {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float SplitScreenScale;
    
    UCameraBehavior_ViewWeaponFOV();
};

