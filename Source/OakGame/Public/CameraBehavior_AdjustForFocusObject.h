#pragma once
#include "CoreMinimal.h"
#include "CameraBehavior.h"
#include "CameraBehavior_AdjustForFocusObject.generated.h"

class UFocusableComponent;

UCLASS(EditInlineNew)
class UCameraBehavior_AdjustForFocusObject : public UCameraBehavior {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    float CamReturnTime;
    
    UPROPERTY(EditAnywhere)
    float CamMovementThreshold;
    
    UPROPERTY(EditAnywhere)
    float CamMovementSpeed_Fast;
    
    UPROPERTY(EditAnywhere)
    float CamMovementSpeed_Slow;
    
private:
    UPROPERTY(Export, Transient)
    UFocusableComponent* LastFocusObject;
    
public:
    UCameraBehavior_AdjustForFocusObject();
};

