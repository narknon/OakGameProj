#pragma once
#include "CoreMinimal.h"
#include "EnvQueryParams.h"
#include "AIAspectSettings_UseCover.h"
#include "AIAction_Priority.h"
#include "GbxQueryOptions.h"
#include "AIAspectSettings_Navigation.h"
#include "AIAspectSettings_Weapon.h"
#include "AIAspectSettings_Rotation.h"
#include "AIAction_UseCover.generated.h"

UCLASS(CollapseCategories, EditInlineNew)
class GBXAI_API UAIAction_UseCover : public UAIAction_Priority {
    GENERATED_BODY()
public:
private:
    UPROPERTY()
    bool bCanShootWhileMoving;
    
    UPROPERTY()
    uint8 UseCoverVersion;
    
protected:
    UPROPERTY(EditAnywhere)
    FAIAspectSettings_UseCover CoverSettings;
    
    UPROPERTY(EditAnywhere)
    FEnvQueryParams CoverQuery;
    
    UPROPERTY(EditAnywhere)
    FGbxQueryOptions CoverQueryOptions;
    
    UPROPERTY(EditAnywhere)
    FAIAspectSettings_Weapon WeaponSettings;
    
    UPROPERTY(EditAnywhere)
    FAIAspectSettings_Navigation NavSettings;
    
    UPROPERTY(EditAnywhere)
    FAIAspectSettings_Rotation MovingRotationSettings;
    
    UPROPERTY(EditAnywhere)
    bool bRotateDuringMovement;
    
public:
    UAIAction_UseCover();
};

