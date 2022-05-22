#pragma once
#include "CoreMinimal.h"
#include "Matinee/InterpTrack.h"
#include "FaceFXTrackKey.h"
#include "FaceFXMatineeControl.generated.h"

UCLASS(CollapseCategories, MinimalAPI)
class UFaceFXMatineeControl : public UInterpTrack {
    GENERATED_BODY()
public:
private:
    UPROPERTY()
    TArray<FFaceFXTrackKey> Keys;
    
public:
    UFaceFXMatineeControl();
};

