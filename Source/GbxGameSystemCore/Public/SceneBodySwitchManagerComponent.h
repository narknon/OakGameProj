#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "SceneBodySwitchManagerComponent.generated.h"

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class GBXGAMESYSTEMCORE_API USceneBodySwitchManagerComponent : public UActorComponent {
    GENERATED_BODY()
public:
    USceneBodySwitchManagerComponent();
};

