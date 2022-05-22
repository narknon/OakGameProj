#pragma once
#include "CoreMinimal.h"
#include "GbxBlackboardKeySelector.h"
#include "GbxParam.h"
#include "EOrbitDirection.h"
#include "AIAspectSettings_Orbit.generated.h"

USTRUCT(BlueprintType)
struct FAIAspectSettings_Orbit {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FGbxBlackboardKeySelector CenterKey;
    
    UPROPERTY(EditAnywhere)
    FGbxParam HeightOffset;
    
    UPROPERTY(EditAnywhere)
    FGbxParam OrbitRadius;
    
    UPROPERTY(EditAnywhere)
    FGbxParam OrbitAngle;
    
    UPROPERTY(EditAnywhere)
    FGbxParam OrbitAngleInterval;
    
    UPROPERTY(EditAnywhere)
    EOrbitDirection Direction;
    
    UPROPERTY(EditAnywhere)
    float SearchRadius;
    
    UPROPERTY(EditAnywhere)
    bool bRespectCombatTerritory;
    
    GBXAI_API FAIAspectSettings_Orbit();
};

