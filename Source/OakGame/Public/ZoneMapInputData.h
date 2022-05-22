#pragma once
#include "CoreMinimal.h"
#include "GbxDataAsset.h"
#include "UObject/NoExportTypes.h"
#include "ZoneMapInputData.generated.h"

class UCurveFloat;

UCLASS(BlueprintType)
class OAKGAME_API UZoneMapInputData : public UGbxDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float SpawnPitchValue;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float TargetSpawnPitchValue;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float SpawnPitchInterpSpeed;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float PitchMin;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float PitchMax;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float RotationYawInterpSpeed;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float RotationPitchInterpSpeed;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float RotationYawInterpSpeedMouse;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float RotationPitchInterpSpeedMouse;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float RotationYawSpeedMax;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float RotationPitchSpeedMax;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float RotationSpeed;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float ScaleMin;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float ScaleMax;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float LevelScaleRate;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float LevelInterpModeSpeed;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float MouseLevelScaleRate;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float MousePlanetScaleRate;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float MouseGalaxyScaleRate;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float PlanetGalaxyScaleRate;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float KeyboardLevelScaleAxisMultiplier;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float SpawnScaleValue;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float TargetSpawnScaleValue;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float SpawnScaleInterpSpeed;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float ScaleRate;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float ScaleInterpolationSpeed;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float TransformInterpSpeed;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float TransformInterpSpeedMouse;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float TransformMoveSpeedMouse;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float TransformAcceleration;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float TransformBuffer;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float GlobalTransformScale;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    UCurveFloat* POIStickinessCurve;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    UCurveFloat* MovementSpeedByScaleCurve;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    UCurveFloat* ZoomCurve;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    UCurveFloat* ZoomSpeedByZoomCurve;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    UCurveFloat* ZoomSpeedBasedOnZoom;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float DisplayRadius;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float POITraceRadius;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float POITraceLeadScale;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    bool DebugTrace;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    UCurveFloat* POISphereScaleOverZoneMapScale;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    bool bRecenterResetsOrientation;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float GalaxyPitchMax;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float GalaxyPitchMin;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float GalaxyPitchInterpSpeed;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float GalaxyYawInterpSpeed;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float GalaxyInterpSpeedMouse;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float GalaxyMoveSpeedMouse;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float GalaxyDefaultPitch;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float GalaxyYawMax;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float GalaxyYawMin;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float GalaxyInterpModeSpeed;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float PlanetPitchMax;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float PlanetPitchMin;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float PlanetYawMax;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float PlanetYawMin;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float PlanetRotationInterpSpeed;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float PlanetRotationInterpSpeedMouse;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float PlanetRotationMoveSpeedMouse;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float PlanetInterpModeSpeed;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float MiniMap_Pitch;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float MiniMap_FoV;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float MiniMap_Distance;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FVector MiniMap_RelativeOffset;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float MouseAxisSensitivityMin;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float MouseAxisSensitivityMax;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    bool bInvertMouseXAxis;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    bool bInvertMouseYAxis;
    
    UZoneMapInputData();
};

