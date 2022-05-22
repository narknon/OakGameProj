#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "OakLoadingSceneCaptureActor.generated.h"

class USceneCaptureComponent2D;

UCLASS()
class OAKGAME_API AOakLoadingSceneCaptureActor : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(Export)
    USceneCaptureComponent2D* CaptureComponent;
    
    AOakLoadingSceneCaptureActor();
};

