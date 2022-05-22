#pragma once
#include "CoreMinimal.h"
#include "Components/StaticMeshComponent.h"
#include "GbxStaticMeshComponent.generated.h"

class UGbxCustomizationTargetData;

UCLASS(EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class GBXGAMESYSTEMCORE_API UGbxStaticMeshComponent : public UStaticMeshComponent {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    TArray<UGbxCustomizationTargetData*> CustomizationTargets;
    
    UGbxStaticMeshComponent();
};

