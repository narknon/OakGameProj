#pragma once
#include "CoreMinimal.h"
#include "Components/SceneComponent.h"
#include "WwiseGameObjectComponent.generated.h"

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class WWISEAUDIO_API UWwiseGameObjectComponent : public USceneComponent {
    GENERATED_BODY()
public:
    UWwiseGameObjectComponent();
};

