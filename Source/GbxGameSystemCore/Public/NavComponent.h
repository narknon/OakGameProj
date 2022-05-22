#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "NavComponent.generated.h"

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class GBXGAMESYSTEMCORE_API UNavComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UNavComponent();
};

