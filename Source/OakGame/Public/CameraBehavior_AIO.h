#pragma once
#include "CoreMinimal.h"
#include "CameraBehavior.h"
#include "UObject/NoExportTypes.h"
#include "CameraBehavior_AIO.generated.h"

class UAIO_CameraData;
class AAdvancedInteractiveObject;
class AAdvancedInteractiveObjectProxy;

UCLASS(EditInlineNew)
class UCameraBehavior_AIO : public UCameraBehavior {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditAnywhere)
    FVector FirstPersonComponentTranslationOffset;
    
    UPROPERTY(Transient)
    AAdvancedInteractiveObject* CurrentAIO;
    
    UPROPERTY(Transient)
    AAdvancedInteractiveObjectProxy* CurrentProxy;
    
    UPROPERTY(Transient)
    UAIO_CameraData* CameraData;
    
public:
    UCameraBehavior_AIO();
};

