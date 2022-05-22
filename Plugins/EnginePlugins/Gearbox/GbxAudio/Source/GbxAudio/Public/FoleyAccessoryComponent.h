#pragma once
#include "CoreMinimal.h"
#include "Components/SceneComponent.h"
#include "FoleyAccessoryComponent.generated.h"

class UFoleyMainComponent;
class UWwiseEvent;

UCLASS(BlueprintType, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class GBXAUDIO_API UFoleyAccessoryComponent : public USceneComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UWwiseEvent* FoleyAccessoryWwiseEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UWwiseEvent* LoopStartWwiseEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float AccessoryVolume;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float AccesoryPitch;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float AccessoryRadius;
    
    UPROPERTY(Export, Transient)
    UFoleyMainComponent* MyFoleyMain;
    
    UFoleyAccessoryComponent();
};

