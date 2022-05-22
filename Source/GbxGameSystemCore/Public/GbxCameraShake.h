#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=CameraShake -FallbackName=CameraShake
#include "GbxCameraShake.generated.h"

UCLASS(EditInlineNew)
class GBXGAMESYSTEMCORE_API UGbxCameraShake : public UCameraShake {
    GENERATED_BODY()
public:
    UGbxCameraShake();
};

