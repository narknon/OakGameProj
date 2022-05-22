#pragma once
#include "CoreMinimal.h"
#include "Components/SceneComponent.h"
#include "SocketComponent.generated.h"

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class GBXGAMESYSTEMCORE_API USocketComponent : public USceneComponent {
    GENERATED_BODY()
public:
    USocketComponent();
};

