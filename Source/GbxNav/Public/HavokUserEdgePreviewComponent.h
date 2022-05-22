#pragma once
#include "CoreMinimal.h"
#include "Components/PrimitiveComponent.h"
#include "HavokUserEdgePreviewComponent.generated.h"

class UBlueprint;

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class GBXNAV_API UHavokUserEdgePreviewComponent : public UPrimitiveComponent {
    GENERATED_BODY()
public:
    UHavokUserEdgePreviewComponent();
    UFUNCTION()
    void OnBlueprintCompiled(UBlueprint* BP);
    
};

