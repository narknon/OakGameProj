#pragma once
#include "CoreMinimal.h"
#include "CameraBehavior_OffsetViewModel.h"
#include "CameraBehavior_ViewWeaponOffset.generated.h"

UCLASS(EditInlineNew)
class UCameraBehavior_ViewWeaponOffset : public UCameraBehavior_OffsetViewModel {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    bool bSetFOV;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float SplitScreenFOVScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float VerticalSplitScreenFOVScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float QuadSplitScreenFOVScale;
    
    UCameraBehavior_ViewWeaponOffset();
};

