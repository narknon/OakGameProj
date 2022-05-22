#pragma once
#include "CoreMinimal.h"
#include "UsableComponent.h"
#include "SocialInteractionComponent.generated.h"

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class USocialInteractionComponent : public UUsableComponent {
    GENERATED_BODY()
public:
    USocialInteractionComponent();
};

