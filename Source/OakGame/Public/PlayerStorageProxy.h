#pragma once
#include "CoreMinimal.h"
#include "AdvancedInteractiveObjectProxy.h"
#include "PlayerStorageProxy.generated.h"

class UAnimSequence;

UCLASS(NonTransient)
class APlayerStorageProxy : public AAdvancedInteractiveObjectProxy {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditDefaultsOnly)
    UAnimSequence* OpenAnim;
    
    UPROPERTY(EditDefaultsOnly)
    UAnimSequence* OpenIdleAnim;
    
    UPROPERTY(EditDefaultsOnly)
    UAnimSequence* CloseAnim;
    
    UPROPERTY(EditDefaultsOnly)
    UAnimSequence* CloseIdleAnim;
    
public:
    APlayerStorageProxy();
};

