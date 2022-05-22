#pragma once
#include "CoreMinimal.h"
#include "Matinee/InterpTrackInst.h"
#include "FaceFXMatineeControlInst.generated.h"

UCLASS(MinimalAPI)
class UFaceFXMatineeControlInst : public UInterpTrackInst {
    GENERATED_BODY()
public:
    UPROPERTY(Transient)
    float LastUpdatePosition;
    
    UFaceFXMatineeControlInst();
};

