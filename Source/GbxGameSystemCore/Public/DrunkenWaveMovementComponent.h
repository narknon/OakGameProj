#pragma once
#include "CoreMinimal.h"
#include "DrunkenBaseMovementComponent.h"
#include "Vector2DWaveform.h"
#include "DrunkenWaveMovementComponent.generated.h"

UCLASS(EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class GBXGAMESYSTEMCORE_API UDrunkenWaveMovementComponent : public UDrunkenBaseMovementComponent {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    TArray<FVector2DWaveform> Waveforms;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float GlobalWaveformScale;
    
    UPROPERTY(EditAnywhere)
    float MaxRandomWaveOffsetTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bGravityAffectsDrunkenness;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float DrunkenGravityScalar;
    
    UDrunkenWaveMovementComponent();
};

