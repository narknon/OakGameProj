#pragma once
#include "CoreMinimal.h"
#include "CohtmlBaseComponent.h"
#include "HummingbirdBaseComponent.generated.h"

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class COHTMLPLUGIN_API UHummingbirdBaseComponent : public UCohtmlBaseComponent {
    GENERATED_BODY()
public:
    UHummingbirdBaseComponent();
};

